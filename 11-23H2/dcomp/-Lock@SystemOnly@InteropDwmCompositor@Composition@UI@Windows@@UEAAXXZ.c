/*
 * XREFs of ?Lock@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAXXZ @ 0x18015BC30
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::InteropDwmCompositor::SystemOnly::Lock(
        Windows::UI::Composition::InteropDwmCompositor::SystemOnly *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v2; // ebx
  const char *v3; // r9
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1288);
  v2 = *((_DWORD *)this - 308);
  if ( v2 == GetCurrentThreadId() )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      219LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
      v3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (v1->SpinCount & 2) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      221LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
      v4);
}
