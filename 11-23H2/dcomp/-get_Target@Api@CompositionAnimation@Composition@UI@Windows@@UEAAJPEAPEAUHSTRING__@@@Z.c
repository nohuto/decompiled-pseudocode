/*
 * XREFs of ?get_Target@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180007A60
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::Api::get_Target(
        Windows::UI::Composition::CompositionAnimation::Api *this,
        HSTRING *a2)
{
  Microsoft::WRL2::ContextSession *v3; // rbx
  HRESULT v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v5 = WindowsDuplicateString(*((HSTRING *)this + 6), a2);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x52D,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
        (const char *)(unsigned int)v5,
        v7);
    Microsoft::WRL2::ContextSession::EndApiEntry(v3);
    return 0LL;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v3);
    return 2147483667LL;
  }
}
