/*
 * XREFs of ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18018B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??4?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18018B698 (--4-$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AccessibilityExperienceManager::UnsubscribeFromServices(
        AccessibilityExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF
  __int64 v12; // [rsp+80h] [rbp+50h] BYREF
  __int64 v13; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 272));
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 26));
    v3 = v4;
    v9 = 0LL;
    v13 = v4;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  }
  v5 = *((_QWORD *)this + 39);
  Microsoft::WRL::ComPtr<KnownGameList::IGameEntry>::operator=(&v12, (char *)this + 352);
  v6 = *((_DWORD *)this + 50);
  Microsoft::WRL::ComPtr<KnownGameList::IGameEntry>::operator=(&v11, (char *)this + 232);
  v7 = *((_DWORD *)this + 51);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  *((_QWORD *)this + 39) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 44);
  *((_DWORD *)this + 50) = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  *((_DWORD *)this + 51) = 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v11 && v7 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, v7);
  if ( v12 && v6 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, v6);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return 0LL;
}
