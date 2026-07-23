/*
 * XREFs of sub_1402137E4 @ 0x1402137E4
 * Callers:
 *     sub_140213558 @ 0x140213558 (sub_140213558.c)
 *     MmGetCacheAttributeEx @ 0x140585C20 (MmGetCacheAttributeEx.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     sub_140216544 @ 0x140216544 (sub_140216544.c)
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     sub_1402166A4 @ 0x1402166A4 (sub_1402166A4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402137E4(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rax
  unsigned __int8 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  ULONG_PTR v10; // r9
  __int64 v12; // r9
  unsigned int v13; // edi
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // edx
  bool v18; // zf
  unsigned __int16 v19; // [rsp+60h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v5 = sub_1402166A4(BugCheckParameter2, 1LL);
  if ( v5 )
  {
    v13 = *(_DWORD *)(v5 + 40);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= v6 && CurrentIrql <= v6 && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(v7 << (CurrentIrql + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v13;
  }
  else
  {
    sub_1402165BC(5LL);
    v9 = (_QWORD *)*((_QWORD *)&xmmword_140C53100 + 1);
    while ( v9 )
    {
      v10 = v9[3];
      if ( BugCheckParameter2 < v10 )
      {
        v9 = (_QWORD *)*v9;
      }
      else
      {
        if ( BugCheckParameter2 < v10 + 512 )
        {
          LOBYTE(v8) = CurrentIrql;
          v19 = *((_WORD *)v9 + (BugCheckParameter2 & ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1)) - v10 + 40);
          sub_140216544(v8, 1LL);
          return v19 >> 14;
        }
        v9 = (_QWORD *)v9[1];
      }
    }
    if ( a2 )
      KeBugCheckEx(0x1Au, 0x61949uLL, BugCheckParameter2, 1uLL, 0LL);
    return 3LL;
  }
}
