/*
 * XREFs of McTemplateK0qjzzzq_EtwWriteTransfer @ 0x1C0032AFC
 * Callers:
 *     StorLogRegisterMFNDInterface @ 0x1C003E5EC (StorLogRegisterMFNDInterface.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
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
  const wchar_t *v9; // r8
  const wchar_t *v10; // r11
  const wchar_t *v11; // rdx
  int v12; // r10d
  __int64 v13; // rax
  int v14; // r9d
  int v15; // r8d
  bool v16; // zf
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+38h] [rbp-51h] BYREF
  int *v19; // [rsp+48h] [rbp-41h]
  __int64 v20; // [rsp+50h] [rbp-39h]
  __int64 v21; // [rsp+58h] [rbp-31h]
  __int64 v22; // [rsp+60h] [rbp-29h]
  const wchar_t *v23; // [rsp+68h] [rbp-21h]
  int v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+74h] [rbp-15h]
  const wchar_t *v26; // [rsp+78h] [rbp-11h]
  int v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+84h] [rbp-5h]
  const wchar_t *v29; // [rsp+88h] [rbp-1h]
  int v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+94h] [rbp+Bh]
  char *v32; // [rsp+98h] [rbp+Fh]
  __int64 v33; // [rsp+A0h] [rbp+17h]
  int v34; // [rsp+E0h] [rbp+57h] BYREF

  v34 = a4;
  v9 = a6;
  v10 = a8;
  v11 = a7;
  v19 = &v34;
  v21 = a5;
  v12 = 10;
  v13 = -1LL;
  v20 = 4LL;
  v22 = 16LL;
  if ( a6 )
  {
    a1 = -1LL;
    do
      ++a1;
    while ( a6[a1] );
    v14 = 2 * a1 + 2;
  }
  else
  {
    v14 = 10;
  }
  v24 = v14;
  v25 = 0;
  if ( !a6 )
    v9 = L"NULL";
  v23 = v9;
  if ( a7 )
  {
    a1 = -1LL;
    do
      ++a1;
    while ( a7[a1] );
    v15 = 2 * a1 + 2;
  }
  else
  {
    v15 = 10;
  }
  v27 = v15;
  v28 = 0;
  if ( !a7 )
    v11 = L"NULL";
  v26 = v11;
  v16 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v13;
    while ( a8[v13] );
    v12 = 2 * v13 + 2;
    v16 = a8 == 0LL;
  }
  if ( v16 )
    v10 = L"NULL";
  v30 = v12;
  v29 = v10;
  v32 = &a9;
  v31 = 0;
  v33 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &EventRegisterMFNDInterface, 0LL, 7u, &v18);
}
