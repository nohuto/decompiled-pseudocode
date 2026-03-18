/*
 * XREFs of KiConvertToGuiThread @ 0x140424C80
 * Callers:
 *     KiSystemCall64 @ 0x140434000 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406BC9D0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
