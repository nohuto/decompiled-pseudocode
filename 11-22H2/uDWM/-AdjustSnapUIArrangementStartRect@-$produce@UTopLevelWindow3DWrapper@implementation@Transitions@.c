/*
 * XREFs of ?AdjustSnapUIArrangementStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAU4563@@Z @ 0x1800FADD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA?AUMilPointAndSizeF@@AEBU2@@Z @ 0x1800E74AC (-AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA-AUMilPointAndSizeF@@AEBU2@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::AdjustSnapUIArrangementStartRect(
        __int64 a1,
        __int128 *a2,
        _OWORD *a3)
{
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = a1 + 24;
  if ( !a1 )
    v4 = 32LL;
  v6 = *a2;
  CTopLevelWindow3D::AdjustSnapUIArrangementStartRect(*(CTopLevelWindow3D **)v4, (__int64)&v7, &v6);
  *a3 = v7;
  return 0LL;
}
