/*
 * XREFs of ?ConfigureDeltaScaleModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x18011D150
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??1?$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V?$allocator@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18010E31C (--1-$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V-$all.c)
 *     ??$SaveIterableListToLocal@VCompositionConditionalValue@Interactions@Composition@UI@Windows@@UICompositionConditionalValue@2345@@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@3@PEAV?$vector@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@V?$allocator@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@@std@@@std@@@Z @ 0x18011C658 (--$SaveIterableListToLocal@VCompositionConditionalValue@Interactions@Composition@UI@Windows@@UIC.c)
 *     ?ConfigureSourceModifiers@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@@Z @ 0x18011D294 (-ConfigureSourceModifiers@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJV-$s.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Api::ConfigureDeltaScaleModifiers(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  void *v7; // rdi
  gsl::details *v8; // rcx
  int v9; // eax
  unsigned int v10; // esi
  _QWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v13 = 0LL;
  v12 = 0LL;
  v3 = Windows::UI::Composition::AnimationHelper::SaveIterableListToLocal<Windows::UI::Composition::Interactions::CompositionConditionalValue,Windows::UI::Composition::Interactions::ICompositionConditionalValue>(
         a2,
         (__int64)&v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x606,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)(unsigned int)v3);
LABEL_5:
    std::vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>::~vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>((__int64)&v12);
    return v4;
  }
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 112);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(a1 - 104) & 2) == 0 )
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v5);
    v4 = -2147483629;
    goto LABEL_5;
  }
  v7 = (void *)v12;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v11, (__int64)(*((_QWORD *)&v12 + 1) - v12) >> 3);
  if ( v11[0] == -1LL || !v7 && v11[0] )
  {
    gsl::details::terminate(v8);
    JUMPOUT(0x18011D28BLL);
  }
  v11[1] = v7;
  v9 = Windows::UI::Composition::Interactions::VisualInteractionSource::ConfigureSourceModifiers(a1 - 136, v11, 4LL);
  v10 = v9;
  if ( v9 < 0 )
    DoStackCaptureDirect(v9, 0x60Eu);
  else
    v10 = 0;
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  if ( v7 )
    std::_Deallocate<16,0>(v7, (v13 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
  return v10;
}
