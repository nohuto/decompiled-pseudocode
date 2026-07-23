/*
 * XREFs of sub_140355144 @ 0x140355144
 * Callers:
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     sub_1403BA340 @ 0x1403BA340 (sub_1403BA340.c)
 * Callees:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_1403551C8 @ 0x1403551C8 (sub_1403551C8.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     sub_140355774 @ 0x140355774 (sub_140355774.c)
 *     sub_140356350 @ 0x140356350 (sub_140356350.c)
 */

__int64 __fastcall sub_140355144(ULONG_PTR a1, __int64 a2, char a3, int *a4)
{
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r8

  sub_140355350(a1);
  LOBYTE(v8) = a3;
  result = sub_1403551C8(a2, v8);
  if ( a3 )
    return sub_140355774(a1);
  if ( (_BYTE)result )
  {
    LOBYTE(v10) = 1;
    result = sub_140356350(a1, *(unsigned int *)(a2 + 16), v10, a4);
    if ( (_BYTE)result == 1 )
      return sub_140354CBC(0LL, a4, v11);
  }
  return result;
}
