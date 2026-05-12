/*
 * XREFs of sub_1C0008C44 @ 0x1C0008C44
 * Callers:
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0013934 @ 0x1C0013934 (sub_1C0013934.c)
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C004BA94 @ 0x1C004BA94 (sub_1C004BA94.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0061770 @ 0x1C0061770 (sub_1C0061770.c)
 *     sub_1C0074EE0 @ 0x1C0074EE0 (sub_1C0074EE0.c)
 *     sub_1C00A21E0 @ 0x1C00A21E0 (sub_1C00A21E0.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A7664 @ 0x1C00A7664 (sub_1C00A7664.c)
 *     sub_1C00A7954 @ 0x1C00A7954 (sub_1C00A7954.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     sub_1C0008D80 @ 0x1C0008D80 (sub_1C0008D80.c)
 *     sub_1C00659DC @ 0x1C00659DC (sub_1C00659DC.c)
 */

void __fastcall sub_1C0008C44(__int64 a1, int a2, __int64 a3)
{
  KIRQL v3; // bp
  __int64 v6; // rcx
  struct _MDL *v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  bool v10; // di
  __int64 v11; // rdx

  if ( a1 )
  {
    v3 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      v8 = *(_QWORD *)(a1 + 168);
      if ( *(_BYTE *)(v8 + 2) == 40 )
        v9 = *(_DWORD *)(v8 + 24);
      else
        v9 = *(_DWORD *)(v8 + 12);
      v10 = (v9 & 0x40) == 0;
      if ( dword_1C0093B08 )
        sub_1C00659DC(a1);
      if ( !a2 )
        v3 = KfRaiseIrql(2u);
      LOBYTE(a3) = v10;
      sub_1C0008D80(*(_QWORD *)(a1 + 216) + 760LL, *(_QWORD *)(a1 + 112), a3);
      v11 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      if ( v11 )
      {
        sub_1C0008D80(*(_QWORD *)(a1 + 216) + 760LL, v11, 0LL);
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      if ( !a2 )
        KeLowerIrql(v3);
    }
    v6 = *(_QWORD *)(a1 + 104);
    if ( v6 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v6 + 10) & 2) != 0 )
        MmUnlockPages((PMDL)v6);
      IoFreeMdl(*(PMDL *)(a1 + 104));
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_BYTE *)(a1 + 16) &= ~1u;
    }
    v7 = *(struct _MDL **)(a1 + 136);
    if ( v7 )
    {
      MmUnlockPages(v7);
      IoFreeMdl(*(PMDL *)(a1 + 136));
      *(_QWORD *)(a1 + 136) = 0LL;
    }
  }
}
