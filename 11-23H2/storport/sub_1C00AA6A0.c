/*
 * XREFs of sub_1C00AA6A0 @ 0x1C00AA6A0
 * Callers:
 *     DllUnload @ 0x1C0065590 (DllUnload.c)
 * Callees:
 *     <none>
 */

__int64 sub_1C00AA6A0()
{
  __int64 result; // rax

  result = WheaErrorSourceGetState((unsigned int)dword_1C0093B00);
  if ( (_DWORD)result != 3 )
    return WheaRemoveErrorSourceDeviceDriver((unsigned int)dword_1C0093B00);
  return result;
}
