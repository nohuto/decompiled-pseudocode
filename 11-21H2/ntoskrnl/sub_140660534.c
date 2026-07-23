/*
 * XREFs of sub_140660534 @ 0x140660534
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_1406602DC @ 0x1406602DC (sub_1406602DC.c)
 *     sub_140660388 @ 0x140660388 (sub_140660388.c)
 *     sub_140947A8C @ 0x140947A8C (sub_140947A8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140660534(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 1:
    case 10:
    case 14:
    case 18:
    case 19:
    case 21:
    case 22:
    case 28:
    case 31:
    case 32:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 43:
    case 44:
    case 48:
    case 51:
    case 52:
    case 53:
    case 56:
    case 57:
      goto LABEL_2;
    case 3:
      if ( (*(_DWORD *)(a1 + 396) & 0x20000) != 0 )
        goto LABEL_3;
LABEL_2:
      result = 0LL;
      break;
    default:
LABEL_3:
      result = 1LL;
      break;
  }
  return result;
}
