/*
 * XREFs of ?_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ @ 0x18002B8F0
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x18002B740 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealmActivationHistory::_EnsureLauncher(CRealmActivationHistory *this)
{
  unsigned int Service; // ebx
  void **v3; // rsi
  void (__fastcall *v4)(char *, GUID *, IUnknown **); // rbx
  IUnknown *punk; // [rsp+38h] [rbp+10h] BYREF

  Service = 0;
  v3 = (void **)((char *)this + 408);
  if ( !*((_QWORD *)this + 51) )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 408);
    punk = 0LL;
    v4 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 4) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    v4((char *)this + 32, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    Service = IUnknown_QueryService(
                punk,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  }
  return Service;
}
