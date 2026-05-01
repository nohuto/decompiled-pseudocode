/*
 * XREFs of _lambda_29d63c76f0f654d29c7f89e3cbbbdc35_::operator() @ 0x18000C354
 * Callers:
 *     _lambda_8e74cd273561b15a8d8b985ad84a422d_::operator() @ 0x18000C1B0 (_lambda_8e74cd273561b15a8d8b985ad84a422d_--operator().c)
 *     wil::details::ScopeExitFn__lambda_29d63c76f0f654d29c7f89e3cbbbdc35___::_ScopeExitFn__lambda_29d63c76f0f654d29c7f89e3cbbbdc35___ @ 0x1805F0E90 (wil--details--ScopeExitFn__lambda_29d63c76f0f654d29c7f89e3cbbbdc35___--_ScopeExitFn__lambda_29d6.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_29d63c76f0f654d29c7f89e3cbbbdc35_::operator()(__int64 a1)
{
  const unsigned __int16 *v1; // rsi
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *v2; // rbp
  const unsigned __int16 *StringRawBuffer; // rdi

  v1 = &LocaleName;
  v2 = *(SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation **)a1;
  if ( **(_QWORD **)(a1 + 8) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 16) + 16LL), 0LL);
    if ( **(_QWORD **)(a1 + 8) )
      v1 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 16) + 8LL), 0LL);
  }
  else
  {
    StringRawBuffer = &LocaleName;
  }
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(v2, v1, StringRawBuffer);
}
