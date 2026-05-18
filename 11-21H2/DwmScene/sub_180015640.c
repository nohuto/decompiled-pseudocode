/*
 * XREFs of sub_180015640 @ 0x180015640
 * Callers:
 *     sub_1800157A0 @ 0x1800157A0 (sub_1800157A0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180015640(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_180015520(a1, a2);
}
