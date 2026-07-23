/*
 * XREFs of sub_14057E0F0 @ 0x14057E0F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057EDEC @ 0x14057EDEC (sub_14057EDEC.c)
 */

__int64 __fastcall sub_14057E0F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  sub_14042A5E0(a1, a2);
  return sub_14057EDEC(a1, retaddr, v2);
}
