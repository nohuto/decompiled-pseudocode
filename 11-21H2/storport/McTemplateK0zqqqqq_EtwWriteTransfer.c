/*
 * XREFs of McTemplateK0zqqqqq_EtwWriteTransfer @ 0x1C005850C
 * Callers:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00586F4 (RaAttemptHighWaterMarkIncrease.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqqqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-51h] BYREF
  const wchar_t *v13; // [rsp+40h] [rbp-41h]
  int v14; // [rsp+48h] [rbp-39h]
  int v15; // [rsp+4Ch] [rbp-35h]
  char *v16; // [rsp+50h] [rbp-31h]
  __int64 v17; // [rsp+58h] [rbp-29h]
  char *v18; // [rsp+60h] [rbp-21h]
  __int64 v19; // [rsp+68h] [rbp-19h]
  char *v20; // [rsp+70h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  char *v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]
  char *v24; // [rsp+90h] [rbp+Fh]
  __int64 v25; // [rsp+98h] [rbp+17h]

  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = (unsigned int)(2 * v9 + 2);
  }
  else
  {
    v10 = 10LL;
  }
  v15 = 0;
  v14 = v10;
  if ( !a4 )
    a4 = L"NULL";
  v17 = 4LL;
  v13 = a4;
  v16 = &a5;
  v19 = 4LL;
  v18 = &a6;
  v21 = 4LL;
  v20 = &a7;
  v23 = 4LL;
  v22 = &a8;
  v24 = &a9;
  v25 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v10, &EventIncreaseAdapterResourceList, 0LL, 7u, &v12);
}
