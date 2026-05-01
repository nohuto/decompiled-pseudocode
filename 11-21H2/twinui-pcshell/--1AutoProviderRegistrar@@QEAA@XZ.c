/*
 * XREFs of ??1AutoProviderRegistrar@@QEAA@XZ @ 0x180181840
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__ @ 0x1802249D0 (_dynamic_atexit_destructor_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AutoProviderRegistrar::~AutoProviderRegistrar(void (**this)(void))
{
  if ( *this )
    (*this)();
}
