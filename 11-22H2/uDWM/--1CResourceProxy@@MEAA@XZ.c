/*
 * XREFs of ??1CResourceProxy@@MEAA@XZ @ 0x180020FE8
 * Callers:
 *     ??_GCRedirectVisualProxy@@MEAAPEAXI@Z @ 0x1800136F0 (--_GCRedirectVisualProxy@@MEAAPEAXI@Z.c)
 *     ??_ECMatrixTransformProxy@@UEAAPEAXI@Z @ 0x180014680 (--_ECMatrixTransformProxy@@UEAAPEAXI@Z.c)
 *     ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x1800386DC (--1CImageLegacyMilBrushProxy@@MEAA@XZ.c)
 *     ??_ECRotateTransformProxy@@UEAAPEAXI@Z @ 0x18006BF50 (--_ECRotateTransformProxy@@UEAAPEAXI@Z.c)
 *     ??_ECRemoteAppRenderTargetProxy@@MEAAPEAXI@Z @ 0x1800AE960 (--_ECRemoteAppRenderTargetProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CResourceProxy::~CResourceProxy(CResourceProxy *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
