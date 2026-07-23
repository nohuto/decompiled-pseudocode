/*
 * XREFs of sub_1402DE400 @ 0x1402DE400
 * Callers:
 *     sub_14076FF88 @ 0x14076FF88 (sub_14076FF88.c)
 *     sub_14077CF10 @ 0x14077CF10 (sub_14077CF10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402DE400(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 1:
    case 5:
    case 8:
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 30:
    case 37:
      result = 1LL;
      break;
    case 2:
    case 3:
    case 18:
    case 19:
    case 36:
      result = 7LL;
      break;
    case 11:
    case 16:
    case 17:
    case 21:
    case 22:
    case 26:
    case 27:
    case 28:
    case 29:
    case 32:
    case 33:
    case 34:
    case 35:
      result = 4LL;
      break;
    case 20:
    case 24:
    case 31:
      result = 3LL;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
