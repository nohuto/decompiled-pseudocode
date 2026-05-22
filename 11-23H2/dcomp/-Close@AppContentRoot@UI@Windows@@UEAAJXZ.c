/*
 * XREFs of ?Close@AppContentRoot@UI@Windows@@UEAAJXZ @ 0x1800058D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CloseHelper@UIInputSite@Input@Internal@UI@Windows@@@AppContentRoot@UI@Windows@@AEAAJAEAV?$ComPtr@UIInputSite@Input@Internal@UI@Windows@@@WRL@Microsoft@@@Z @ 0x180005924 (--$CloseHelper@UIInputSite@Input@Internal@UI@Windows@@@AppContentRoot@UI@Windows@@AEAAJAEAV-$Com.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::AppContentRoot::Close(Windows::UI::AppContentRoot *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 10)
    && (v2 = Windows::UI::AppContentRoot::CloseHelper<Windows::UI::Internal::Input::IInputSite>(), v3 = v2, v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtappcontentroot.cpp",
      (const char *)(unsigned int)v2,
      v7);
    return v3;
  }
  else if ( *((_QWORD *)this + 8)
         && (v4 = Windows::UI::AppContentRoot::CloseHelper<Windows::UI::Internal::Input::IInputSite>(), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtappcontentroot.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return v5;
  }
  else
  {
    return 0LL;
  }
}
