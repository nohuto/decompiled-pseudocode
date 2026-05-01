/*
 * XREFs of ?RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z @ 0x180429330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180428250 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd___ @ 0x180428570 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHostWindow::RunCallback(
        RTL_SRWLOCK *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2)
{
  __int64 Ptr; // r14
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  RTL_SRWLOCK *v9; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp-10h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v11; // [rsp+38h] [rbp-8h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v12; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v13; // [rsp+78h] [rbp+38h] BYREF
  RTL_SRWLOCK *v14; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v15; // [rsp+88h] [rbp+48h]

  wil::AcquireSRWLockExclusive(&v14, this + 12);
  v13 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v12 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  Ptr = (__int64)this[9].Ptr;
  if ( Ptr )
  {
    v5 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v15 = v5;
    v9 = this;
    v10 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v6 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd___(
           v5,
           (__int64)&v9);
    v15 = v6;
    v7 = Windows::UI::Core::ICoreDispatcher::RunAsync(Ptr, 0LL, (__int64)v6);
    v8 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 16LL))(v6, v8);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
}
