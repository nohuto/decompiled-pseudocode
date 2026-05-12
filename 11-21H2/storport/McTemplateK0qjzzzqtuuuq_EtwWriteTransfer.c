/*
 * XREFs of McTemplateK0qjzzzqtuuuq_EtwWriteTransfer @ 0x1C0066F6C
 * Callers:
 *     StorLogMFNDSetOperationInfo @ 0x1C0067FD0 (StorLogMFNDSetOperationInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
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
  const wchar_t *v14; // rcx
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rdx
  int v18; // r9d
  const wchar_t *v19; // rcx
  __int64 v20; // rdx
  int v21; // r9d
  const wchar_t *v22; // rcx
  bool v23; // zf
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-C9h] BYREF
  int *v26; // [rsp+40h] [rbp-B9h]
  __int64 v27; // [rsp+48h] [rbp-B1h]
  __int64 v28; // [rsp+50h] [rbp-A9h]
  __int64 v29; // [rsp+58h] [rbp-A1h]
  const wchar_t *v30; // [rsp+60h] [rbp-99h]
  int v31; // [rsp+68h] [rbp-91h]
  int v32; // [rsp+6Ch] [rbp-8Dh]
  const wchar_t *v33; // [rsp+70h] [rbp-89h]
  int v34; // [rsp+78h] [rbp-81h]
  int v35; // [rsp+7Ch] [rbp-7Dh]
  const wchar_t *v36; // [rsp+80h] [rbp-79h]
  int v37; // [rsp+88h] [rbp-71h]
  int v38; // [rsp+8Ch] [rbp-6Dh]
  char *v39; // [rsp+90h] [rbp-69h]
  __int64 v40; // [rsp+98h] [rbp-61h]
  char *v41; // [rsp+A0h] [rbp-59h]
  __int64 v42; // [rsp+A8h] [rbp-51h]
  char *v43; // [rsp+B0h] [rbp-49h]
  __int64 v44; // [rsp+B8h] [rbp-41h]
  char *v45; // [rsp+C0h] [rbp-39h]
  __int64 v46; // [rsp+C8h] [rbp-31h]
  char *v47; // [rsp+D0h] [rbp-29h]
  __int64 v48; // [rsp+D8h] [rbp-21h]
  char *v49; // [rsp+E0h] [rbp-19h]
  __int64 v50; // [rsp+E8h] [rbp-11h]
  int v51; // [rsp+128h] [rbp+2Fh] BYREF

  v51 = a4;
  v14 = a6;
  v26 = &v51;
  v28 = a5;
  v15 = -1LL;
  v27 = 4LL;
  v29 = 16LL;
  v16 = 10;
  if ( a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a6[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v31 = v18;
  v32 = 0;
  if ( !a6 )
    v14 = L"NULL";
  v30 = v14;
  v19 = a7;
  if ( a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v34 = v21;
  v35 = 0;
  if ( !a7 )
    v19 = L"NULL";
  v33 = v19;
  v22 = a8;
  v23 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v15;
    while ( a8[v15] );
    v16 = 2 * v15 + 2;
    v23 = a8 == 0LL;
  }
  if ( v23 )
    v22 = L"NULL";
  v37 = v16;
  v36 = v22;
  v39 = &a9;
  v38 = 0;
  v41 = &a10;
  v40 = 4LL;
  v43 = &a11;
  v42 = 4LL;
  v45 = &a12;
  v47 = &a13;
  v49 = &a14;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 1LL;
  v50 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v22, &EventMFNDSetOperationInformation, 0LL, 0xCu, &v25);
}
