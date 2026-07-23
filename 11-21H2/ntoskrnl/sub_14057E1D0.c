/*
 * XREFs of sub_14057E1D0 @ 0x14057E1D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057EEC4 @ 0x14057EEC4 (sub_14057EEC4.c)
 */

__int64 __fastcall sub_14057E1D0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v8; // edi
  unsigned int v9; // ebp
  __int64 v11; // [rsp+50h] [rbp+8h]

  v11 = 0LL;
  v8 = (unsigned __int8)a2;
  v9 = sub_14042A5E0(a1, a2);
  sub_14057EEC4(*(_QWORD *)(a1 + 8), a1, v11, v8, a3, v9);
  if ( a6 )
    *a6 = v11;
  return v9;
}
