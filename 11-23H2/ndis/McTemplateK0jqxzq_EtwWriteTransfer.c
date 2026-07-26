/*
 * XREFs of McTemplateK0jqxzq_EtwWriteTransfer @ 0x1C0020C90
 * Callers:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020FFC (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0006B88 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqxzq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v10; // rax
  int v11; // edx
  _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+40h] [rbp-29h]
  __int64 v15; // [rsp+48h] [rbp-21h]
  char *v16; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  char *v18; // [rsp+60h] [rbp-9h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  const wchar_t *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  char *v23; // [rsp+80h] [rbp+17h]
  __int64 v24; // [rsp+88h] [rbp+1Fh]

  v8 = a7;
  v14 = a4;
  v16 = &a5;
  v15 = 16LL;
  v18 = &a6;
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
    v8 = L"NULL";
  v24 = 4LL;
  v20 = v8;
  v23 = &a8;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 6u, &v13);
}
