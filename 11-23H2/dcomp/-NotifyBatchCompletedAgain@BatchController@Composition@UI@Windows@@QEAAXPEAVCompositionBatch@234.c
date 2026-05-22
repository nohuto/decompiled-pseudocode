/*
 * XREFs of ?NotifyBatchCompletedAgain@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z @ 0x18015AF7C
 * Callers:
 *     ?add_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x1800115CC (-add_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJPEAU-$ITypedEventHandler@PEAUIInspe.c)
 * Callees:
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::BatchController::NotifyBatchCompletedAgain(
        Windows::UI::Composition::BatchController *this,
        struct Windows::UI::Composition::CompositionBatch *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)a2 + 23) && a2 != *((struct Windows::UI::Composition::CompositionBatch **)this + 7) )
  {
    Windows::UI::Composition::BatchController::MigrateBatch((__int64)this, (__int64)a2, 0LL, 3);
    LOBYTE(v3) = 1;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 440LL) + 48LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 440LL),
           v3);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        3255LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v4,
        v5);
  }
}
