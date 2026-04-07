/*
 * XREFs of ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B450C
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E0B4 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$0 @ 0x18006564F (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$1 @ 0x180065661 (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$1.c)
 *     _CDisplayModeChangeHelper::HasChanged_::_1_::dtor$0 @ 0x180065673 (_CDisplayModeChangeHelper--HasChanged_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::HasChanged_::_1_::dtor$1 @ 0x180065685 (_CDisplayModeChangeHelper--HasChanged_--_1_--dtor$1.c)
 *     _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$0 @ 0x1800B4C2D (_CDisplayAnimatedVisual--CapturePrimary_--_1_--dtor$0.c)
 *     _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$1 @ 0x1800B4C39 (_CDisplayAnimatedVisual--CapturePrimary_--_1_--dtor$1.c)
 *     _CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl_::_1_::dtor$0 @ 0x1800BB776 (_CDisplaySecondaryOnlyToExtendAnimatedVisual--StartImpl_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003DE08 (-Release@CDWMDisplay@@QEBAKXZ.c)
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
