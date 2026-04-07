/*
 * XREFs of ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7524
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180054830 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180054904 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     _CDisplayModeChangeHelper::HasChanged_::_1_::dtor$0 @ 0x180068656 (_CDisplayModeChangeHelper--HasChanged_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::HasChanged_::_1_::dtor$1 @ 0x180068668 (_CDisplayModeChangeHelper--HasChanged_--_1_--dtor$1.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$0 @ 0x18006867A (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$1 @ 0x18006868C (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$1.c)
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7BBC (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$0 @ 0x1800B7D93 (_CDisplayAnimatedVisual--CapturePrimary_--_1_--dtor$0.c)
 *     _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$1 @ 0x1800B7D9F (_CDisplayAnimatedVisual--CapturePrimary_--_1_--dtor$1.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF5F0 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     _CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl_::_1_::dtor$0 @ 0x1800BF85E (_CDisplaySecondaryOnlyToExtendAnimatedVisual--StartImpl_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180054A64 (-Release@CDWMDisplay@@QEBAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(
        CDWMDisplay **a1)
{
  CDWMDisplay *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CDWMDisplay::Release(v1);
  return result;
}
