/*
 * XREFs of McTemplateK0qzz_EtwWriteTransfer @ 0x1C0074878
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00271A0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00069F8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qzz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rcx
  const wchar_t *v7; // r8
  __int64 v9; // rax
  int v10; // r10d
  __int64 v11; // rdx
  int v12; // r9d
  bool v13; // zf
  _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-50h] BYREF
  int *v16; // [rsp+40h] [rbp-40h]
  __int64 v17; // [rsp+48h] [rbp-38h]
  const wchar_t *v18; // [rsp+50h] [rbp-30h]
  int v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+5Ch] [rbp-24h]
  const wchar_t *v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+A8h] [rbp+28h] BYREF

  v24 = a4;
  v6 = a5;
  v7 = a6;
  v16 = &v24;
  v9 = -1LL;
  v17 = 4LL;
  v10 = 10;
  if ( a5 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a5[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v19 = v12;
  v20 = 0;
  if ( !a5 )
    v6 = L"NULL";
  v18 = v6;
  v13 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v10 = 2 * v9 + 2;
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v7 = L"NULL";
  v22 = v10;
  v21 = v7;
  v23 = 0;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, (const GUID *)&NDIS_PROVIDER_ID, 4u, &v15);
}
