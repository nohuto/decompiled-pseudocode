/*
 * XREFs of sub_180018270 @ 0x180018270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180018270()
{
  __int64 v0; // rcx

  v0 = qword_180032C78;
  if ( qword_180032C78 )
  {
    qword_180032C78 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
}
