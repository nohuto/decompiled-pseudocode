/*
 * XREFs of McTemplateK0dszu_EtwWriteTransfer @ 0x140603294
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x140602808 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140602AEC (CarEtwWriteLiveDumpEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402D1760 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dszu_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const char *a5,
        const wchar_t *a6,
        char a7)
{
  const char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // rax
  int v12; // ecx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-21h] BYREF
  int *v15; // [rsp+40h] [rbp-11h]
  __int64 v16; // [rsp+48h] [rbp-9h]
  const char *v17; // [rsp+50h] [rbp-1h]
  int v18; // [rsp+58h] [rbp+7h]
  int v19; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+6Ch] [rbp+1Bh]
  char *v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]
  int v25; // [rsp+B8h] [rbp+67h] BYREF

  v25 = a4;
  v7 = a5;
  v15 = &v25;
  v8 = -1LL;
  v16 = 4LL;
  if ( a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a5[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5;
  }
  v18 = v10;
  v11 = a6;
  if ( !a5 )
    v7 = "NULL";
  v19 = 0;
  v17 = v7;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v12 = 2 * v8 + 2;
  }
  else
  {
    v12 = 10;
  }
  v21 = v12;
  v22 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v24 = 1LL;
  v20 = v11;
  v23 = &a7;
  return McGenEventWrite_EtwWriteTransfer(
           EtwProvider_Context,
           (const EVENT_DESCRIPTOR *)BugCheckEvent,
           (const GUID *)EtwProvider,
           5u,
           &v14);
}
