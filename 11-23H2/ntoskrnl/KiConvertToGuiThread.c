/*
 * XREFs of KiConvertToGuiThread @ 0x140424370
 * Callers:
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1407C6290 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
