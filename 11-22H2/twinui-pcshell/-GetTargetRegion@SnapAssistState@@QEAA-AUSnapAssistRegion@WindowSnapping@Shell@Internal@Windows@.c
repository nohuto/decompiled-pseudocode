/*
 * XREFs of ?GetTargetRegion@SnapAssistState@@QEAA?AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@XZ @ 0x18078B42C
 * Callers:
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x180788F0C (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator().c)
 *     ?UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUISwitchItemDataSource@Multitasking@5Internal@Windows@winrt@@@Z @ 0x18078BE88 (-UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Composable.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_illegal_state_change@winrt@@QEAA@XZ @ 0x18078B1BC (--0hresult_illegal_state_change@winrt@@QEAA@XZ.c)
 */

_OWORD *__fastcall SnapAssistState::GetTargetRegion(__int64 a1, _OWORD *a2)
{
  __int128 *v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _OWORD *result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(__int128 **)(a1 + 48);
  if ( v2 == *(__int128 **)(a1 + 56) )
  {
    winrt::hresult_illegal_state_change::hresult_illegal_state_change((winrt::hresult_illegal_state_change *)pExceptionObject);
    throw (winrt::hresult_illegal_state_change *)pExceptionObject;
  }
  v3 = *v2;
  v4 = v2[1];
  result = a2;
  *a2 = v3;
  a2[1] = v4;
  return result;
}
