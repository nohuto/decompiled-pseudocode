/*
 * XREFs of ndisIfUpdateSingleField @ 0x1C0037B6C
 * Callers:
 *     ndisIfUpdateExternalInterface @ 0x1C0037840 (ndisIfUpdateExternalInterface.c)
 * Callees:
 *     memcmp @ 0x1C0038280 (memcmp.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C0111B04 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

int __fastcall ndisIfUpdateSingleField(__int64 a1, const void *a2, char *a3, size_t a4)
{
  int v4; // esi
  char *v5; // rbx
  int result; // eax
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  char *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+34h] [rbp-14h]

  v4 = (int)a3;
  v5 = &a3[a1 + 576];
  if ( !a1 )
    v5 = a3;
  result = memcmp(v5, a2, a4);
  if ( result )
  {
    memmove(v5, a2, a4);
    v10[1] = 0;
    v11 = v5;
    v10[0] = 1;
    v12 = a4;
    v13 = v4;
    return ndisNsiNotifyClientInterfaceChange(a1, 0LL, v10);
  }
  return result;
}
