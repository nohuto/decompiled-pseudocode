/*
 * XREFs of sub_14057DBB0 @ 0x14057DBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057E78C @ 0x14057E78C (sub_14057E78C.c)
 */

__int64 __fastcall sub_14057DBB0(__int64 a1, __int64 a2)
{
  sub_14042A5E0(*(_QWORD *)(a1 + 8), a2);
  sub_14042A5E0(a1, a2);
  return sub_14057E78C(*(_QWORD *)(a1 + 8), a1, a2);
}
