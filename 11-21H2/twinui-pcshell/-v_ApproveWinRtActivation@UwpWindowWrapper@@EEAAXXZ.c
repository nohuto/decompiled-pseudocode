/*
 * XREFs of ?v_ApproveWinRtActivation@UwpWindowWrapper@@EEAAXXZ @ 0x1804064D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x180406308 (-SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 */

void __fastcall UwpWindowWrapper::v_ApproveWinRtActivation(UwpWindowWrapper *this)
{
  float v2[6]; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 224LL))(*((_QWORD *)this + 34));
  *(_OWORD *)v2 = *(_OWORD *)((char *)this + 684);
  UwpWindowWrapper::SetImageLocationNoLock((__int64)this - 8, v2);
}
