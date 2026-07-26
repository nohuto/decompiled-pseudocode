/*
 * XREFs of McTemplateK0qxzzxxxxxx_EtwWriteTransfer @ 0x1C005AF0C
 * Callers:
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005A790 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0006B88 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qxzzxxxxxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  const wchar_t *v13; // rcx
  const wchar_t *v14; // r9
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rdx
  int v19; // r8d
  bool v20; // zf
  _EVENT_DATA_DESCRIPTOR v22; // [rsp+38h] [rbp-B1h] BYREF
  int *v23; // [rsp+48h] [rbp-A1h]
  __int64 v24; // [rsp+50h] [rbp-99h]
  char *v25; // [rsp+58h] [rbp-91h]
  __int64 v26; // [rsp+60h] [rbp-89h]
  const wchar_t *v27; // [rsp+68h] [rbp-81h]
  int v28; // [rsp+70h] [rbp-79h]
  int v29; // [rsp+74h] [rbp-75h]
  const wchar_t *v30; // [rsp+78h] [rbp-71h]
  int v31; // [rsp+80h] [rbp-69h]
  int v32; // [rsp+84h] [rbp-65h]
  char *v33; // [rsp+88h] [rbp-61h]
  __int64 v34; // [rsp+90h] [rbp-59h]
  char *v35; // [rsp+98h] [rbp-51h]
  __int64 v36; // [rsp+A0h] [rbp-49h]
  char *v37; // [rsp+A8h] [rbp-41h]
  __int64 v38; // [rsp+B0h] [rbp-39h]
  char *v39; // [rsp+B8h] [rbp-31h]
  __int64 v40; // [rsp+C0h] [rbp-29h]
  char *v41; // [rsp+C8h] [rbp-21h]
  __int64 v42; // [rsp+D0h] [rbp-19h]
  char *v43; // [rsp+D8h] [rbp-11h]
  __int64 v44; // [rsp+E0h] [rbp-9h]
  int v45; // [rsp+120h] [rbp+37h] BYREF

  v45 = a4;
  v13 = a6;
  v14 = a7;
  v23 = &v45;
  v24 = 4LL;
  v25 = &a5;
  v16 = -1LL;
  v26 = 8LL;
  v17 = 10;
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a6[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v28 = v19;
  v29 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v27 = v13;
  v20 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v16;
    while ( a7[v16] );
    v17 = 2 * v16 + 2;
    v20 = a7 == 0LL;
  }
  if ( v20 )
    v14 = L"NULL";
  v31 = v17;
  v30 = v14;
  v33 = &a8;
  v32 = 0;
  v35 = &a9;
  v34 = 8LL;
  v37 = &a10;
  v36 = 8LL;
  v39 = &a11;
  v38 = 8LL;
  v41 = &a12;
  v43 = &a13;
  v40 = 8LL;
  v42 = 8LL;
  v44 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &MiniportCsTraffic, a3, 0xBu, &v22);
}
