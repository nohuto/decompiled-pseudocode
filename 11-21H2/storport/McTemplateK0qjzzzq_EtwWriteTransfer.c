/*
 * XREFs of McTemplateK0qjzzzq_EtwWriteTransfer @ 0x1C00324AC
 * Callers:
 *     StorLogRegisterMFNDInterface @ 0x1C003C2B8 (StorLogRegisterMFNDInterface.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9)
{
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // r9d
  const wchar_t *v14; // rcx
  __int64 v15; // rdx
  int v16; // r9d
  const wchar_t *v17; // rcx
  bool v18; // zf
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-51h] BYREF
  int *v21; // [rsp+40h] [rbp-41h]
  __int64 v22; // [rsp+48h] [rbp-39h]
  __int64 v23; // [rsp+50h] [rbp-31h]
  __int64 v24; // [rsp+58h] [rbp-29h]
  const wchar_t *v25; // [rsp+60h] [rbp-21h]
  int v26; // [rsp+68h] [rbp-19h]
  int v27; // [rsp+6Ch] [rbp-15h]
  const wchar_t *v28; // [rsp+70h] [rbp-11h]
  int v29; // [rsp+78h] [rbp-9h]
  int v30; // [rsp+7Ch] [rbp-5h]
  const wchar_t *v31; // [rsp+80h] [rbp-1h]
  int v32; // [rsp+88h] [rbp+7h]
  int v33; // [rsp+8Ch] [rbp+Bh]
  char *v34; // [rsp+90h] [rbp+Fh]
  __int64 v35; // [rsp+98h] [rbp+17h]
  int v36; // [rsp+D8h] [rbp+57h] BYREF

  v36 = a4;
  v9 = a6;
  v21 = &v36;
  v23 = a5;
  v10 = -1LL;
  v22 = 4LL;
  v24 = 16LL;
  v11 = 10;
  if ( a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v26 = v13;
  v27 = 0;
  if ( !a6 )
    v9 = L"NULL";
  v25 = v9;
  v14 = a7;
  if ( a7 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a7[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v29 = v16;
  v30 = 0;
  if ( !a7 )
    v14 = L"NULL";
  v28 = v14;
  v17 = a8;
  v18 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v10;
    while ( a8[v10] );
    v11 = 2 * v10 + 2;
    v18 = a8 == 0LL;
  }
  if ( v18 )
    v17 = L"NULL";
  v32 = v11;
  v31 = v17;
  v34 = &a9;
  v33 = 0;
  v35 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v17, &EventRegisterMFNDInterface, 0LL, 7u, &v20);
}
