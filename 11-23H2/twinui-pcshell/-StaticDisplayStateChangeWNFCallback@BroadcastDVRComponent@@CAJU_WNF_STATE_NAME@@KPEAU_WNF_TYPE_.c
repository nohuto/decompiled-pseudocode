/*
 * XREFs of ?StaticDisplayStateChangeWNFCallback@BroadcastDVRComponent@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801BF340
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayStateChangeWNFCallback@BroadcastDVRComponent@@AEAAXPEBU_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION@@@Z @ 0x1803D6CFC (-DisplayStateChangeWNFCallback@BroadcastDVRComponent@@AEAAXPEBU_NETWORK_DISPLAY_STATE_CHANGE_NOT.c)
 */

__int64 __fastcall BroadcastDVRComponent::StaticDisplayStateChangeWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        BroadcastDVRComponent *a4,
        struct _NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION *a5,
        unsigned int a6)
{
  if ( a6 >= 0x214 )
    BroadcastDVRComponent::DisplayStateChangeWNFCallback(a4, a5);
  return 0LL;
}
