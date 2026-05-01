/*
 * XREFs of wil::details::ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___::_ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___ @ 0x180527C24
 * Callers:
 *     _JointResize::OnArrangedWindowResizeStarted_::_1_::dtor$1 @ 0x180529F48 (_JointResize--OnArrangedWindowResizeStarted_--_1_--dtor$1.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180237994 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x18052883C (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x180528E9C (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___::_ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    JointResize::DestroyGhostDivider(*(JointResize **)a1);
    JointResize::Cleanup(*(JointResize **)a1);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      *(_QWORD *)a1 + 496LL,
      0);
  }
}
