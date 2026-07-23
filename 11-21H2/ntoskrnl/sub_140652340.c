/*
 * XREFs of sub_140652340 @ 0x140652340
 * Callers:
 *     sub_140651480 @ 0x140651480 (sub_140651480.c)
 * Callees:
 *     sub_140650AA8 @ 0x140650AA8 (sub_140650AA8.c)
 *     sub_1406520B8 @ 0x1406520B8 (sub_1406520B8.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 */

__int64 __fastcall sub_140652340(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v7 = 152LL;
        break;
      case 2:
        v7 = 184LL;
        break;
      case 5:
        v7 = 192LL;
        break;
      case 19:
        v7 = 176LL;
        break;
      case 63:
        v7 = 168LL;
        break;
      default:
        if ( a3 )
          return sub_1406D9550(a3);
        return result;
    }
  }
  else
  {
    v7 = 160LL;
  }
  v8 = *(_QWORD *)(v7 + a1);
  if ( v8 )
    result = sub_1406D9550(v8);
  *(_QWORD *)(v7 + a1) = a3;
  if ( !a2 )
    return sub_140650AA8(*(CHAR **)(a1 + 160), a1 + 24, a1 + 40, a1 + 56, a1 + 72);
  if ( a2 == 19 )
    return sub_1406520B8(a1);
  return result;
}
