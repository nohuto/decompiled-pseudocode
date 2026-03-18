/*
 * XREFs of BcpCursorLessThan @ 0x14064DB28
 * Callers:
 *     BcpDisplayProgress @ 0x14064E1FC (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
