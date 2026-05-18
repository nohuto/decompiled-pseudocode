/*
 * XREFs of ?Unregister@ETWTraceProvider@Utils@Spectre@@UEAAXXZ @ 0x180021590
 * Callers:
 *     <none>
 * Callees:
 *     ??F?$_Atomic_integral@H$03@std@@QEAAHXZ @ 0x18001D3C4 (--F-$_Atomic_integral@H$03@std@@QEAAHXZ.c)
 */

void __fastcall Spectre::Utils::ETWTraceProvider::Unregister(Spectre::Utils::ETWTraceProvider *this)
{
  REGHANDLE v1; // rcx

  if ( !(unsigned int)std::_Atomic_integral<int,4>::operator--((__int64)&Spectre::Utils::ETWTraceProvider::s_registrationCount) )
  {
    v1 = RegHandle;
    RegHandle = 0LL;
    dword_1801C8188 = 0;
    EventUnregister(v1);
  }
}
