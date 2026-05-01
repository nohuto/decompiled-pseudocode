/*
 * XREFs of ?v_ApproveWinRtActivation@UwpWindowWrapper@@EEAAXXZ @ 0x18018DE00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x18018DE8C (-SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapper::v_ApproveWinRtActivation(UwpWindowWrapper *this)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  v2 = *(_OWORD *)((char *)this + 708);
  UwpWindowWrapper::SetImageLocationNoLock((char *)this - 8, &v2);
}
