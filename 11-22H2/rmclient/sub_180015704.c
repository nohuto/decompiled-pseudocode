/*
 * XREFs of sub_180015704 @ 0x180015704
 * Callers:
 *     sub_180015888 @ 0x180015888 (sub_180015888.c)
 * Callees:
 *     sub_180011428 @ 0x180011428 (sub_180011428.c)
 *     sub_180015414 @ 0x180015414 (sub_180015414.c)
 *     sub_180015674 @ 0x180015674 (sub_180015674.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180015704(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  if ( qword_180032978 && (!(_DWORD)a2 || (unsigned int)(a2 - 100) <= 0x31) )
    qword_180032978(39841886LL, a2, 1LL);
  if ( *a5 )
    sub_180015674(&byte_180032B40, a2, a4);
  if ( a5[1] )
    sub_180011428();
  if ( !a5[4] )
    sub_180015414((__int64)&byte_180032B40);
}
