/*
 * XREFs of ExQueryTimerResolution @ 0x1403DF3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExQueryTimerResolution(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  *a1 = DesiredTime;
  *a2 = dword_140D06960;
  result = (unsigned int)dword_140D06984;
  *a3 = dword_140D06984;
  return result;
}
