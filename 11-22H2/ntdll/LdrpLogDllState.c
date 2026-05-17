/*
 * XREFs of LdrpLogDllState @ 0x180019CC4
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018AA0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDll @ 0x18001927C (LdrpLoadDll.c)
 *     LdrpApplyFileNameRedirection @ 0x180019AE4 (LdrpApplyFileNameRedirection.c)
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpProcessMappedModule @ 0x18002B594 (LdrpProcessMappedModule.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x18002D480 (LdrpLoadKnownDll.c)
 *     LdrpAllocatePlaceHolder @ 0x18002E530 (LdrpAllocatePlaceHolder.c)
 *     LdrpSendPostSnapNotifications @ 0x18002EF60 (LdrpSendPostSnapNotifications.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 *     ApiSetQueryApiSetPresence @ 0x180077100 (ApiSetQueryApiSetPresence.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpCorProcessImports @ 0x18008E144 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800DB9FC (LdrpLogEtwEvent.c)
 */

struct _PEB *__fastcall LdrpLogDllState(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  struct _PEB *result; // rax
  int v6; // esi
  _DWORD *SharedData; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = NtCurrentPeb();
  v6 = a1;
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v8 = (__int64)result->SharedData + 554;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(a1, a2, v8, SharedData);
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v9 = (__int64)result->SharedData + 555;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        return (struct _PEB *)LdrpLogEtwEvent(a3, v6, 0, 0, a2, 0LL);
    }
  }
  return result;
}
