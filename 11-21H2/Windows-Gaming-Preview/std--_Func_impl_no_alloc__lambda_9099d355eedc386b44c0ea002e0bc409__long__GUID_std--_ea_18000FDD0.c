/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9099d355eedc386b44c0ea002e0bc409__long__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__&&_::_Do_call @ 0x18000FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000B98C (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_9099d355eedc386b44c0ea002e0bc409__long__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete_____::_Do_call(
        __int64 a1,
        _OWORD *a2,
        const struct ExecutionModel::GameConfig **a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 8);
  *(_OWORD *)v7 = *a2;
  v4 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig(v3, v7, a3);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
