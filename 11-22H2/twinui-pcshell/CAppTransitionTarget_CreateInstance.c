/*
 * XREFs of CAppTransitionTarget_CreateInstance @ 0x18059C5D8
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppTransitionTargetManager@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059ABD0 (-PrepareTaggingInfoForApp@CAppTransitionTargetManager@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCAppArrangementSingleTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Z @ 0x180599F28 (--$MakeAndInitialize@VCAppArrangementSingleTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationP.c)
 *     ??$MakeAndInitialize@VCLauncherAndDefaultSwitchTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Z @ 0x18059A0A4 (--$MakeAndInitialize@VCLauncherAndDefaultSwitchTransitionTarget@@UITaggableTarget@@AEAPEBUAnimat.c)
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
  int v8; // edx
  int v9; // edx
  int v10; // edx
  HRESULT v11; // ebx
  int v12; // eax
  _OWORD *v14; // [rsp+50h] [rbp+30h] BYREF
  int v15; // [rsp+58h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v6 = punk;
  punk = 0LL;
  v6->lpVtbl = 0LL;
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( (unsigned int)(v10 - 1) >= 2 )
        {
          v11 = -2147467259;
          goto LABEL_11;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CAppArrangementSingleTransitionTarget,ITaggableTarget,AnimationPassState const * &,unsigned long &>(
            &punk,
            &v14,
            &v15);
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CLauncherAndDefaultSwitchTransitionTarget,ITaggableTarget,AnimationPassState const * &,unsigned long &>(
            &punk,
            &v14,
            &v15);
  }
  v11 = v12;
  if ( v12 >= 0 )
  {
    v11 = IUnknown_SetSite(punk, punkSite);
    if ( v11 >= 0 )
      v11 = ((__int64 (__fastcall *)(IUnknown *, GUID *, IUnknown *))punk->lpVtbl->QueryInterface)(
              punk,
              &GUID_42b028e4_80cd_42b1_b817_0191712101d7,
              v6);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
  return (unsigned int)v11;
}
