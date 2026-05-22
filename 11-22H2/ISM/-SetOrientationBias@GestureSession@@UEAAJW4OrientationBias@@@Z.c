/*
 * XREFs of ?SetOrientationBias@GestureSession@@UEAAJW4OrientationBias@@@Z @ 0x180031670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureSession::SetOrientationBias(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
  return 0LL;
}
