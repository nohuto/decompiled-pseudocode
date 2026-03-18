/*
 * XREFs of NVMeGetNamespaceDescriptorListIdentify @ 0x1C0008768
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C000F320 (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

void __fastcall NVMeGetNamespaceDescriptorListIdentify(__int64 a1)
{
  unsigned __int8 *v1; // r14
  unsigned int i; // esi
  void *v4; // rcx
  int v5; // edx
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int8 *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = *(unsigned __int8 **)(a1 + 1736);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 224); ++i )
    {
      if ( *(_QWORD *)(a1 + 8LL * i + 1752) )
      {
        v4 = *(void **)(a1 + 952);
        *(_BYTE *)(a1 + 867) = 0;
        memset(v4, 0, 0x10A0uLL);
        v5 = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
        *(_DWORD *)(a1 + 856) = 1;
        do
          *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= ++v5;
        while ( v5 < 2 );
        *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
        v6 = *(_QWORD *)(a1 + 952) + 4096LL;
        *(_QWORD *)(v6 + 24) = *(_QWORD *)(a1 + 1744);
        *(_BYTE *)v6 = 6;
        *(_DWORD *)(v6 + 4) = i + 1;
        *(_BYTE *)(v6 + 40) = 3;
        *(_DWORD *)(v6 + 42) = 0;
        *(_BYTE *)(v6 + 47) = 0;
        ProcessCommand(a1, a1 + 864);
        WaitForCommandCompleteWithCustomTimeout(a1);
        if ( *(_BYTE *)(a1 + 867) == 1 )
        {
          v7 = *v1;
          v8 = v1;
          v9 = 0;
          while ( v7 && v9 < 0x1000 )
          {
            if ( v7 == 4 )
            {
              if ( v8[4] == 2 )
              {
                v11 = *(_QWORD *)(a1 + 8LL * i + 1752);
                *(_DWORD *)(v11 + 20) |= 0x100u;
                *(_DWORD *)(a1 + 32) |= 0x2000u;
              }
              break;
            }
            v10 = v8[1];
            v9 += v10 + 4;
            v8 += v10 + 4;
            v7 = *v8;
          }
        }
      }
    }
  }
}
