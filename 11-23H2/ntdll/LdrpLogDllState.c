/*
 * XREFs of LdrpLogDllState @ 0x180019AB4
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800109E4 (LdrpMapDllNtFileName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018890 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDll @ 0x18001906C (LdrpLoadDll.c)
 *     LdrpApplyFileNameRedirection @ 0x1800198D4 (LdrpApplyFileNameRedirection.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpProcessMappedModule @ 0x18002B3C4 (LdrpProcessMappedModule.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x18002D2B0 (LdrpLoadKnownDll.c)
 *     LdrpAllocatePlaceHolder @ 0x18002E360 (LdrpAllocatePlaceHolder.c)
 *     LdrpSendPostSnapNotifications @ 0x18002ED90 (LdrpSendPostSnapNotifications.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 *     ApiSetQueryApiSetPresence @ 0x180077770 (ApiSetQueryApiSetPresence.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpCorProcessImports @ 0x18008E944 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800DB3AC (LdrpLogEtwEvent.c)
 */

int __fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  struct _PEB *v3; // rax
  _DWORD *SharedData; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  v3 = NtCurrentPeb();
  SharedData = v3->SharedData;
  if ( SharedData && *SharedData )
  {
    v3 = NtCurrentPeb();
    v8 = (__int64)v3->SharedData + 554;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    v3 = NtCurrentPeb();
    if ( (v3->TracingFlags & 4) != 0 )
    {
      LODWORD(v3) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v3 )
      {
        v3 = NtCurrentPeb();
        v9 = (__int64)v3->SharedData + 555;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        LODWORD(v3) = LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return (int)v3;
}
