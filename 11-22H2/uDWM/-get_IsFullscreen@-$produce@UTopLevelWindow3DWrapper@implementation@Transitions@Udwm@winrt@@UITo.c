/*
 * XREFs of ?get_IsFullscreen@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800FB7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFullscreen@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1800FB310 (-IsFullscreen@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_IsFullscreen(
        __int64 a1,
        _BYTE *a2)
{
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    *a2 = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::IsFullscreen(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
