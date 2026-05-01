/*
 * XREFs of ??$capture@UIIdentityStore2@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIIdentityStore2@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x1801B5424
 * Callers:
 *     ??$create_instance@UIIdentityStore2@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1801B53E8 (--$create_instance@UIIdentityStore2@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 * Callees:
 *     CoCreateInstance_0 @ 0x1801C7A95 (CoCreateInstance_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

LPVOID *__fastcall ___capture_UIIdentityStore2__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIIdentityStore2___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
        LPVOID *a1,
        void *a2,
        const IID *a3,
        IUnknown **a4,
        DWORD *a5)
{
  IUnknown *v6; // rdx
  HRESULT v7; // eax
  LPVOID ppv; // [rsp+58h] [rbp+10h] BYREF

  ppv = a2;
  v6 = *a4;
  ppv = 0LL;
  v7 = CoCreateInstance_0(a3, v6, *a5, &winrt::impl::guid_v<IIdentityStore2>, &ppv);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  *a1 = ppv;
  return a1;
}
