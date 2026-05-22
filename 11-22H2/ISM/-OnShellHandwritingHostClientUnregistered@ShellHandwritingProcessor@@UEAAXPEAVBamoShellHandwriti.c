/*
 * XREFs of ?OnShellHandwritingHostClientUnregistered@ShellHandwritingProcessor@@UEAAXPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x1800780E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18001B688 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B8CC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?InternalRelease@?$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180077D10 (-InternalRelease@-$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ShellHandwritingProcessor::OnShellHandwritingHostClientUnregistered(
        ShellHandwritingProcessor *this,
        struct BamoShellHandwritingHostClientProxy *a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 3, &v4);
  if ( *((struct BamoShellHandwritingHostClientProxy **)this + 4) == a2 )
    Microsoft::WRL::ComPtr<BamoShellHandwritingHostClientProxy>::InternalRelease((__int64 *)this + 4);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
}
