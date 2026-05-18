/*
 * XREFs of sub_18005FB90 @ 0x18005FB90
 * Callers:
 *     sub_18005F370 @ 0x18005F370 (sub_18005F370.c)
 * Callees:
 *     sub_18005FD9C @ 0x18005FD9C (sub_18005FD9C.c)
 */

__int64 __fastcall sub_18005FB90(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18005FD9C(v2 + 40);
  return sub_18001D2A8(a1);
}
