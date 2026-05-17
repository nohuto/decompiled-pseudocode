/*
 * XREFs of LdrpLogDllState @ 0x180044F74
 * Callers:
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpApplyFileNameRedirection @ 0x180044B54 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 *     LdrpAllocatePlaceHolder @ 0x18004DE38 (LdrpAllocatePlaceHolder.c)
 *     LdrpSendPostSnapNotifications @ 0x18004E44C (LdrpSendPostSnapNotifications.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 *     LdrpInitializeNode @ 0x1800732F4 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 *     ApiSetQueryApiSetPresence @ 0x18007E210 (ApiSetQueryApiSetPresence.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpCorProcessImports @ 0x18008B534 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 */

unsigned int *__fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int *result; // rax
  _DWORD *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = (unsigned int *)NtCurrentPeb();
  v7 = (_DWORD *)*((_QWORD *)result + 18);
  if ( v7 && *v7 )
  {
    result = (unsigned int *)NtCurrentPeb();
    v8 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v9 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        return (unsigned int *)LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return result;
}
