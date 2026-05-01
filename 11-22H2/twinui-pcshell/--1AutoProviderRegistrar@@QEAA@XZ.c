/*
 * XREFs of ??1AutoProviderRegistrar@@QEAA@XZ @ 0x1801BF310
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__ @ 0x1802C8280 (_dynamic_atexit_destructor_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AutoProviderRegistrar::~AutoProviderRegistrar(void (**this)(void))
{
  if ( *this )
    (*this)();
}
