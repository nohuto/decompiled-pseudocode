/*
 * XREFs of ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180166DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??4?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C64F4 (--4-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AccessibilityExperienceManager::UnsubscribeFromServices(
        AccessibilityExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // r13d
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+28h] [rbp-8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF
  __int64 v13; // [rsp+80h] [rbp+50h] BYREF
  __int64 v14; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 272);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  v11 = v4;
  v5 = *((_QWORD *)this + 26);
  v6 = 0LL;
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 26));
    v3 = v5;
    v12 = 0LL;
    v10 = v5;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    v6 = v5;
  }
  v7 = *((_QWORD *)this + 39);
  Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=(&v14, (__int64 *)this + 44);
  LODWORD(v12) = *((_DWORD *)this + 50);
  Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=(&v13, (__int64 *)this + 29);
  v8 = *((_DWORD *)this + 51);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  *((_QWORD *)this + 39) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 44);
  *((_DWORD *)this + 50) = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  *((_DWORD *)this + 51) = 0;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v11);
  if ( v13 && v8 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, v8);
  if ( v14 && (_DWORD)v12 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, (unsigned int)v12);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return 0LL;
}
