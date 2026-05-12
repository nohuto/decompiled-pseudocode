/*
 * XREFs of McTemplateK0qjzztqdq_EtwWriteTransfer @ 0x1C00414E4
 * Callers:
 *     StorReset @ 0x1C0044438 (StorReset.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzztqdq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  int v13; // r9d
  __int64 v14; // rdx
  int v15; // r8d
  const wchar_t *v16; // rax
  bool v17; // zf
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-81h] BYREF
  int *v20; // [rsp+40h] [rbp-71h]
  __int64 v21; // [rsp+48h] [rbp-69h]
  __int64 v22; // [rsp+50h] [rbp-61h]
  __int64 v23; // [rsp+58h] [rbp-59h]
  const wchar_t *v24; // [rsp+60h] [rbp-51h]
  int v25; // [rsp+68h] [rbp-49h]
  int v26; // [rsp+6Ch] [rbp-45h]
  const wchar_t *v27; // [rsp+70h] [rbp-41h]
  int v28; // [rsp+78h] [rbp-39h]
  int v29; // [rsp+7Ch] [rbp-35h]
  char *v30; // [rsp+80h] [rbp-31h]
  __int64 v31; // [rsp+88h] [rbp-29h]
  char *v32; // [rsp+90h] [rbp-21h]
  __int64 v33; // [rsp+98h] [rbp-19h]
  char *v34; // [rsp+A0h] [rbp-11h]
  __int64 v35; // [rsp+A8h] [rbp-9h]
  char *v36; // [rsp+B0h] [rbp-1h]
  __int64 v37; // [rsp+B8h] [rbp+7h]
  int v38; // [rsp+F8h] [rbp+47h] BYREF

  v38 = a4;
  v21 = 4LL;
  v20 = &v38;
  v11 = -1LL;
  v22 = a5;
  v12 = a6;
  v23 = 16LL;
  v13 = 10;
  if ( a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a6[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v25 = v15;
  v26 = 0;
  if ( !a6 )
    v12 = L"NULL";
  v24 = v12;
  v16 = a7;
  v17 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v11;
    while ( a7[v11] );
    v13 = 2 * v11 + 2;
    v17 = a7 == 0LL;
  }
  if ( v17 )
    v16 = L"NULL";
  v28 = v13;
  v27 = v16;
  v29 = 0;
  v30 = &a8;
  v31 = 4LL;
  v32 = &a9;
  v33 = 4LL;
  v34 = &a10;
  v36 = &a11;
  v35 = 4LL;
  v37 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v11, &EventDeviceReset, 0LL, 9u, &v19);
}
