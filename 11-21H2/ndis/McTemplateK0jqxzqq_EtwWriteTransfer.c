/*
 * XREFs of McTemplateK0jqxzqq_EtwWriteTransfer @ 0x1C006C24C
 * Callers:
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C006BEA8 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001FE70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqxzqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8,
        char a9)
{
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-51h] BYREF
  __int64 v14; // [rsp+40h] [rbp-41h]
  __int64 v15; // [rsp+48h] [rbp-39h]
  char *v16; // [rsp+50h] [rbp-31h]
  __int64 v17; // [rsp+58h] [rbp-29h]
  char *v18; // [rsp+60h] [rbp-21h]
  __int64 v19; // [rsp+68h] [rbp-19h]
  const wchar_t *v20; // [rsp+70h] [rbp-11h]
  int v21; // [rsp+78h] [rbp-9h]
  int v22; // [rsp+7Ch] [rbp-5h]
  char *v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h]
  char *v25; // [rsp+90h] [rbp+Fh]
  __int64 v26; // [rsp+98h] [rbp+17h]

  v9 = a7;
  v14 = a4;
  v16 = &a5;
  v18 = &a6;
  v15 = 16LL;
  v17 = 4LL;
  v19 = 8LL;
  if ( a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a7[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v21 = v11;
  v22 = 0;
  if ( !a7 )
    v9 = L"NULL";
  v24 = 4LL;
  v20 = v9;
  v23 = &a8;
  v26 = 4LL;
  v25 = &a9;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &MiniportReset, a3, 7u, &v13);
}
