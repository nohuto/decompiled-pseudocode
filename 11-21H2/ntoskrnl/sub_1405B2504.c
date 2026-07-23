/*
 * XREFs of sub_1405B2504 @ 0x1405B2504
 * Callers:
 *     sub_1405952D8 @ 0x1405952D8 (sub_1405952D8.c)
 *     sub_140599780 @ 0x140599780 (sub_140599780.c)
 *     sub_14059E8F0 @ 0x14059E8F0 (sub_14059E8F0.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1405B2504(__int64 a1)
{
  unsigned __int8 v1; // bl
  char result; // al
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf

  v1 = *(_BYTE *)(a1 + 8);
  if ( v1 == 17 )
    return sub_1402BB6D0((__int64)&qword_140C534C0, *(_QWORD **)(a1 + 16), *(_DWORD *)(a1 + 4));
  v3 = *((_QWORD *)KeGetCurrentPrcb() + 4199);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 12344) = 0LL;
    v1 = *(_BYTE *)(a1 + 8);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = ~(unsigned __int16)(-1LL << (v1 + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = v1;
  __writecr8(v1);
  return result;
}
