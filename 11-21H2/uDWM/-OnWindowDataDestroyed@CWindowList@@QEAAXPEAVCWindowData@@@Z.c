/*
 * XREFs of ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001C528
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001FADC (--1CWindowData@@QEAA@XZ.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18005B3D0 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@QEAA_NXZ @ 0x180063230 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180105C50 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

void __fastcall CWindowList::OnWindowDataDestroyed(CDisplayAnimatedVisual **this, CTopLevelWindow3D **a2)
{
  int v4; // eax
  CDisplayAnimatedVisual *v5; // rcx
  CTopLevelWindow3D *v6; // rbx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == (CTopLevelWindow3D **)this[88] )
  {
    v4 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed((CWindowList *)this, 1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC68,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v4,
        v7);
    this[88] = 0LL;
  }
  v5 = this[73];
  if ( v5 )
    CDisplayAnimatedVisual::OnWindowDataDestroyed(v5, (struct CWindowData *)a2);
  v6 = a2[56];
  if ( v6 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::GetImpl'::`2'::impl) )
    {
      if ( *((_QWORD *)v6 + 42) )
        CTopLevelWindow3D::StopAnimation(v6);
    }
    *((_QWORD *)v6 + 42) = 0LL;
  }
}
