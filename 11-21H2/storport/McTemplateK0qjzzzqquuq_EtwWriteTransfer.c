/*
 * XREFs of McTemplateK0qjzzzqquuq_EtwWriteTransfer @ 0x1C0032984
 * Callers:
 *     StorLogMFNDQueryOperationInfo @ 0x1C003C044 (StorLogMFNDQueryOperationInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzqquuq_EtwWriteTransfer(
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
        char a13)
{
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r9d
  const wchar_t *v18; // rcx
  __int64 v19; // rdx
  int v20; // r9d
  const wchar_t *v21; // rcx
  bool v22; // zf
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-B1h] BYREF
  int *v25; // [rsp+40h] [rbp-A1h]
  __int64 v26; // [rsp+48h] [rbp-99h]
  __int64 v27; // [rsp+50h] [rbp-91h]
  __int64 v28; // [rsp+58h] [rbp-89h]
  const wchar_t *v29; // [rsp+60h] [rbp-81h]
  int v30; // [rsp+68h] [rbp-79h]
  int v31; // [rsp+6Ch] [rbp-75h]
  const wchar_t *v32; // [rsp+70h] [rbp-71h]
  int v33; // [rsp+78h] [rbp-69h]
  int v34; // [rsp+7Ch] [rbp-65h]
  const wchar_t *v35; // [rsp+80h] [rbp-61h]
  int v36; // [rsp+88h] [rbp-59h]
  int v37; // [rsp+8Ch] [rbp-55h]
  char *v38; // [rsp+90h] [rbp-51h]
  __int64 v39; // [rsp+98h] [rbp-49h]
  char *v40; // [rsp+A0h] [rbp-41h]
  __int64 v41; // [rsp+A8h] [rbp-39h]
  char *v42; // [rsp+B0h] [rbp-31h]
  __int64 v43; // [rsp+B8h] [rbp-29h]
  char *v44; // [rsp+C0h] [rbp-21h]
  __int64 v45; // [rsp+C8h] [rbp-19h]
  char *v46; // [rsp+D0h] [rbp-11h]
  __int64 v47; // [rsp+D8h] [rbp-9h]
  int v48; // [rsp+118h] [rbp+37h] BYREF

  v48 = a4;
  v13 = a6;
  v25 = &v48;
  v27 = a5;
  v14 = -1LL;
  v26 = 4LL;
  v28 = 16LL;
  v15 = 10;
  if ( a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a6[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v30 = v17;
  v31 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v29 = v13;
  v18 = a7;
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v33 = v20;
  v34 = 0;
  if ( !a7 )
    v18 = L"NULL";
  v32 = v18;
  v21 = a8;
  v22 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v14;
    while ( a8[v14] );
    v15 = 2 * v14 + 2;
    v22 = a8 == 0LL;
  }
  if ( v22 )
    v21 = L"NULL";
  v36 = v15;
  v35 = v21;
  v38 = &a9;
  v37 = 0;
  v40 = &a10;
  v39 = 4LL;
  v42 = &a11;
  v41 = 4LL;
  v44 = &a12;
  v46 = &a13;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v21, &EventMFNDQueryOperationInfo, 0LL, 0xBu, &v24);
}
