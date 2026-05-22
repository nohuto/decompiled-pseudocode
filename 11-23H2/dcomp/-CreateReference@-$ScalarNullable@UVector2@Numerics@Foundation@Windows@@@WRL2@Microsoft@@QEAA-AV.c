/*
 * XREFs of ?CreateReference@?$ScalarNullable@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@QEAA?AV?$ComPtr@U?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@Windows@@@WRL@3@XZ @ 0x180167F80
 * Callers:
 *     ?get_FinalValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168250 (-get_FinalValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU-$IReferen.c)
 *     ?get_InitialValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168310 (-get_InitialValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU-$IRefer.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ??$MakeAndInitialize@V?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@V123@AEAUVector2@Numerics@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@2@AEAUVector2@Numerics@Foundation@Windows@@@Z @ 0x180167E14 (--$MakeAndInitialize@V-$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@V12.c)
 */

__int64 *__fastcall Microsoft::WRL2::ScalarNullable<Windows::Foundation::Numerics::Vector2>::CreateReference(
        __int64 a1,
        __int64 *a2)
{
  int v4; // eax
  __int64 v5; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 8) )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>,Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector2>,Windows::Foundation::Numerics::Vector2 &>(
           &v8,
           (void **)a1);
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
