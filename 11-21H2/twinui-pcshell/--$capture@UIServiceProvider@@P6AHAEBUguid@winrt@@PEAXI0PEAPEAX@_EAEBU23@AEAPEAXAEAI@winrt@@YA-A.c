/*
 * XREFs of ??$capture@UIServiceProvider@@P6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@0@P6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x1805B30F0
 * Callers:
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x1805B3664 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBU.c)
 * Callees:
 *     CoCreateInstance_0 @ 0x180189A77 (CoCreateInstance_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

LPVOID *__fastcall ___capture_UIServiceProvider__P6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIServiceProvider___0_P6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
        LPVOID *a1,
        void *a2,
        const IID *a3,
        IUnknown **a4,
        DWORD *a5)
{
  IUnknown *v6; // rdx
  HRESULT v7; // eax
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF

  ppv = a2;
  v6 = *a4;
  ppv = 0LL;
  v7 = CoCreateInstance_0(a3, v6, *a5, &winrt::impl::guid_v<IServiceProvider>, &ppv);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  *a1 = ppv;
  return a1;
}
