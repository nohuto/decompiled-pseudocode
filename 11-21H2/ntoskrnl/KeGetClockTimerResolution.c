/*
 * XREFs of KeGetClockTimerResolution @ 0x14056C920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetClockTimerResolution(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = dword_140D06938;
  result = (unsigned int)dword_140C2B1C8;
  *a1 = dword_140C2B1C8;
  return result;
}
