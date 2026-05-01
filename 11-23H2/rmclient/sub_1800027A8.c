/*
 * XREFs of sub_1800027A8 @ 0x1800027A8
 * Callers:
 *     CrmUnregister @ 0x180002770 (CrmUnregister.c)
 *     CrmRegister @ 0x180005C30 (CrmRegister.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800027A8(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800209B0, 1u, 0LL);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
