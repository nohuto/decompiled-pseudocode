/*
 * XREFs of ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x1805B3150
 * Callers:
 *     winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x1805B4710 (winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementation--ImmersiveSh.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (*)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD, GUID *, void *, __int64 *),
        _QWORD *a3)
{
  signed int v4; // eax
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = a2(
         *a3,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &winrt::impl::guid_v<Windows::Internal::Shell::WindowSnapping::ISnapComponent2>,
         &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v6;
  return a1;
}
