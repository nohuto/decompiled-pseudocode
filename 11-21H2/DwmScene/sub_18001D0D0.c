/*
 * XREFs of sub_18001D0D0 @ 0x18001D0D0
 * Callers:
 *     sub_18001D4DC @ 0x18001D4DC (sub_18001D4DC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001D0D0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_18001CFB0(a1, a2);
}
