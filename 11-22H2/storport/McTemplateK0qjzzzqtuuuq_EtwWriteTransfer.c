/*
 * XREFs of McTemplateK0qjzzzqtuuuq_EtwWriteTransfer @ 0x1C0075D70
 * Callers:
 *     StorLogMFNDSetOperationInfo @ 0x1C00777E4 (StorLogMFNDSetOperationInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzqtuuuq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
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
        char a13,
        char a14)
{
  const wchar_t *v14; // rdx
  const wchar_t *v15; // r11
  const wchar_t *v16; // rcx
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r10d
  __int64 v21; // rdx
  int v22; // r8d
  bool v23; // zf
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+38h] [rbp-C9h] BYREF
  int *v26; // [rsp+48h] [rbp-B9h]
  __int64 v27; // [rsp+50h] [rbp-B1h]
  __int64 v28; // [rsp+58h] [rbp-A9h]
  __int64 v29; // [rsp+60h] [rbp-A1h]
  const wchar_t *v30; // [rsp+68h] [rbp-99h]
  __int64 v31; // [rsp+70h] [rbp-91h]
  const wchar_t *v32; // [rsp+78h] [rbp-89h]
  int v33; // [rsp+80h] [rbp-81h]
  int v34; // [rsp+84h] [rbp-7Dh]
  const wchar_t *v35; // [rsp+88h] [rbp-79h]
  int v36; // [rsp+90h] [rbp-71h]
  int v37; // [rsp+94h] [rbp-6Dh]
  char *v38; // [rsp+98h] [rbp-69h]
  __int64 v39; // [rsp+A0h] [rbp-61h]
  char *v40; // [rsp+A8h] [rbp-59h]
  __int64 v41; // [rsp+B0h] [rbp-51h]
  char *v42; // [rsp+B8h] [rbp-49h]
  __int64 v43; // [rsp+C0h] [rbp-41h]
  char *v44; // [rsp+C8h] [rbp-39h]
  __int64 v45; // [rsp+D0h] [rbp-31h]
  char *v46; // [rsp+D8h] [rbp-29h]
  __int64 v47; // [rsp+E0h] [rbp-21h]
  char *v48; // [rsp+E8h] [rbp-19h]
  __int64 v49; // [rsp+F0h] [rbp-11h]
  int v50; // [rsp+130h] [rbp+2Fh] BYREF

  v50 = a4;
  v14 = a6;
  v15 = a8;
  v16 = a7;
  v26 = &v50;
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
  if ( !a6 )
    v14 = L"NULL";
  v30 = v14;
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
  v33 = v22;
  v34 = 0;
  if ( !a7 )
    v16 = L"NULL";
  v32 = v16;
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
    v15 = L"NULL";
  v36 = v17;
  v35 = v15;
  v38 = &a9;
  v37 = 0;
  v40 = &a10;
  v39 = 4LL;
  v42 = &a11;
  v41 = 4LL;
  v44 = &a12;
  v46 = &a13;
  v48 = &a14;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v16, &EventMFNDSetOperationInformation, 0LL, 0xCu, &v25);
}
