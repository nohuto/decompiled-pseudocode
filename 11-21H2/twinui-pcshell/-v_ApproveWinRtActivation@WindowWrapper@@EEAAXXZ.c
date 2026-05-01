/*
 * XREFs of ?v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ @ 0x180140B70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x180140BC4 (-SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapper::v_ApproveWinRtActivation(WindowWrapper *this)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  v2 = *(_OWORD *)((char *)this + 700);
  WindowWrapper::SetImageLocationNoLock((char *)this - 8, &v2);
}
