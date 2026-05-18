/*
 * XREFs of ?Register@ETWTraceProvider@Utils@Spectre@@UEAAXXZ @ 0x180021280
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800013E0 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ??E?$_Atomic_integral@H$03@std@@QEAAHH@Z @ 0x18002116C (--E-$_Atomic_integral@H$03@std@@QEAAHH@Z.c)
 */

void __fastcall Spectre::Utils::ETWTraceProvider::Register(Spectre::Utils::ETWTraceProvider *this)
{
  if ( !(unsigned int)std::_Atomic_integral<int,4>::operator++((__int64)&Spectre::Utils::ETWTraceProvider::s_registrationCount) )
    TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1801C8188);
}
