/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C00224B0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     NVMeFreeNamespaceEnumerationContext @ 0x1C001D708 (NVMeFreeNamespaceEnumerationContext.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x1C0021CA0 (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x1C0022138 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x1C002218C (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C002290C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C0022BC4 (NVMeReenumerateNameSpaceRescan.c)
 *     NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x1C0022F10 (NVMeReenumerateNameSpaceWaitForAllIOComplete.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0023080 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeVersionCheck @ 0x1C0024DE4 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  char v6; // di
  _BYTE *v7; // r12
  __int64 result; // rax
  __int64 v9; // rax
  unsigned int v10; // r13d
  int i; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // [rsp+E0h] [rbp+67h] BYREF
  void *v16; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+F0h] [rbp+77h]
  __int64 v18; // [rsp+F8h] [rbp+7Fh]

  v17 = a3;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1840) + 516LL);
  if ( v5 > 0xFF )
    v5 = 255;
  v6 = 0;
  v16 = 0LL;
  v18 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  v7 = v16;
  if ( v16 )
  {
    v9 = 0LL;
    v15 = 0;
    do
    {
      v10 = *(_DWORD *)(a2 + 4 * v9 + 2048);
      if ( !v10 )
        break;
      if ( v10 <= v5 )
      {
        LocalCommandReuse(a1, a1 + 1584);
        for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1680) + 4253LL) |= i )
          ++i;
        *(_WORD *)(*(_QWORD *)(a1 + 1680) + 4244LL) = 0;
        memset(v16, 0, 0x1000uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 4200LL) = v16;
        *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 4208LL) = v18;
        *(_DWORD *)(*(_QWORD *)(a1 + 1680) + 4240LL) = 4096;
        v12 = *(_QWORD *)(a1 + 1680) + 4096LL;
        *(_QWORD *)(v12 + 24) = v18;
        *(_BYTE *)v12 = 6;
        *(_DWORD *)(v12 + 4) = v10;
        *(_BYTE *)(v12 + 40) = 0;
        ProcessCommand(a1, a1 + 1592);
        Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *(_BYTE *)(a1 + 1595) == 1
          && (*(_BYTE *)(a1 + 20)
           || v5 <= 1
           || !(unsigned __int8)NVMeVersionCheck(a1)
           || v7[4 * (v7[26] & 0xF) + 130]
           || *(_QWORD *)v7) )
        {
          StorPortExtendedFunction(0LL, a1, 424LL);
          ++*(_DWORD *)(a1 + 4492);
          if ( *(_BYTE *)(a1 + 22) )
            StorPortExtendedFunction(85LL, a1, 0LL);
          break;
        }
      }
      v9 = (unsigned int)(v15 + 1);
      v15 = v9;
    }
    while ( (unsigned int)v9 < 0x400 );
    if ( v16 )
      NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v16, v18);
    v13 = a1;
    if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u) )
    {
      v6 = 1;
      v14 = a2 + 2048;
LABEL_26:
      NVMeReenumerateReissueGetLogNamespaceChangeList(v13, v14);
LABEL_37:
      NVMeFreeNamespaceEnumerationContext(a1, a2, v6);
      return StorPortExtendedFunction(31LL, a1, v17);
    }
    v15 = 0;
    if ( (unsigned int)NVMeReenumerateNameSpaceCompare(a1, a2, v5, &v15) )
    {
      if ( !(unsigned __int8)NVMeReenumerateNameSpaceWaitForAllIOComplete(a1) )
      {
        NVMeReenumerateNameSpaceCancelMerge(a1, v5);
        v6 = 1;
        goto LABEL_37;
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u) )
      {
        NVMeReenumerateNameSpaceCancelMerge(a1, v5);
        v14 = a2 + 2048;
        v6 = 1;
LABEL_32:
        v13 = a1;
        goto LABEL_26;
      }
      NVMeReenumerateNameSpaceMerge(a1, a2, v5);
      NVMeReenumerateNameSpaceRescan(a1);
    }
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u) )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
      goto LABEL_37;
    }
    v14 = 0LL;
    goto LABEL_32;
  }
  NVMeFreeNamespaceEnumerationContext(a1, a2, 1);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
  result = (unsigned int)(*(_DWORD *)(a1 + 4488) + 1);
  *(_DWORD *)(a1 + 4488) = result;
  if ( *(_BYTE *)(a1 + 22) )
    return StorPortExtendedFunction(85LL, a1, 0LL);
  return result;
}
