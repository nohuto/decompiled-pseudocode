/*
 * XREFs of _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x180428BA8
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_bf3c92b221d60276737ef151eb6f13fc__void_::Invoke @ 0x180429300 (Platform--Details--__abi_FunctorCapture__lambda_bf3c92b221d60276737ef151eb6f13fc__void_--Invoke.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1800F5EA8 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x180429050 (-ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_bf3c92b221d60276737ef151eb6f13fc_::operator()(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  XamlExplorerHostWindow *v8; // rcx
  RTL_SRWLOCK *v9; // rbx
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h]

  v5 = (RTL_SRWLOCK *)Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  v11 = v5;
  v6 = __abi_winrt_ptr_ctor((__int64)v5);
  v12 = v6;
  if ( v5 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 2))(v5);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, 0LL);
  if ( v7 < 0 )
  {
    __abi_WinRTraiseException(v7);
    __debugbreak();
  }
  XamlExplorerHostWindow::ChangeVisibilityHelper(v8, 1);
  v9 = (RTL_SRWLOCK *)(*(_QWORD *)a1 + 96LL);
  AcquireSRWLockShared(v9);
  v11 = v9;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 64LL) + 40LL))(*(_QWORD *)(*(_QWORD *)a1 + 64LL));
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
