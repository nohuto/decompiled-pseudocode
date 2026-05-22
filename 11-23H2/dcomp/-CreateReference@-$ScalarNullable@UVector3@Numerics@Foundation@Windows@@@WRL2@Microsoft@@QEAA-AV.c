/*
 * XREFs of ?CreateReference@?$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA?AV?$ComPtr@U?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@WRL@3@XZ @ 0x1801388AC
 * Callers:
 *     ?get_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@6@@Z @ 0x18013CDB0 (-get_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJP.c)
 *     ?get_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168870 (-get_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU-$IReferen.c)
 *     ?get_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168930 (-get_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU-$IRefer.c)
 *     ?get_ModifiedRestingPosition@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180191570 (-get_ModifiedRestingPosition@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ??$MakeAndInitialize@V?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@V123@AEAUVector3@Numerics@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@2@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180134D14 (--$MakeAndInitialize@V-$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@V12.c)
 */

__int64 *__fastcall Microsoft::WRL2::ScalarNullable<Windows::Foundation::Numerics::Vector3>::CreateReference(
        __int64 a1,
        __int64 *a2)
{
  int v4; // eax
  __int64 v5; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 12) )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector3>,Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector3>,Windows::Foundation::Numerics::Vector3 &>(
           &v8,
           (__int64 *)a1);
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
