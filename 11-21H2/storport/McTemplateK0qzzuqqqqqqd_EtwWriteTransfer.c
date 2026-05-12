/*
 * XREFs of McTemplateK0qzzuqqqqqqd_EtwWriteTransfer @ 0x1C0032C70
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7,
        int a8,
        char a9,
        int a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  __int64 v14; // rcx
  int v16; // r9d
  const wchar_t *v17; // rax
  __int64 v18; // rdx
  int v19; // r8d
  const wchar_t *v20; // rax
  bool v21; // zf
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-C0h] BYREF
  int *v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  const wchar_t *v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  char *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  int *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  char *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  int *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  char *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  char *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  char *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+138h] [rbp+38h] BYREF

  v50 = a4;
  v24 = g_ProcessorCountPerGateway;
  v14 = -1LL;
  v23 = g_MaximumProcessorCount;
  v26 = &v50;
  v16 = 10;
  v17 = a5;
  v27 = 4LL;
  if ( a5 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a5[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v29 = v19;
  v30 = 0;
  if ( !a5 )
    v17 = L"NULL";
  v28 = v17;
  v20 = a6;
  v21 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v14;
    while ( a6[v14] );
    v16 = 2 * v14 + 2;
    v21 = a6 == 0LL;
  }
  if ( v21 )
    v20 = L"NULL";
  v32 = v16;
  v31 = v20;
  v33 = 0;
  v34 = &a7;
  v35 = 1LL;
  v36 = &v23;
  v37 = 4LL;
  v38 = &a9;
  v40 = &v24;
  v42 = &a11;
  v44 = &a12;
  v46 = &a13;
  v48 = &a14;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 4LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v14, a2, 0LL, 0xCu, &v25);
}
