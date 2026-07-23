/*
 * XREFs of KiConvertToGuiThread @ 0x140424700
 * Callers:
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1407C6560 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
