/*
 * XREFs of ?Thunk_MarkProxyReadyOnPropertiesRefreshed_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009B840
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180047E78 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IBamoPeer_MPCManagerBamo_AutoBamos_Receive<BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl>::Thunk_MarkProxyReadyOnPropertiesRefreshed_11(
        __int64 a1,
        unsigned int **a2)
{
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
           *(unsigned int *)(a1 + 36),
           **a2);
  v3 = *(_QWORD *)Item;
  *((_BYTE *)Item + 28) = 1;
  v4 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(v3 + 56))(Item);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  return 0LL;
}
