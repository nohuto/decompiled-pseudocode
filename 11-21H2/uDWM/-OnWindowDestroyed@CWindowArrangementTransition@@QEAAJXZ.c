/*
 * XREFs of ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x180100F38
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800223E0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800D1C50 (-Stop@CRippleEffect@@QEAAJXZ.c)
 *     ?GetArrangementSheet@CWindowArrangementTransition@@AEAAPEAUIArrangementSheet@@XZ @ 0x180100A20 (-GetArrangementSheet@CWindowArrangementTransition@@AEAAPEAUIArrangementSheet@@XZ.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowDestroyed(
        CRippleEffect **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct IArrangementSheet *ArrangementSheet; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct IArrangementSheet *v12; // rax
  CRippleEffect *v13; // rcx

  if ( CWindowArrangementTransition::GetArrangementSheet((CWindowArrangementTransition *)this, a2, a3, a4) )
  {
    ArrangementSheet = CWindowArrangementTransition::GetArrangementSheet(
                         (CWindowArrangementTransition *)this,
                         v5,
                         v6,
                         v7);
    (*(void (__fastcall **)(struct IArrangementSheet *))(*(_QWORD *)ArrangementSheet + 48LL))(ArrangementSheet);
    v12 = CWindowArrangementTransition::GetArrangementSheet((CWindowArrangementTransition *)this, v9, v10, v11);
    (*(void (__fastcall **)(struct IArrangementSheet *))(*(_QWORD *)v12 + 40LL))(v12);
  }
  v13 = this[1];
  if ( v13 )
    CRippleEffect::Stop(v13);
  this[2] = 0LL;
  return 0LL;
}
