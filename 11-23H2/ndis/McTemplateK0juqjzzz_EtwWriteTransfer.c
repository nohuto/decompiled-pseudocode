/*
 * XREFs of McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0063174
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0147F18 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0148F94 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C014A1D4 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0006B88 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0juqjzzz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  const wchar_t *v10; // r10
  const wchar_t *v11; // rdx
  const wchar_t *v13; // r8
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // r11d
  __int64 v18; // rcx
  int v19; // r8d
  bool v20; // zf
  _EVENT_DATA_DESCRIPTOR v22; // [rsp+38h] [rbp-69h] BYREF
  __int64 v23; // [rsp+48h] [rbp-59h]
  __int64 v24; // [rsp+50h] [rbp-51h]
  char *v25; // [rsp+58h] [rbp-49h]
  __int64 v26; // [rsp+60h] [rbp-41h]
  char *v27; // [rsp+68h] [rbp-39h]
  __int64 v28; // [rsp+70h] [rbp-31h]
  __int64 v29; // [rsp+78h] [rbp-29h]
  __int64 v30; // [rsp+80h] [rbp-21h]
  const wchar_t *v31; // [rsp+88h] [rbp-19h]
  int v32; // [rsp+90h] [rbp-11h]
  int v33; // [rsp+94h] [rbp-Dh]
  const wchar_t *v34; // [rsp+98h] [rbp-9h]
  int v35; // [rsp+A0h] [rbp-1h]
  int v36; // [rsp+A4h] [rbp+3h]
  const wchar_t *v37; // [rsp+A8h] [rbp+7h]
  int v38; // [rsp+B0h] [rbp+Fh]
  int v39; // [rsp+B4h] [rbp+13h]

  v10 = a10;
  v11 = a9;
  v25 = &a5;
  v13 = a8;
  v27 = &a6;
  v29 = a7;
  v14 = -1LL;
  v23 = a4;
  v15 = 10;
  v24 = 16LL;
  v26 = 1LL;
  v28 = 4LL;
  v30 = 16LL;
  if ( a8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a8[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v32 = v17;
  v33 = 0;
  if ( !a8 )
    v13 = L"NULL";
  v31 = v13;
  if ( a9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a9[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v35 = v19;
  v36 = 0;
  if ( !a9 )
    v11 = L"NULL";
  v34 = v11;
  v20 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v14;
    while ( a10[v14] );
    v15 = 2 * v14 + 2;
    v20 = a10 == 0LL;
  }
  if ( v20 )
    v10 = L"NULL";
  v38 = v15;
  v37 = v10;
  v39 = 0;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &FilterStateChangeEx, a3, 8u, &v22);
}
