/*
 * XREFs of ??1Completer@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180129A3C
 * Callers:
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180129740 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x1802DD26C (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1802E56EC (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180129A7C (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

BOOL __fastcall wil::details::static_lazy<CAppManagerTelemetry>::Completer::~Completer(LPINIT_ONCE *a1)
{
  DWORD v1; // edx

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)&(*a1)[1]);
    v1 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete(*a1, v1, &(*a1)[1]);
}
