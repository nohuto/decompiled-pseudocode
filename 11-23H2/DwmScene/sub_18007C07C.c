/*
 * XREFs of sub_18007C07C @ 0x18007C07C
 * Callers:
 *     sub_18007BE40 @ 0x18007BE40 (sub_18007BE40.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_18007C07C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B24(v2 + 32);
  return sub_180031770(a1);
}
