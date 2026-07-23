/*
 * XREFs of sub_1402DE48C @ 0x1402DE48C
 * Callers:
 *     sub_14076FF88 @ 0x14076FF88 (sub_14076FF88.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402DE48C(__int64 a1, int a2)
{
  char result; // al

  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 16:
    case 17:
    case 18:
    case 19:
    case 24:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 34:
    case 37:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
