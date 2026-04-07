/*
 * XREFs of ?StopAnimation@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHXZ @ 0x1800F8780
 * Callers:
 *     <none>
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::StopAnimation(
        __int64 a1)
{
  __int64 v2; // rcx
  CTopLevelWindow3D *v3; // rcx
  int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 24;
  if ( !a1 )
    v2 = 32LL;
  v3 = *(CTopLevelWindow3D **)v2;
  try
  {
    v4 = CTopLevelWindow3D::StopAnimation(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        127LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.toplevelwindow3dwrapper.cpp",
        (const char *)(unsigned int)v4,
        v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
