/*
 * XREFs of ?v_ShouldUseGhostWindow@CAppArrangementSingleTransitionTarget@@EEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804E44D0
 * Callers:
 *     <none>
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA?AW4AppTransitionTargetSpecialFlags@@PEAUIApplicationView@@@Z @ 0x1804E371C (-_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA-AW4AppTransitionTargetSpecialFlags@@PE.c)
 */

bool __fastcall CAppArrangementSingleTransitionTarget::v_ShouldUseGhostWindow(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2)
{
  __int64 v2; // rax
  bool v3; // si
  int (__fastcall *v6)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v7; // rbx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)a2;
  v3 = 0;
  v9 = 0LL;
  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v2 + 88))(a2)
    && (!Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47)
     || !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)) )
  {
    v6 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v9, &v10);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v7);
    if ( v6(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7) >= 0 )
      v3 = (CAppTransitionTargetBase::_GetSpecialTransitionInfo((__int64)this, v9) & 1) == 0;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
  return v3;
}
