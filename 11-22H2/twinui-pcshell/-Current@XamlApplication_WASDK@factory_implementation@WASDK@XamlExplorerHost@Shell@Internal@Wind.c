/*
 * XREFs of ?Current@XamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AU1345678@XZ @ 0x180066930
 * Callers:
 *     ?get_Current@?$produce@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication_WASDKStatics@345678@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800668E0 (-get_Current@-$produce@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shel.c)
 * Callees:
 *     _lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator() @ 0x18002ED70 (_lambda_f5c7a19be5cc201203fc8ae0f408e847_--operator().c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18010F11C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK::Current(
        union _RTL_RUN_ONCE *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  union _RTL_RUN_ONCE *v4; // rsi
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-38h] BYREF
  union _RTL_RUN_ONCE *v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  WINBOOL v9; // [rsp+40h] [rbp-18h] BYREF

  v6 = a1;
  v4 = a1 + 4;
  if ( !__std_init_once_begin_initialize(a1 + 4, 0, &v9, 0LL) )
    abort();
  if ( v9 )
  {
    v7 = v4;
    v8 = 4;
    lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator()(&v6);
    v8 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v7);
  }
  *(union _RTL_RUN_ONCE *)a2 = a1[5];
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  return a2;
}
