/*
 * XREFs of _anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy @ 0x18024002C
 * Callers:
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x18023BFA8 (_anonymous_namespace_--GetDashboardExtensionName.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18010F11C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_ec9847b6dc4bdfc80b2b63fccf9d8d0a_::operator() @ 0x18023788C (_lambda_ec9847b6dc4bdfc80b2b63fccf9d8d0a_--operator().c)
 */

// Hidden C++ exception states: #wind=1
char anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy()
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF

  if ( !__std_init_once_begin_initialize(&InitOnce, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v1 = &InitOnce;
    lambda_ec9847b6dc4bdfc80b2b63fccf9d8d0a_::operator()();
    v2 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v1);
  }
  return byte_18098D704;
}
