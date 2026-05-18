/*
 * XREFs of sub_1800DB070 @ 0x1800DB070
 * Callers:
 *     sub_1800DABC8 @ 0x1800DABC8 (sub_1800DABC8.c)
 *     sub_1800F1CC4 @ 0x1800F1CC4 (sub_1800F1CC4.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800DB070(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18000E72C((__int64 *)(v2 + 40));
  return sub_180031794(a1);
}
