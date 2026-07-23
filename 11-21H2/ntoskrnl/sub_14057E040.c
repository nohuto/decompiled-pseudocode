/*
 * XREFs of sub_14057E040 @ 0x14057E040
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057ECF0 @ 0x14057ECF0 (sub_14057ECF0.c)
 */

__int64 __fastcall sub_14057E040(__int64 a1, __int64 a2, char a3)
{
  int v4; // esi
  int v5; // ebp
  __int64 v6; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  v5 = a1;
  v6 = sub_14042A5E0(a1, a2);
  sub_14057ECF0(v6, (_DWORD)retaddr, v5, v4, a3);
  return v6;
}
