/*
 * XREFs of ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002BAE0
 * Callers:
 *     ndisEnumerateInterfaces @ 0x1C013FC28 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0149FE8 (ndisEnumerateInterfaces32.c)
 * Callees:
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002B984 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 */

void __fastcall ndisGetNsiClientInfo(struct _NDIS_NSI_CLIENT_INFO *a1)
{
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), a1);
}
