/*
 * XREFs of ?OnShellHandwritingHostClientRegistered@ShellHandwritingProcessor@@UEAAXPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x1800645C0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001AF80 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?InternalRelease@?$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180064260 (-InternalRelease@-$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellHandwritingProcessor::OnShellHandwritingHostClientRegistered(
        RTL_SRWLOCK *this,
        struct BamoShellHandwritingHostClientProxy *a2)
{
  PVOID Ptr; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  wil::srwlock::lock_exclusive(this + 3, &SRWLock);
  if ( this[4].Ptr != a2 )
  {
    if ( a2 )
      (**(void (__fastcall ***)(struct BamoShellHandwritingHostClientProxy *))a2)(a2);
    Ptr = this[4].Ptr;
    this[4].Ptr = a2;
    Microsoft::WRL::ComPtr<BamoShellHandwritingHostClientProxy>::InternalRelease((__int64 *)&Ptr);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
