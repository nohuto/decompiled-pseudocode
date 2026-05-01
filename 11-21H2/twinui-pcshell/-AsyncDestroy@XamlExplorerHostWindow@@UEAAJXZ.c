/*
 * XREFs of ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x180428DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180428250 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___ @ 0x18042866C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc.c)
 *     ?Cloak@XamlExplorerHostWindow@@AEAAXXZ @ 0x1804291C0 (-Cloak@XamlExplorerHostWindow@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlExplorerHostWindow::AsyncDestroy(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v3; // esi
  __int64 Ptr; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v10; // [rsp+28h] [rbp-8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v12; // [rsp+68h] [rbp+38h] BYREF
  _QWORD *v13; // [rsp+70h] [rbp+40h]
  __int64 v14; // [rsp+78h] [rbp+48h]

  v2 = this + 12;
  AcquireSRWLockShared(this + 12);
  v12 = v2;
  XamlExplorerHostWindow::Cloak((XamlExplorerHostWindow *)this);
  v3 = 0;
  if ( this[9].Ptr )
  {
    v11 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    Ptr = (__int64)this[9].Ptr;
    v5 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v13 = v5;
    v9 = this;
    v10 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v6 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___(
           v5,
           (__int64)&v9);
    v13 = v6;
    v7 = Windows::UI::Core::ICoreDispatcher::RunAsync(Ptr, 0LL, (__int64)v6);
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    v3 = -2147019873;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  return v3;
}
