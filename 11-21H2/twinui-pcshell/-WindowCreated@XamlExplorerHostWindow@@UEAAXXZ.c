/*
 * XREFs of ?WindowCreated@XamlExplorerHostWindow@@UEAAXXZ @ 0x1804299C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x180428048 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     ?get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ @ 0x18042844C (-get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlExplorerHostWindow::WindowCreated(XamlExplorerHostWindow *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void **v5; // r9
  __int64 v6; // rbx
  _QWORD **v7; // rsi
  __int64 (__fastcall *v8)(_QWORD **, GUID *, __int64 *); // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rbx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 v17; // [rsp+70h] [rbp+28h] BYREF
  _QWORD **v18; // [rsp+78h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+38h] BYREF
  RTL_SRWLOCK *v20; // [rsp+88h] [rbp+40h] BYREF

  v19 = 0LL;
  wil::AcquireSRWLockExclusive(&v20, (RTL_SRWLOCK *)this + 12);
  v6 = Windows::UI::Core::CoreWindow::GetForCurrentThread(v3, v2, v4, v5);
  v18 = (_QWORD **)v6;
  v7 = (_QWORD **)__abi_winrt_ptr_ctor(v6);
  v18 = v7;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v17 = 0LL;
  v8 = (__int64 (__fastcall *)(_QWORD **, GUID *, __int64 *))**v7;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  v9 = v8(v7, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, &v17);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x56,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v9,
      v15);
  v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 24LL))(v17, (char *)this + 88);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x57,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v10,
      v15);
  if ( *((_DWORD *)this + 20) != 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
            *((_QWORD *)this + 7),
            *((_QWORD *)this + 11),
            0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5C,
        (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
        (const char *)(unsigned int)v11,
        v15);
  }
  v12 = Windows::UI::Core::ICoreWindow::Dispatcher::get((__int64)v7);
  __abi_winrt_ptr_assign((__int64 *)this + 9, v12);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (__int64 *)((char *)this + 48);
  v14 = 0LL;
  if ( &v18 != (_QWORD ***)((char *)this + 48) )
  {
    v14 = *v13;
    *v13 = 0LL;
  }
  v18 = 0LL;
  v19 = v14;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  ((void (__fastcall *)(_QWORD **))(*v7)[2])(v7);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v20);
  if ( v14 )
    (*(void (__fastcall **)(__int64, XamlExplorerHostWindow *))(*(_QWORD *)v14 + 24LL))(v14, this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
}
