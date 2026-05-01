/*
 * XREFs of ?v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ @ 0x1804DDD70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x1804DDBE4 (-SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 */

void __fastcall WindowWrapper::v_ApproveWinRtActivation(WindowWrapper *this)
{
  float v2[6]; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  *(_OWORD *)v2 = *(_OWORD *)((char *)this + 700);
  WindowWrapper::SetImageLocationNoLock((__int64)this - 8, v2);
}
