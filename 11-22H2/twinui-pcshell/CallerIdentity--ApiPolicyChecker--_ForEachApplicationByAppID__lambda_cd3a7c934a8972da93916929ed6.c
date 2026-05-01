/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x18073C334
 * Callers:
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x18073CCA4 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x18073B9A4 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     _lambda_cd3a7c934a8972da93916929ed6f73f0_::operator() @ 0x18073C690 (_lambda_cd3a7c934a8972da93916929ed6f73f0_--operator().c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___(
        struct IUnknown *this,
        __int64 a2)
{
  __int64 *v4; // rbx
  struct IObjectArray **v5; // r8
  int AllApplicationsByAppID; // ebx
  char v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 *v11; // rdi
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v14, &v17);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4);
  AllApplicationsByAppID = CallerIdentity::FindAllApplicationsByAppID(this, (const unsigned __int16 *)v4, v5);
  if ( AllApplicationsByAppID >= 0 )
  {
    v7 = 1;
    LOBYTE(v17) = 1;
    v8 = 0;
    for ( AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14 + 24LL))(
                                     v14,
                                     &v18); AllApplicationsByAppID >= 0; ++v8 )
    {
      if ( !v7 || v8 >= v18 )
        break;
      v9 = v14;
      v15 = 0LL;
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v14 + 32LL);
      v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v15, &v16);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
      AllApplicationsByAppID = v10(v9, v8, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v11);
      if ( AllApplicationsByAppID >= 0 )
      {
        v12 = lambda_cd3a7c934a8972da93916929ed6f73f0_::operator()(a2, v15, &v17);
        v7 = v17;
        AllApplicationsByAppID = v12;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  return (unsigned int)AllApplicationsByAppID;
}
