/*
 * XREFs of ?Free@ARI@@YAXPEAX@Z @ 0x180045A84
 * Callers:
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x180045A30 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180045E28 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 * Callees:
 *     <none>
 */

void __fastcall ARI::Free(PVOID P, void *a2)
{
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
