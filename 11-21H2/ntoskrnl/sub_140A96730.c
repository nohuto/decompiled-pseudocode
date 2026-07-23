/*
 * XREFs of sub_140A96730 @ 0x140A96730
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140A7F710 @ 0x140A7F710 (sub_140A7F710.c)
 *     sub_140A7F7DA @ 0x140A7F7DA (sub_140A7F7DA.c)
 */

void __fastcall sub_140A96730(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  char *v3; // rdi
  PKSPIN_LOCK v4; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v7; // r10
  int v8; // eax
  bool v9; // zf

  v2 = a2;
  v3 = sub_140A7F710(KeGetCurrentIrql(), a2);
  KeReleaseSpinLockFromDpcLevel(v4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  sub_140A7F7DA((__int64)v3, 1u);
}
