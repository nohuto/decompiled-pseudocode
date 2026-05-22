/*
 * XREFs of ?SetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAUHSTRING__@@@Z @ 0x180083590
 * Callers:
 *     ?put_Target@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180083520 (-put_Target@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimation::SetTarget(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2)
{
  HSTRING *v2; // rbx
  HSTRING v4; // rcx
  HRESULT v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (HSTRING *)((char *)this + 184);
  v4 = (HSTRING)*((_QWORD *)this + 23);
  if ( v4 )
  {
    WindowsDeleteString(v4);
    *v2 = 0LL;
  }
  if ( a2 )
  {
    v5 = WindowsDuplicateString(a2, v2);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x546,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
        (const char *)(unsigned int)v5,
        v6);
  }
}
