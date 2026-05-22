/*
 * XREFs of ?InsertAt@?$VectorBasedCollection@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAJIAEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x18014375C
 * Callers:
 *     ?InsertAt@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUISceneComponent@Scenes@234@@Z @ 0x1801435C0 (-InsertAt@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@.c)
 *     ?InsertAt@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUISceneNode@Scenes@234@@Z @ 0x180143690 (-InsertAt@-$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Compo.c)
 *     ?InsertAt@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJIPEAUICompositionColorGradientStop@234@@Z @ 0x180173C90 (-InsertAt@-$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Window.c)
 *     ?InsertAt@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUICompositionShape@234@@Z @ 0x1801A12B0 (-InsertAt@-$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Compo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace@AEBV?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@AEBV?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x180140E20 (--$emplace@AEBV-$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@-$vector@V-$.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>::InsertAt(
        _QWORD *a1,
        unsigned int a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r14
  __int64 v7; // rdx
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 1;
  v4 = a2;
  if ( a2 > (unsigned __int64)((__int64)(a1[2] - a1[1]) >> 3) )
  {
    Windows::UI::Composition::OriginateInvalidArgument(17LL, L"index");
    v7 = 86LL;
    v8 = -2147024809;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, Microsoft::WRL2::NestableRuntimeClass **))(*a1 + 16LL))(a1, a3);
  if ( v8 < 0 )
  {
    v7 = 89LL;
    goto LABEL_3;
  }
  std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape>>::emplace<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape> const &>(
    (__int64)v3,
    &v11,
    *v3 + 8 * v4,
    a3);
  (*(void (__fastcall **)(_QWORD *))*a1)(a1);
  return 0LL;
}
