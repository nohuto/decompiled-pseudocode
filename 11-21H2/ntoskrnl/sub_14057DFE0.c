/*
 * XREFs of sub_14057DFE0 @ 0x14057DFE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057ECF0 @ 0x14057ECF0 (sub_14057ECF0.c)
 */

__int64 __fastcall sub_14057DFE0(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // esi
  __int64 v4; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v3 = a1;
  v4 = sub_14042A5E0(a1, a2);
  sub_14057ECF0(v4, (_DWORD)retaddr, v3, v2, 78);
  return v4;
}
