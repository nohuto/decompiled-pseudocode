/*
 * XREFs of ?OnShellHandwritingHostClientRegistered@ShellHandwritingProcessor@@UEAAXPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x180078060
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18001B688 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B8CC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?InternalRelease@?$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180077D10 (-InternalRelease@-$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellHandwritingProcessor::OnShellHandwritingHostClientRegistered(
        RTL_SRWLOCK *this,
        struct BamoShellHandwritingHostClientProxy *a2)
{
  PVOID Ptr; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  wil::srwlock::lock_exclusive(this + 3, &v5);
  if ( this[4].Ptr != a2 )
  {
    if ( a2 )
      (**(void (__fastcall ***)(struct BamoShellHandwritingHostClientProxy *))a2)(a2);
    Ptr = this[4].Ptr;
    this[4].Ptr = a2;
    Microsoft::WRL::ComPtr<BamoShellHandwritingHostClientProxy>::InternalRelease((__int64 *)&Ptr);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
}
