/*
 * XREFs of ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x1C012CED4
 * Callers:
 *     ndisFastIoDeviceControl @ 0x1C0006B40 (ndisFastIoDeviceControl.c)
 * Callees:
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002F8B0 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ndisConvertIdentifierForCompartment @ 0x1C00610F8 (ndisConvertIdentifierForCompartment.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C00611C8 (ndisConvertIdentifierForNetworkInterface.c)
 */

__int64 __fastcall ndisConvertIdentifier(
        struct _ETHREAD *a1,
        const struct _NDIS_CONVERT_IDENTIFIER_IN *a2,
        struct _NDIS_CONVERT_IDENTIFIER_OUT *a3)
{
  struct _GUID v3; // xmm1
  int v4; // ebx
  struct _GUID v5; // xmm0
  int v6; // esi
  int v8; // r14d
  int v10; // ecx
  int v11; // ecx
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  int v15; // [rsp+48h] [rbp-38h]
  struct _GUID v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h]

  v3 = (struct _GUID)*((_OWORD *)a2 + 2);
  v4 = *(_DWORD *)a2;
  v5 = (struct _GUID)*((_OWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 1);
  v8 = *((_DWORD *)a2 + 2);
  v10 = *((_DWORD *)a2 + 3);
  v14 = 0LL;
  v15 = 0;
  v16[1] = v3;
  v16[0] = v5;
  v17 = *((_QWORD *)a2 + 6);
  v13 = 0LL;
  LODWORD(v13) = v10;
  if ( v10 && (v11 = v10 - 1) != 0 )
  {
    if ( v11 != 1 )
      return 3221225485LL;
  }
  else
  {
    ndisGetNsiClientInfoForThread(a1, (struct _NDIS_NSI_CLIENT_INFO *)((char *)&v13 + 4));
  }
  if ( !v4 )
    return ndisConvertIdentifierForNetworkInterface(v6, v8, v16, (__int64)&v13, (__int64)a3);
  if ( v4 != 1 )
    return 3221225485LL;
  return ndisConvertIdentifierForCompartment(v6, v8, v16, (__int64)&v13, a3);
}
