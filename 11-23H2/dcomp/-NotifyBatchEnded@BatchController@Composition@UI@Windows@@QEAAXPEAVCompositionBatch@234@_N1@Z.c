/*
 * XREFs of ?NotifyBatchEnded@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@_N1@Z @ 0x18015AFF4
 * Callers:
 *     ?End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x180078B18 (-End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InvalidateCurrentScopedSet@BatchController@Composition@UI@Windows@@AEAAXXZ @ 0x18015AF64 (-InvalidateCurrentScopedSet@BatchController@Composition@UI@Windows@@AEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::BatchController::NotifyBatchEnded(
        Windows::UI::Composition::BatchController *this,
        struct Windows::UI::Composition::CompositionBatch *a2,
        unsigned __int8 a3,
        char a4)
{
  char *v5; // r11
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (char *)this + 8 * (a3 ^ 1LL);
  if ( a3 && *((_DWORD *)a2 + 34) == *(_DWORD *)(*((_QWORD *)a2 + 3) + 104LL) )
    Windows::UI::Composition::BatchController::InvalidateCurrentScopedSet(this);
  v6 = (__int64)(v5 + 32);
  if ( a4 )
  {
    Windows::UI::Composition::BatchController::MigrateBatch((__int64)this, (__int64)a2, v6, 3);
    LOBYTE(v7) = 1;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 440LL) + 48LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 440LL),
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        3255LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v8,
        v9);
  }
  else
  {
    Windows::UI::Composition::BatchController::MigrateBatch((__int64)this, (__int64)a2, v6, 2);
  }
}
