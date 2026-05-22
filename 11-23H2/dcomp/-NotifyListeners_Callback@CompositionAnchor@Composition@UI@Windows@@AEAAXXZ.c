/*
 * XREFs of ?NotifyListeners_Callback@CompositionAnchor@Composition@UI@Windows@@AEAAXXZ @ 0x180087494
 * Callers:
 *     ?NotifyVisualUpdated_Callback@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAVVisual@234@MAEBUVector2@Numerics@Foundation@4@AEBUVector3@784@2@Z @ 0x1800873DC (-NotifyVisualUpdated_Callback@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAVVisual@234@MAEB.c)
 *     std::_Func_impl_no_alloc__lambda_e80fe9fe7bd899d93197eb5c4b8b2598__void_::_Do_call @ 0x1801478B0 (std--_Func_impl_no_alloc__lambda_e80fe9fe7bd899d93197eb5c4b8b2598__void_--_Do_call.c)
 * Callees:
 *     ?Cancel@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXXZ @ 0x1800875D4 (-Cancel@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_a3da230fae406fbf032acb8a8e682e00___ @ 0x180147798 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_a3da230fae406fbf032acb8a8e682e00_.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnchor::NotifyListeners_Callback(
        Windows::UI::Composition::CompositionAnchor *this)
{
  float *v2; // rbx
  float *v3; // rsi
  float v4; // xmm1_4

  Microsoft::WRL2::ContextLatchedInvoke::Cancel((Windows::UI::Composition::CompositionAnchor *)((char *)this + 216));
  v2 = (float *)*((_QWORD *)this + 24);
  v3 = v2 + 6;
  while ( v2 != *((float **)this + 25) )
  {
    v4 = *((float *)this + 38);
    if ( *(v3 - 4) != v4
      || *(v3 - 3) != *((float *)this + 39)
      || *(v3 - 2) != *((float *)this + 40)
      || *(v3 - 1) != *((float *)this + 41)
      || *v3 != *((float *)this + 42)
      || v3[1] != *((float *)this + 43)
      || v3[2] != *((float *)this + 44)
      || v3[3] != *((float *)this + 45)
      || v3[4] != *((float *)this + 46) )
    {
      *(v3 - 4) = v4;
      *(_QWORD *)(v3 - 3) = *(_QWORD *)((char *)this + 156);
      *(_QWORD *)(v3 - 1) = *(_QWORD *)((char *)this + 164);
      v3[1] = *((float *)this + 43);
      *((_QWORD *)v3 + 1) = *((_QWORD *)this + 22);
      v3[4] = *((float *)this + 46);
      if ( *((_BYTE *)v3 + 24) )
      {
        Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_a3da230fae406fbf032acb8a8e682e00___(*((Microsoft::WRL2::ContextSession **)this + 3));
        if ( (*((_BYTE *)this + 32) & 2) == 0 )
          return;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)v2 + 48LL))(
          *(_QWORD *)v2,
          ((unsigned __int64)this + 128) & -(__int64)(this != 0LL));
      }
      if ( (*((_BYTE *)this + 32) & 2) == 0 )
        return;
    }
    v2 += 14;
    v3 += 14;
  }
}
