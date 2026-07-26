/*
 * XREFs of McTemplateK0jqxptdq_EtwWriteTransfer @ 0x1C00010C0
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009AF0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00069F8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0jqxptdq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  _BYTE v11[16]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  char *v14; // [rsp+50h] [rbp-49h]
  __int64 v15; // [rsp+58h] [rbp-41h]
  char *v16; // [rsp+60h] [rbp-39h]
  __int64 v17; // [rsp+68h] [rbp-31h]
  char *v18; // [rsp+70h] [rbp-29h]
  __int64 v19; // [rsp+78h] [rbp-21h]
  char *v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  char *v22; // [rsp+90h] [rbp-9h]
  __int64 v23; // [rsp+98h] [rbp-1h]
  char *v24; // [rsp+A0h] [rbp+7h]
  __int64 v25; // [rsp+A8h] [rbp+Fh]

  v12 = a4;
  v14 = &a5;
  v13 = 16LL;
  v15 = 4LL;
  v16 = &a6;
  v17 = 8LL;
  v18 = &a7;
  v20 = &a8;
  v22 = &a9;
  v24 = &a10;
  v19 = 8LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&NDIS_PROVIDER_ID_Context, &DoOidRequest, a3, 8LL, v11);
}
