/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01E76F4
 * Callers:
 *     NtUserGetKeyState @ 0x1C002CDC0 (NtUserGetKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C00405E0 (IsKeyboardDelegationEnabledForThread.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C0041A70 (IsSpatialDelegationEnabledForThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  return ((unsigned int)PsGetThreadProcessId(*this) & 0xFFFFFFFC) == InputDelegation::CInputDelegationInfo::gInstance;
}
