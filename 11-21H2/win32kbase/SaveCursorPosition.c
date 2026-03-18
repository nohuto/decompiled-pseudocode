/*
 * XREFs of SaveCursorPosition @ 0x1C01E8340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SaveCursorPosition(__int64 a1)
{
  *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = a1;
}
