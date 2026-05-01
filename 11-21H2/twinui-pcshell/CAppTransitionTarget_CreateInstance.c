/*
 * XREFs of CAppTransitionTarget_CreateInstance @ 0x1804E4698
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppTransitionTargetManager@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2D00 (-PrepareTaggingInfoForApp@CAppTransitionTargetManager@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCAppArrangementSingleTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Z @ 0x1804E2060 (--$MakeAndInitialize@VCAppArrangementSingleTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationP.c)
 *     ??$MakeAndInitialize@VCLauncherAndDefaultSwitchTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Z @ 0x1804E21DC (--$MakeAndInitialize@VCLauncherAndDefaultSwitchTransitionTarget@@UITaggableTarget@@AEAPEBUAnimat.c)
 */

__int64 __fastcall CAppTransitionTarget_CreateInstance(
        IUnknown *punkSite,
        int a2,
        _OWORD *a3,
        int a4,
        int a5,
        IUnknown *punk)
{
  IUnknown *v6; // rdi
  int v8; // eax
  HRESULT v9; // ebx
  _OWORD *v11; // [rsp+50h] [rbp+30h] BYREF
  int v12; // [rsp+58h] [rbp+38h] BYREF

  v12 = a4;
  v11 = a3;
  v6 = punk;
  punk = 0LL;
  v6->lpVtbl = 0LL;
  if ( a2 == 1 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CLauncherAndDefaultSwitchTransitionTarget,ITaggableTarget,AnimationPassState const * &,unsigned long &>(
           &punk,
           &v11,
           &v12);
  }
  else
  {
    if ( (unsigned int)(a2 - 2) > 3 )
    {
      v9 = -2147467259;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CAppArrangementSingleTransitionTarget,ITaggableTarget,AnimationPassState const * &,unsigned long &>(
           &punk,
           &v11,
           &v12);
  }
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = IUnknown_SetSite(punk, punkSite);
    if ( v9 >= 0 )
      v9 = ((__int64 (__fastcall *)(IUnknown *, GUID *, IUnknown *))punk->lpVtbl->QueryInterface)(
             punk,
             &GUID_42b028e4_80cd_42b1_b817_0191712101d7,
             v6);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
  return (unsigned int)v9;
}
