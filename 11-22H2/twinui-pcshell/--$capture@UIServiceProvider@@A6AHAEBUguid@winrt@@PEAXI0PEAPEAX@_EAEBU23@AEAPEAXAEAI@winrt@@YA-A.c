/*
 * XREFs of ??$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x1801A20F0
 * Callers:
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1801A2090 (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     CoCreateInstance_0 @ 0x1801C7A95 (CoCreateInstance_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

LPVOID *__fastcall ___capture_UIServiceProvider__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIServiceProvider___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
        LPVOID *a1,
        __int64 a2,
        const IID *a3,
        IUnknown **a4,
        DWORD *a5)
{
  IUnknown *v5; // rdx
  HRESULT v7; // eax
  LPVOID *result; // rax
  LPVOID ppv; // [rsp+38h] [rbp-20h] BYREF

  v5 = *a4;
  ppv = 0LL;
  v7 = CoCreateInstance_0(a3, v5, *a5, &winrt::impl::guid_v<IServiceProvider>, &ppv);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  result = a1;
  *a1 = ppv;
  return result;
}
