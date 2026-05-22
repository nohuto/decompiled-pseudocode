/*
 * XREFs of ?SetAt@?$VectorBasedCollection@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAJIAEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x18014444C
 * Callers:
 *     ?SetAt@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUISceneComponent@Scenes@234@@Z @ 0x1801442B0 (-SetAt@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Com.c)
 *     ?SetAt@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUISceneNode@Scenes@234@@Z @ 0x180144380 (-SetAt@-$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composit.c)
 *     ?SetAt@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJIPEAUICompositionColorGradientStop@234@@Z @ 0x180174180 (-SetAt@-$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@.c)
 *     ?SetAt@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUICompositionShape@234@@Z @ 0x1801A1540 (-SetAt@-$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composit.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>::SetAt(
        _QWORD *a1,
        unsigned int a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v10; // r14
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = a1[1];
  if ( a2 >= (unsigned __int64)((a1[2] - v5) >> 3) )
  {
    Windows::UI::Composition::OriginateInvalidArgument(17LL, L"index");
    v7 = 63LL;
    v8 = -2147024809;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( *a3 != *(Microsoft::WRL2::NestableRuntimeClass **)(v5 + 8LL * a2) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD *, Microsoft::WRL2::NestableRuntimeClass **))(*a1 + 16LL))(a1, a3);
    if ( v8 < 0 )
    {
      v7 = 68LL;
      goto LABEL_3;
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, a1[1] + 8 * v4);
    v10 = a1[1];
    v11 = *a3;
    if ( *(Microsoft::WRL2::NestableRuntimeClass **)(v10 + 8 * v4) != *a3 )
    {
      if ( v11 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*a3);
      v13 = *(Microsoft::WRL2::NestableRuntimeClass **)(v10 + 8 * v4);
      *(_QWORD *)(v10 + 8 * v4) = v11;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
    }
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
  }
  return 0LL;
}
