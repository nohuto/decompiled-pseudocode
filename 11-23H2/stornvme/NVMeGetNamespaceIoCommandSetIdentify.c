/*
 * XREFs of NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001EFA8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000D910 (NVMeControllerInitPart1.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C0022BC4 (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeGetNamespaceIoCommandSetIdentify(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // r14
  unsigned int i; // edi
  int j; // edx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *(_QWORD *)(a1 + 1936);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 232); ++i )
    {
      v1 = *(_UNKNOWN ***)(a1 + 8LL * i + 1952);
      if ( v1 )
      {
        if ( (*((_DWORD *)v1 + 5) & 0x100) != 0 )
        {
          LocalCommandReuse(a1, a1 + 944);
          for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= j )
            ++j;
          *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
          v6 = *(_QWORD *)(a1 + 1944);
          v7 = *(_QWORD *)(a1 + 1040) + 4096LL;
          *(_BYTE *)(v7 + 47) = 2;
          *(_QWORD *)(v7 + 24) = v6;
          *(_BYTE *)v7 = 6;
          *(_DWORD *)(v7 + 4) = i + 1;
          *(_BYTE *)(v7 + 40) = 5;
          *(_DWORD *)(v7 + 42) = 0;
          ProcessCommand(a1, a1 + 952);
          Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
          LOBYTE(v1) = WaitForCommandCompleteWithCustomTimeout(a1);
          if ( *(_BYTE *)(a1 + 955) == 1 )
          {
            *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 120LL) ^= (*(_WORD *)v2 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1952)
                                                                                             + 120LL)) & 1;
            *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 120LL) ^= (*(_WORD *)v2 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1952)
                                                                                             + 120LL)) & 2;
            v8 = *(_QWORD *)(a1 + 8LL * i + 1952);
            *(_WORD *)(v8 + 122) ^= (*(_WORD *)(v8 + 122) ^ *(_WORD *)(v2 + 2)) & 1;
            *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 124LL) = *(_DWORD *)(v2 + 4);
            *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 128LL) = *(_DWORD *)(v2 + 8);
            *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 132LL) = *(_DWORD *)(v2 + 12);
            *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 136LL) = *(_DWORD *)(v2 + 16);
            *(_QWORD *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 144LL) = *(_QWORD *)(v2 + 2816);
            LOBYTE(v1) = *(_BYTE *)(v2 + 2824);
            *(_BYTE *)(*(_QWORD *)(a1 + 8LL * i + 1952) + 152LL) = (_BYTE)v1;
          }
        }
      }
    }
  }
  return (char)v1;
}
