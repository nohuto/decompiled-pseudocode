/*
 * XREFs of ?StopAnimation@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHXZ @ 0x1800FB510
 * Callers:
 *     <none>
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE48C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::StopAnimation(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 24;
  if ( !a1 )
    v3 = 32LL;
  try
  {
    if ( *(_QWORD *)(*(_QWORD *)v3 + 336LL) )
    {
      v4 = CTopLevelWindow3D::StopAnimation(*(CTopLevelWindow3D **)v3, 32LL, a3);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          139LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.toplevelwindow3dwrapper.cpp",
          (const char *)(unsigned int)v4,
          v6);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
