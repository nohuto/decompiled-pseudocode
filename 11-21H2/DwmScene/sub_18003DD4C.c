/*
 * XREFs of sub_18003DD4C @ 0x18003DD4C
 * Callers:
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003DD4C(_QWORD **a1, __int64 a2, __int64 a3, unsigned int a4)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64, _QWORD))(*a1)[36])(a1, a2, a3, a4);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
