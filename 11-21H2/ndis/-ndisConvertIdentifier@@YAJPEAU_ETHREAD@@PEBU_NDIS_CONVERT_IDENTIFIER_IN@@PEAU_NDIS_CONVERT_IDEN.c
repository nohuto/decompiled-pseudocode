/*
 * XREFs of ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x1C01210EC
 * Callers:
 *     ndisFastIoDeviceControl @ 0x1C0008D10 (ndisFastIoDeviceControl.c)
 * Callees:
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002B984 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ndisConvertIdentifierForCompartment @ 0x1C005BEA8 (ndisConvertIdentifierForCompartment.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C005BF78 (ndisConvertIdentifierForNetworkInterface.c)
 */

__int64 __fastcall ndisConvertIdentifier(
        struct _ETHREAD *a1,
        const struct _NDIS_CONVERT_IDENTIFIER_IN *a2,
        struct _NDIS_CONVERT_IDENTIFIER_OUT *a3)
{
  struct _GUID v3; // xmm0
  int v4; // eax
  struct _GUID v6; // xmm1
  int v7; // ebx
  int v8; // esi
  int v9; // ebp
  int v11; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+34h] [rbp-64h] BYREF
  __int64 v13; // [rsp+44h] [rbp-54h]
  struct _GUID v14[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp-28h]

  v3 = (struct _GUID)*((_OWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 3);
  v6 = (struct _GUID)*((_OWORD *)a2 + 2);
  v13 = 0LL;
  v7 = *(_DWORD *)a2;
  v8 = *((_DWORD *)a2 + 1);
  v9 = *((_DWORD *)a2 + 2);
  v11 = v4;
  v14[0] = v3;
  v15 = *((_QWORD *)a2 + 6);
  v14[1] = v6;
  v12 = 0LL;
  if ( v4 < 0 )
    return 3221225485LL;
  if ( v4 <= 1 )
  {
    ndisGetNsiClientInfoForThread(a1, (struct _NDIS_NSI_CLIENT_INFO *)&v12);
  }
  else if ( v4 != 2 )
  {
    return 3221225485LL;
  }
  if ( !v7 )
    return ndisConvertIdentifierForNetworkInterface(v8, v9, v14, (__int64)&v11, (__int64)a3);
  if ( v7 != 1 )
    return 3221225485LL;
  return ndisConvertIdentifierForCompartment(v8, v9, v14, (__int64)&v11, a3);
}
