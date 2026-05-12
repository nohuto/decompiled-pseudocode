/*
 * XREFs of ?PmUpdateIdsMbr@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C002734C
 * Callers:
 *     PmUpdateIds @ 0x1C002745C (PmUpdateIds.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     ?PmUuidCreate@@YAXPEAU_GUID@@@Z @ 0x1C0027400 (-PmUuidCreate@@YAXPEAU_GUID@@@Z.c)
 */

void __fastcall PmUpdateIdsMbr(struct _DRIVE_LAYOUT_INFORMATION_EX *a1)
{
  char *DeviceExtension; // rsi
  ULONG v3; // ebx
  __int128 Buffer; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  struct _GUID v7; // [rsp+48h] [rbp-20h] BYREF

  Buffer = 0LL;
  v5 = 0LL;
  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  v6 = 0LL;
  v7 = GUID_NULL;
  do
  {
    PmUuidCreate(&v7);
    v3 = *(_DWORD *)&v7.Data4[4] ^ *(_DWORD *)v7.Data4 ^ *(_DWORD *)&v7.Data2 ^ v7.Data1;
    DWORD2(v5) = v3;
  }
  while ( RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(DeviceExtension + 192), &Buffer) );
  a1->Mbr.Signature = v3;
}
