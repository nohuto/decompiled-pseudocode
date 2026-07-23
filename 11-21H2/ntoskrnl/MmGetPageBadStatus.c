/*
 * XREFs of MmGetPageBadStatus @ 0x14058F140
 * Callers:
 *     sub_14051C3E0 @ 0x14051C3E0 (sub_14051C3E0.c)
 *     sub_140646C90 @ 0x140646C90 (sub_140646C90.c)
 *     sub_140A09FB4 @ 0x140A09FB4 (sub_140A09FB4.c)
 * Callees:
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall MmGetPageBadStatus(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf

  v1 = *a1 >> 12;
  if ( v1 > qword_140C50840 || (*(_QWORD *)(48 * v1 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
    return 3221225711LL;
  v2 = 48 * v1 - 0x220000000000LL;
  v3 = (unsigned __int8)sub_1402F2700(v2);
  if ( sub_140273354(v2) )
  {
    v4 = -1073740023;
  }
  else
  {
    v4 = 0;
    if ( (*(_BYTE *)(v2 + 35) & 0x40) != 0 )
      v4 = 259;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v4;
}
