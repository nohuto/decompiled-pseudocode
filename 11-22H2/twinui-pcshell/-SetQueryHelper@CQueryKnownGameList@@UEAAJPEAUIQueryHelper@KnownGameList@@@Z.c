/*
 * XREFs of ?SetQueryHelper@CQueryKnownGameList@@UEAAJPEAUIQueryHelper@KnownGameList@@@Z @ 0x180740F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::SetQueryHelper(
        struct _RTL_CRITICAL_SECTION *this,
        struct KnownGameList::IQueryHelper *a2)
{
  ULONG_PTR SpinCount; // rcx
  struct KnownGameList::IQueryHelper *v6; // [rsp+30h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp+10h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, this + 19);
  if ( (struct KnownGameList::IQueryHelper *)this[18].SpinCount != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    SpinCount = this[18].SpinCount;
    this[18].SpinCount = (ULONG_PTR)a2;
    if ( SpinCount )
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
