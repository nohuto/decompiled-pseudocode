/*
 * XREFs of ?Append@?$VectorBasedCollection@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAJAEBV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x1800B705C
 * Callers:
 *     ?Append@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAUISceneComponent@Scenes@234@@Z @ 0x180141CB0 (-Append@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Co.c)
 *     ?Append@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAUISceneNode@Scenes@234@@Z @ 0x180141D80 (-Append@-$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800B6F0C (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::Append(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  Microsoft::WRL2::NestableRuntimeClass **v7; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 16);
    if ( v7 == *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 24) )
    {
      std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop> const &>(
        (const char *)(a1 + 8),
        (__int64)v7,
        a2);
    }
    else
    {
      v8 = *a2;
      *v7 = *a2;
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v8);
      *(_QWORD *)(a1 + 16) += 8LL;
    }
    (**(void (__fastcall ***)(__int64))a1)(a1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
