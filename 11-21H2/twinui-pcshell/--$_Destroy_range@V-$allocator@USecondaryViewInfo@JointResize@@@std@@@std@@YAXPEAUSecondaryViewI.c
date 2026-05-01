/*
 * XREFs of ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180527844
 * Callers:
 *     ??1JointResize@@UEAA@XZ @ 0x1800ABB3C (--1JointResize@@UEAA@XZ.c)
 *     _std::vector_JointResize::SecondaryViewInfo_std::allocator_JointResize::SecondaryViewInfo___::_Emplace_reallocate_JointResize::SecondaryViewInfo__::_1_::catch$2 @ 0x180527A0C (_std--vector_JointResize--SecondaryViewInfo_std--allocator_JointResize--SecondaryViewInfo___--_E.c)
 *     ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180527A48 (--$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointR.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x18052883C (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAXQEAUSecondaryViewInfo@JointResize@@_K1@Z @ 0x18052B1F0 (-_Change_array@-$vector@USecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointRes.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void __fastcall std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v3);
      v3 += 11;
    }
    while ( v3 != a2 );
  }
}
