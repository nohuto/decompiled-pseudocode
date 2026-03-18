/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 *     memset @ 0x1C0004B80 (memset.c)
 *     LocalCommandReuse @ 0x1C000C21C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C26C (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EEA4 (NVMeFreeDmaBuffer.c)
 *     NVMeFreeNamespaceEnumerationContext @ 0x1C001D314 (NVMeFreeNamespaceEnumerationContext.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x1C0021500 (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x1C0021998 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x1C00219EC (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C0022134 (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C00223EC (NVMeReenumerateNameSpaceRescan.c)
 *     NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x1C0022738 (NVMeReenumerateNameSpaceWaitForAllIOComplete.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C00228A8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeVersionCheck @ 0x1C0024468 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r15d
  char v6; // si
  __int64 result; // rax
  __int64 v8; // rax
  unsigned int v9; // r12d
  int i; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // [rsp+E0h] [rbp+67h] BYREF
  void *v15; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+F0h] [rbp+77h]
  _BYTE *v17; // [rsp+F8h] [rbp+7Fh]

  v16 = a3;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1840) + 516LL);
  if ( v5 > 0xFF )
    v5 = 255;
  v6 = 0;
  v15 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  v17 = v15;
  if ( v15 )
  {
    v8 = 0LL;
    v14 = 0;
    do
    {
      v9 = *(_DWORD *)(a2 + 4 * v8 + 2048);
      if ( !v9 )
        break;
      if ( v9 <= v5 )
      {
        LocalCommandReuse(a1, a1 + 1584);
        for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1680) + 4253LL) |= i )
          ++i;
        *(_WORD *)(*(_QWORD *)(a1 + 1680) + 4244LL) = 0;
        memset(v15, 0, 0x1000uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 4200LL) = v15;
        *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 4208LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(a1 + 1680) + 4240LL) = 4096;
        v11 = *(_QWORD *)(a1 + 1680) + 4096LL;
        *(_BYTE *)v11 = 6;
        *(_DWORD *)(v11 + 4) = v9;
        *(_QWORD *)(v11 + 24) = 0LL;
        *(_BYTE *)(v11 + 40) = 0;
        ProcessCommand(a1, a1 + 1592);
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *(_BYTE *)(a1 + 1595) == 1
          && (*(_BYTE *)(a1 + 20)
           || v5 <= 1
           || !(unsigned __int8)NVMeVersionCheck(a1)
           || v17[4 * (v17[26] & 0xF) + 130]
           || *(_QWORD *)v17) )
        {
          StorPortExtendedFunction(0LL, a1, 424LL);
          ++*(_DWORD *)(a1 + 4484);
          if ( *(_BYTE *)(a1 + 22) )
            StorPortExtendedFunction(85LL, a1, 0LL);
          break;
        }
      }
      v8 = (unsigned int)(v14 + 1);
      v14 = v8;
    }
    while ( (unsigned int)v8 < 0x400 );
    if ( v15 )
      NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v15, 0LL);
    v12 = a1;
    if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u) )
    {
      v6 = 1;
      v13 = a2 + 2048;
LABEL_26:
      NVMeReenumerateReissueGetLogNamespaceChangeList(v12, v13);
LABEL_37:
      NVMeFreeNamespaceEnumerationContext(a1, a2, v6);
      return StorPortExtendedFunction(31LL, a1, v16);
    }
    v14 = 0;
    if ( (unsigned int)NVMeReenumerateNameSpaceCompare(a1, a2, v5, &v14) )
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
        v13 = a2 + 2048;
        v6 = 1;
LABEL_32:
        v12 = a1;
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
    v13 = 0LL;
    goto LABEL_32;
  }
  NVMeFreeNamespaceEnumerationContext(a1, a2, 1);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
  result = (unsigned int)(*(_DWORD *)(a1 + 4480) + 1);
  *(_DWORD *)(a1 + 4480) = result;
  if ( *(_BYTE *)(a1 + 22) )
    return StorPortExtendedFunction(85LL, a1, 0LL);
  return result;
}
