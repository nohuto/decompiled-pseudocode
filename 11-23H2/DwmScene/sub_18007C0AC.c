/*
 * XREFs of sub_18007C0AC @ 0x18007C0AC
 * Callers:
 *     sub_18007BCD0 @ 0x18007BCD0 (sub_18007BCD0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_18007C0AC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      sub_180010530(v3);
  }
  return sub_18007C004(a1);
}
