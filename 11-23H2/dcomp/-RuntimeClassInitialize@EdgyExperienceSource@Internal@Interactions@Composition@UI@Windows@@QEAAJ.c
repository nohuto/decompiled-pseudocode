/*
 * XREFs of ?RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVVisual@456@@Z @ 0x18013150C
 * Callers:
 *     ??$MakeAndInitialize2@VEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@V123456@AEAPEAUHSTRING__@@PEAVVisual@456@@Details@WRL2@Microsoft@@YAJPEAPEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@AEAPEAUHSTRING__@@$$QEAPEAVVisual@678@@Z @ 0x180130ACC (--$MakeAndInitialize2@VEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@V12345.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual@345@_N@Z @ 0x18011DB7C (-RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVi.c)
 *     ?SetChainingModeForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@2345@@Z @ 0x18011DE74 (-SetChainingModeForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4Scro.c)
 *     ?SetInteraction@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@IEAAXXZ @ 0x180131724 (-SetInteraction@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@IEAAXXZ.c)
 *     ?EdgySetEdgeId@CompositionManipulation@Composition@UI@Windows@@QEAAXPEAUHSTRING__@@@Z @ 0x1801612B8 (-EdgySetEdgeId@CompositionManipulation@Composition@UI@Windows@@QEAAXPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::RuntimeClassInitialize(
        HSTRING *this,
        HSTRING a2,
        struct Windows::UI::Composition::Visual *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HSTRING *v8; // rdi
  __int64 v9; // r9
  Windows::UI::Composition::CompositionManipulation *v10; // rbx
  HSTRING string; // [rsp+20h] [rbp-40h] BYREF
  HSTRING v13; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING trimString; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  string = 0LL;
  v13 = a2;
  v5 = Microsoft::WRL::Wrappers::HString::Set(&string, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = this + 39;
    WindowsDeleteString(this[39]);
    this[39] = 0LL;
    trimString = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L" ", 2u, 1u);
    v5 = WindowsTrimStringStart(string, trimString, this + 39);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v13 = *v8;
      v5 = Microsoft::WRL::Wrappers::HString::Set(&string, &v13);
      v6 = v5;
      if ( v5 >= 0 )
      {
        WindowsDeleteString(*v8);
        *v8 = 0LL;
        trimString = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L" ", 2u, 1u);
        v5 = WindowsTrimStringEnd(string, trimString, this + 39);
        v6 = v5;
        if ( v5 >= 0 )
        {
          if ( WindowsGetStringLen(*v8) - 1 > 0x3E )
          {
            v6 = -2147024809;
            v7 = 68LL;
            v9 = 2147942487LL;
            goto LABEL_6;
          }
          v5 = Windows::UI::Composition::Interactions::VisualInteractionSource::RuntimeClassInitialize(
                 (struct Microsoft::WRL2::ContextSession **)this,
                 a3,
                 0);
          v6 = v5;
          if ( v5 >= 0 )
          {
            Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::SetInteraction((Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *)this);
            v10 = (Windows::UI::Composition::CompositionManipulation *)this[31];
            Windows::UI::Composition::CompositionManipulation::EdgySetEdgeId(v10, *v8);
            Windows::UI::Composition::Interactions::VisualInteractionSource::SetChainingModeForAxis((__int64)this, 0, 2);
            Windows::UI::Composition::Interactions::VisualInteractionSource::SetChainingModeForAxis((__int64)this, 1, 2);
            Windows::UI::Composition::Interactions::VisualInteractionSource::SetChainingModeForAxis((__int64)this, 2, 2);
            *((_QWORD *)v10 + 20) = (unsigned __int64)(this + 36) & -(__int64)(this != 0LL);
            v6 = 0;
            goto LABEL_16;
          }
          v7 = 72LL;
        }
        else
        {
          v7 = 63LL;
        }
      }
      else
      {
        v7 = 59LL;
      }
    }
    else
    {
      v7 = 57LL;
    }
  }
  else
  {
    v7 = 53LL;
  }
  v9 = (unsigned int)v5;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtedgyexperiencesource.cpp",
    (const char *)v9);
LABEL_16:
  WindowsDeleteString(string);
  return v6;
}
