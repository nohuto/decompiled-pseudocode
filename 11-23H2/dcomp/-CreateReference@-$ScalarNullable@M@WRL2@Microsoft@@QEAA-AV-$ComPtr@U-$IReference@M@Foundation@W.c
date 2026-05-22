/*
 * XREFs of ?CreateReference@?$ScalarNullable@M@WRL2@Microsoft@@QEAA?AV?$ComPtr@U?$IReference@M@Foundation@Windows@@@WRL@3@XZ @ 0x180138834
 * Callers:
 *     ?get_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@6@@Z @ 0x18013CF60 (-get_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAP.c)
 *     ?get_FinalValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@5@@Z @ 0x180167810 (-get_FinalValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU-$IReferenc.c)
 *     ?get_InitialValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@5@@Z @ 0x1801678D0 (-get_InitialValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU-$IRefere.c)
 *     ?get_ModifiedRestingScale@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@5@@Z @ 0x1801915D0 (-get_ModifiedRestingScale@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ??$MakeAndInitialize@V?$ReferenceImpl@M@WRL2@Microsoft@@V123@AEAM@Details@WRL@Microsoft@@YAJPEAPEAV?$ReferenceImpl@M@WRL2@2@AEAM@Z @ 0x180134C78 (--$MakeAndInitialize@V-$ReferenceImpl@M@WRL2@Microsoft@@V123@AEAM@Details@WRL@Microsoft@@YAJPEAP.c)
 */

__int64 *__fastcall Microsoft::WRL2::ScalarNullable<float>::CreateReference(__int64 a1, __int64 *a2)
{
  int v4; // eax
  __int64 v5; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 4) )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL2::ReferenceImpl<float>,Microsoft::WRL2::ReferenceImpl<float>,float &>(
           &v8,
           (int *)a1);
    if ( v4 < 0 )
      ModuleFailFastForHRESULT(v4, retaddr);
    v5 = v8;
    v8 = 0LL;
    *a2 = v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
