/*
 * XREFs of ?IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804DFB8C
 * Callers:
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804DFFB0 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 */

char __fastcall CAppTransitionManager::IsLayoutOperationCrossFadeOnly(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2)
{
  char v4; // si
  __int64 v5; // rax
  int (__fastcall *v6)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v7; // rbx
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+38h] [rbp-28h] BYREF
  RECT rcSrc1; // [rsp+48h] [rbp-18h] BYREF

  v4 = 1;
  if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2) )
    return 0;
  v12 = 0LL;
  if ( !*((_QWORD *)this + 26) )
    goto LABEL_19;
  v5 = *(_QWORD *)a2;
  *(_QWORD *)&rcDst.left = 0LL;
  v6 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v5 + 32);
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&rcDst, &rcSrc1);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v7);
  if ( v6(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7) >= 0 )
  {
    v8 = *((_QWORD *)this + 26);
    v9 = *(void (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
    v9(v8, *(_QWORD *)&rcDst.left, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v12);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&rcDst.left);
  if ( !v12 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) == 1 )
  {
LABEL_19:
    if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
    {
      if ( v12 )
        goto LABEL_14;
      v10 = *(_QWORD *)a2;
      rcDst = 0LL;
      rcSrc1 = 0LL;
      (*(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, struct tagRECT *))(v10 + 56))(a2, 0LL, &rcDst);
      (*(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, RECT *))(*(_QWORD *)a2 + 72LL))(
        a2,
        0LL,
        &rcSrc1);
      if ( Geometry::operator==(&rcDst, &rcSrc1) )
        goto LABEL_14;
    }
    else if ( v12 )
    {
      rcDst = 0LL;
      rcSrc1 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v12 + 24LL))(v12, 0LL, &rcSrc1);
      if ( !IntersectRect(&rcDst, &rcSrc1, (const RECT *)((char *)this + 264)) )
        goto LABEL_14;
    }
  }
  v4 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return v4;
}
