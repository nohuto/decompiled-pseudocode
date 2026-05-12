/*
 * XREFs of McTemplateK0qjzzqq_EtwWriteTransfer @ 0x1C004CAA4
 * Callers:
 *     RaCheckAllMiniportSystemThreadsExit @ 0x1C004DADC (RaCheckAllMiniportSystemThreadsExit.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9)
{
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rdx
  int v13; // r8d
  const wchar_t *v14; // rcx
  bool v15; // zf
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-51h] BYREF
  int *v18; // [rsp+40h] [rbp-41h]
  __int64 v19; // [rsp+48h] [rbp-39h]
  __int64 v20; // [rsp+50h] [rbp-31h]
  __int64 v21; // [rsp+58h] [rbp-29h]
  const wchar_t *v22; // [rsp+60h] [rbp-21h]
  int v23; // [rsp+68h] [rbp-19h]
  int v24; // [rsp+6Ch] [rbp-15h]
  const wchar_t *v25; // [rsp+70h] [rbp-11h]
  int v26; // [rsp+78h] [rbp-9h]
  int v27; // [rsp+7Ch] [rbp-5h]
  char *v28; // [rsp+80h] [rbp-1h]
  __int64 v29; // [rsp+88h] [rbp+7h]
  char *v30; // [rsp+90h] [rbp+Fh]
  __int64 v31; // [rsp+98h] [rbp+17h]
  int v32; // [rsp+D8h] [rbp+57h] BYREF

  v32 = a4;
  v9 = a6;
  v18 = &v32;
  v20 = a5;
  v10 = -1LL;
  v19 = 4LL;
  v21 = 16LL;
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
  v23 = v13;
  v24 = 0;
  if ( !a6 )
    v9 = L"NULL";
  v22 = v9;
  v14 = a7;
  v15 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v10;
    while ( a7[v10] );
    v11 = 2 * v10 + 2;
    v15 = a7 == 0LL;
  }
  if ( v15 )
    v14 = L"NULL";
  v26 = v11;
  v25 = v14;
  v28 = &a8;
  v27 = 0;
  v30 = &a9;
  v29 = 4LL;
  v31 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v14, &EventMiniportSystemThreadsNotTerminated, 0LL, 7u, &v17);
}
