/*
 * XREFs of MiMarkKernelCfgAddressTakenImports @ 0x140A4402C
 * Callers:
 *     MiProcessKernelCfgAddressTakenImports @ 0x140A440DC (MiProcessKernelCfgAddressTakenImports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     MiMarkKernelCfgTarget @ 0x1402F7A50 (MiMarkKernelCfgTarget.c)
 */

__int64 __fastcall MiMarkKernelCfgAddressTakenImports(__int64 a1)
{
  _DWORD *v2; // rax
  unsigned int v3; // esi
  unsigned int v4; // r14d
  _DWORD *v5; // rdi
  unsigned int v6; // ebp
  __int64 result; // rax
  ULONG v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &v8);
  v3 = 0;
  v4 = v2[42];
  v5 = (_DWORD *)*((_QWORD *)v2 + 20);
  v6 = (v2[36] >> 28) + 4;
  if ( v4 )
  {
    while ( *v5 <= (unsigned int)(*(_DWORD *)(a1 + 64) - 8) && (*v5 & 7) == 0 )
    {
      result = MiMarkKernelCfgTarget();
      if ( (int)result < 0 )
        return result;
      ++v3;
      v5 = (_DWORD *)((char *)v5 + v6);
      if ( v3 >= v4 )
        goto LABEL_6;
    }
    return 3221225595LL;
  }
  else
  {
LABEL_6:
    *(_DWORD *)(a1 + 104) |= 0x100u;
    return 0LL;
  }
}
