/*
 * XREFs of McTemplateK0qjzzzqquuq_EtwWriteTransfer @ 0x1C00335D0
 * Callers:
 *     StorLogMFNDQueryOperationInfo @ 0x1C003E370 (StorLogMFNDQueryOperationInfo.c)
 *     StorLogMFNDQueryNSPageMap @ 0x1C0076AF8 (StorLogMFNDQueryNSPageMap.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzqquuq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  const wchar_t *v13; // r11
  const wchar_t *v14; // rcx
  const wchar_t *v16; // rdx
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // r10d
  __int64 v21; // rdx
  int v22; // r8d
  bool v23; // zf
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-B9h] BYREF
  int *v26; // [rsp+40h] [rbp-A9h]
  __int64 v27; // [rsp+48h] [rbp-A1h]
  __int64 v28; // [rsp+50h] [rbp-99h]
  __int64 v29; // [rsp+58h] [rbp-91h]
  const wchar_t *v30; // [rsp+60h] [rbp-89h]
  int v31; // [rsp+68h] [rbp-81h]
  int v32; // [rsp+6Ch] [rbp-7Dh]
  const wchar_t *v33; // [rsp+70h] [rbp-79h]
  int v34; // [rsp+78h] [rbp-71h]
  int v35; // [rsp+7Ch] [rbp-6Dh]
  const wchar_t *v36; // [rsp+80h] [rbp-69h]
  int v37; // [rsp+88h] [rbp-61h]
  int v38; // [rsp+8Ch] [rbp-5Dh]
  char *v39; // [rsp+90h] [rbp-59h]
  __int64 v40; // [rsp+98h] [rbp-51h]
  char *v41; // [rsp+A0h] [rbp-49h]
  __int64 v42; // [rsp+A8h] [rbp-41h]
  char *v43; // [rsp+B0h] [rbp-39h]
  __int64 v44; // [rsp+B8h] [rbp-31h]
  char *v45; // [rsp+C0h] [rbp-29h]
  __int64 v46; // [rsp+C8h] [rbp-21h]
  char *v47; // [rsp+D0h] [rbp-19h]
  __int64 v48; // [rsp+D8h] [rbp-11h]
  int v49; // [rsp+128h] [rbp+3Fh] BYREF

  v49 = a4;
  v13 = a8;
  v14 = a7;
  v26 = &v49;
  v16 = a6;
  v28 = a5;
  v17 = 10;
  v18 = -1LL;
  v27 = 4LL;
  v29 = 16LL;
  if ( a6 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a6[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v31 = v20;
  v32 = 0;
  if ( !a6 )
    v16 = L"NULL";
  v30 = v16;
  if ( a7 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a7[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v34 = v22;
  v35 = 0;
  if ( !a7 )
    v14 = L"NULL";
  v33 = v14;
  v23 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v18;
    while ( a8[v18] );
    v17 = 2 * v18 + 2;
    v23 = a8 == 0LL;
  }
  if ( v23 )
    v13 = L"NULL";
  v37 = v17;
  v36 = v13;
  v39 = &a9;
  v38 = 0;
  v41 = &a10;
  v40 = 4LL;
  v43 = &a11;
  v42 = 4LL;
  v45 = &a12;
  v47 = &a13;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v14, a2, 0LL, 0xBu, &v25);
}
