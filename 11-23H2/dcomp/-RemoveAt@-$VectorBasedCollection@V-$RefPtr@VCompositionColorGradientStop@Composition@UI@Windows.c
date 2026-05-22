/*
 * XREFs of ?RemoveAt@?$VectorBasedCollection@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAJI@Z @ 0x180143F2C
 * Callers:
 *     ?RemoveAt@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJI@Z @ 0x180143EA0 (-RemoveAt@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@.c)
 *     ?RemoveAt@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJI@Z @ 0x180173FC0 (-RemoveAt@-$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@2@@Z @ 0x1801448C0 (-erase@-$vector@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V-$all.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>::RemoveAt(
        _QWORD *a1,
        unsigned int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 1;
  v3 = a2;
  v4 = a1[2];
  v6 = a1[1];
  if ( a2 < (unsigned __int64)((v4 - v6) >> 3) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, v6 + 8LL * a2);
    std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>::erase(v2, &v9, *v2 + 8 * v3);
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    return 0LL;
  }
  else
  {
    Windows::UI::Composition::OriginateInvalidArgument(17LL, L"index");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
