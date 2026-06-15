/*
 * XREFs of ?UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ @ 0x14006BB3C
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAudioPump::UpdatePresentationTimestamp(CAudioPump *this)
{
  __int64 v2; // rcx
  _BYTE v3[8]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v4[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]

  v5 = 0LL;
  v2 = *((_QWORD *)this + 25);
  memset(v4, 0, sizeof(v4));
  (*(void (__fastcall **)(__int64, _BYTE *, _OWORD *))(*(_QWORD *)v2 + 24LL))(v2, v3, v4);
  (*(void (__fastcall **)(_QWORD, _OWORD *))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10), v4);
}
