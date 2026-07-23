/*
 * XREFs of sub_14021158C @ 0x14021158C
 * Callers:
 *     sub_140293184 @ 0x140293184 (sub_140293184.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140346E50 @ 0x140346E50 (sub_140346E50.c)
 * Callees:
 *     sub_14021162C @ 0x14021162C (sub_14021162C.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14021158C(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rsi
  char v6; // bp
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v10; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  v4 = a3;
  v6 = 1;
  sub_1402F3290(a2);
  if ( (*(_DWORD *)(a2 + 840) & 7) != 0 )
  {
    sub_14021162C(a1, a2);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a1 == *((_QWORD *)CurrentPrcb + 1) )
    {
      *(_BYTE *)(a1 + 643) = 23;
      *(_BYTE *)(a1 + 390) = v4;
      sub_1402B3140(a1, CurrentPrcb, 0LL);
      return v6;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = *((_QWORD *)v10 + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(v10);
      }
    }
  }
  __writecr8(v4);
  return v6;
}
