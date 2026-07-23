/*
 * XREFs of sub_140250BDC @ 0x140250BDC
 * Callers:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_140978C9C @ 0x140978C9C (sub_140978C9C.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 *     sub_140983AC0 @ 0x140983AC0 (sub_140983AC0.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 */

__int64 __fastcall sub_140250BDC(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v1 )
    return sub_1402BB6D0(&qword_140C534C0, *(_QWORD *)(a1 + 16), v1);
  return result;
}
