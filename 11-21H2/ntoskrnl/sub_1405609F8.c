/*
 * XREFs of sub_1405609F8 @ 0x1405609F8
 * Callers:
 *     sub_140560798 @ 0x140560798 (sub_140560798.c)
 *     sub_1409466AC @ 0x1409466AC (sub_1409466AC.c)
 *     sub_1409467F8 @ 0x1409467F8 (sub_1409467F8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140459E52 @ 0x140459E52 (sub_140459E52.c)
 *     sub_140459F42 @ 0x140459F42 (sub_140459F42.c)
 */

__int64 __fastcall sub_1405609F8(int a1)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v4; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf
  unsigned __int8 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  sub_140459E52(&v10);
  v2 = sub_140459F42(a1);
  KeReleaseSpinLockFromDpcLevel(&qword_140C468E8);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v4 = v10;
    if ( v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = *((_QWORD *)CurrentPrcb + 4375);
      v4 = v10;
      v7 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
      *(_DWORD *)(v6 + 20) &= v7;
      if ( v8 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  else
  {
    v4 = v10;
  }
  __writecr8(v4);
  return v2;
}
