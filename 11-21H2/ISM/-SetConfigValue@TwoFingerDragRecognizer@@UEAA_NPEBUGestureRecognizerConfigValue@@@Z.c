/*
 * XREFs of ?SetConfigValue@TwoFingerDragRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x1801B8750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall TwoFingerDragRecognizer::SetConfigValue(
        TwoFingerDragRecognizer *this,
        const struct GestureRecognizerConfigValue *a2)
{
  char v2; // r10

  v2 = 1;
  switch ( *(_DWORD *)a2 )
  {
    case 0x13:
      *((_WORD *)this + 42) = *((_WORD *)a2 + 2);
      break;
    case 0x18:
      *((_WORD *)this + 38) = *((_WORD *)a2 + 2);
      break;
    case 0x19:
      *((_WORD *)this + 39) = *((_WORD *)a2 + 2);
      break;
    case 0x1A:
      *((_WORD *)this + 43) = *((_WORD *)a2 + 2);
      break;
    default:
      return 0;
  }
  return v2;
}
