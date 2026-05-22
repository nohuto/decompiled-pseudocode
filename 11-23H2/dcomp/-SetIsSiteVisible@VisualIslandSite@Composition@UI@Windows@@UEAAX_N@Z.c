/*
 * XREFs of ?SetIsSiteVisible@VisualIslandSite@Composition@UI@Windows@@UEAAX_N@Z @ 0x18008D3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::VisualIslandSite::SetIsSiteVisible(
        Windows::UI::Composition::VisualIslandSite *this,
        char a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 23) == 0LL;
  *((_BYTE *)this + 176) = a2;
  if ( !v2 )
  {
    v3 = *((_QWORD *)this + 24);
    v4 = *((_QWORD *)this + 28);
    v5 = v3;
    CoreUICallSend(v4, &v5, 1LL, 6LL);
  }
}
