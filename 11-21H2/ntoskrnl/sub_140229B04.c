/*
 * XREFs of sub_140229B04 @ 0x140229B04
 * Callers:
 *     sub_14021ACBC @ 0x14021ACBC (sub_14021ACBC.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 * Callees:
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     sub_14024E928 @ 0x14024E928 (sub_14024E928.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_140229B04(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v4; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r9
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf

  if ( !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)sub_14024E928(a1, (char *)CurrentPrcb + 35704, a1 + 808) )
      sub_140229D30(CurrentPrcb);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          v6 = KeGetCurrentPrcb();
          v7 = *((_QWORD *)v6 + 4375);
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C(v6);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
