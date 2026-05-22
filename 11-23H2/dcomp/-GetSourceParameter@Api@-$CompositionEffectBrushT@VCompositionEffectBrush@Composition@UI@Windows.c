/*
 * XREFs of ?GetSourceParameter@Api@?$CompositionEffectBrushT@VCompositionEffectBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionBrush@345@@Z @ 0x1801769A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?GetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVCompositionBrush@234@@Z @ 0x18019BC5C (-GetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVCo.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::Api::GetSourceParameter(
        __int64 a1,
        HSTRING a2,
        unsigned __int64 *a3)
{
  Windows::UI::Composition::CompositionEffectBrush *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v7; // edi
  int SourceParameter; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  struct Windows::UI::Composition::CompositionBrush *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::CompositionBrush *v14; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositionEffectBrush *)(a1 - 152);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v14 = 0LL;
    SourceParameter = Windows::UI::Composition::CompositionEffectBrush::GetSourceParameter(v3, a2, &v14);
    v7 = SourceParameter;
    if ( SourceParameter >= 0 )
    {
      v11 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        v9 = (__int64)v11 + 136;
        *a3 = ((unsigned __int64)v11 + 136) & -(__int64)(v11 != 0LL);
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
        (volatile signed __int32 **)&v14,
        v9);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFE7,
        (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
        (const char *)(unsigned int)SourceParameter);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
        (volatile signed __int32 **)&v14,
        v10);
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE2,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
