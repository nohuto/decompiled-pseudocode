/*
 * XREFs of ?OnDeviceConvertibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x1805258C8
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A5144 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18014B338 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDeviceConvertibilityChanged(
        KeyboardHosting::TabTipAdapter *this,
        char a2)
{
  __int64 v4; // rdx
  const char *v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xABE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v5);
  LOBYTE(v4) = a2;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 16) + 88LL))(
         *((_QWORD *)this + 16),
         v4,
         &v10);
  if ( v6 < 0 )
  {
    v7 = 2753LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( v10 == 3 )
  {
    v6 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((RTL_SRWLOCK *)this);
    if ( v6 < 0 )
    {
      v7 = 2757LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
