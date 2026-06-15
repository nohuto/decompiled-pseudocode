/*
 * XREFs of wil::details::lambda_call__lambda_d4d563787c597eeb854d7a002cd12c12___::_lambda_call__lambda_d4d563787c597eeb854d7a002cd12c12___ @ 0x1800D85A0
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$17 @ 0x1800DA91A (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$17.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$7 @ 0x1800DD302 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::lambda_call__lambda_d4d563787c597eeb854d7a002cd12c12___::_lambda_call__lambda_d4d563787c597eeb854d7a002cd12c12___(
        __int64 a1)
{
  _QWORD *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( **(_QWORD **)a1 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 48LL) + 80LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL));
      result = *(_QWORD **)a1;
      **(_QWORD **)a1 = 0LL;
    }
  }
  return result;
}
