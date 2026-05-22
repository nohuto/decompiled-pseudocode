/*
 * XREFs of ?DisplayStateNotification@MPCHeadMovementDetector@@CAKPEAXK0@Z @ 0x1800E02E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHeadMovementDetector::DisplayStateNotification(_BYTE *a1, __int64 a2, _DWORD *a3)
{
  a1[64] = a3[5] != 0;
  return 0LL;
}
