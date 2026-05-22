/*
 * XREFs of ?KeyboardModifierFromScanCode@KeyboardModifierState@@SAJGPEAW4KeyboardModifier@@@Z @ 0x180195000
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193890 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardModifierState::KeyboardModifierFromScanCode(unsigned __int16 a1, enum KeyboardModifier *a2)
{
  unsigned int v2; // r10d
  int v3; // r9d

  v2 = 0;
  v3 = 0;
  switch ( a1 )
  {
    case 0x1Du:
      v3 = 1;
      break;
    case 0x2Au:
      v3 = 2;
      break;
    case 0x36u:
      v3 = 32;
      break;
    case 0x38u:
      v3 = 4;
      break;
    case 0xE01Du:
      v3 = 16;
      break;
    case 0xE038u:
      v3 = 64;
      break;
    case 0xE05Bu:
      v3 = 8;
      break;
    case 0xE05Cu:
      v3 = 128;
      break;
    default:
      v2 = -2147418113;
      break;
  }
  *(_DWORD *)a2 = v3;
  return v2;
}
