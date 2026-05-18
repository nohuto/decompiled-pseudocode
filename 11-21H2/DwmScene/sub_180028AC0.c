/*
 * XREFs of sub_180028AC0 @ 0x180028AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_180028AC0(__int64 a1, _DWORD *a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, 0LL) )
    *a2 &= ~2u;
  return a2;
}
