/*
 * XREFs of ?RemoveAtEnd@?$VectorBasedCollection@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAXXZ @ 0x18014405C
 * Callers:
 *     ?RemoveAtEnd@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJXZ @ 0x180143FF0 (-RemoveAtEnd@-$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Co.c)
 *     ?RemoveAtEnd@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJXZ @ 0x180174050 (-RemoveAtEnd@-$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Win.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>::RemoveAtEnd(
        _QWORD *a1)
{
  __int64 result; // rax

  result = a1[2];
  if ( a1[1] != result )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, a1[2] - 8LL);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)(a1[2] - 8LL));
    a1[2] -= 8LL;
    return (*(__int64 (__fastcall **)(_QWORD *))*a1)(a1);
  }
  return result;
}
