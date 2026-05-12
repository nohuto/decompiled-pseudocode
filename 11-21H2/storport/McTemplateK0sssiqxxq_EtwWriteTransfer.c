/*
 * XREFs of McTemplateK0sssiqxxq_EtwWriteTransfer @ 0x1C0022F50
 * Callers:
 *     GetZoneCountFromUnit @ 0x1C0022DA4 (GetZoneCountFromUnit.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0sssiqxxq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        const char *a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  const char *v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  const char *v16; // rcx
  int v17; // eax
  int v19; // [rsp+30h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-81h] BYREF
  const char *v21; // [rsp+50h] [rbp-71h]
  int v22; // [rsp+58h] [rbp-69h]
  int v23; // [rsp+5Ch] [rbp-65h]
  const char *v24; // [rsp+60h] [rbp-61h]
  int v25; // [rsp+68h] [rbp-59h]
  int v26; // [rsp+6Ch] [rbp-55h]
  const char *v27; // [rsp+70h] [rbp-51h]
  int v28; // [rsp+78h] [rbp-49h]
  int v29; // [rsp+7Ch] [rbp-45h]
  char *v30; // [rsp+80h] [rbp-41h]
  __int64 v31; // [rsp+88h] [rbp-39h]
  char *v32; // [rsp+90h] [rbp-31h]
  __int64 v33; // [rsp+98h] [rbp-29h]
  char *v34; // [rsp+A0h] [rbp-21h]
  __int64 v35; // [rsp+A8h] [rbp-19h]
  char *v36; // [rsp+B0h] [rbp-11h]
  __int64 v37; // [rsp+B8h] [rbp-9h]
  int *v38; // [rsp+C0h] [rbp-1h]
  __int64 v39; // [rsp+C8h] [rbp+7h]

  v19 = -1;
  v10 = -1LL;
  if ( a4 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a4[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v12 = 5;
  }
  v13 = a5;
  v22 = v12;
  v23 = 0;
  if ( !a4 )
    a4 = "NULL";
  v21 = a4;
  if ( a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a5[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v15 = 5;
  }
  v25 = v15;
  v16 = a6;
  if ( !a5 )
    v13 = "NULL";
  v26 = 0;
  v24 = v13;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v17 = v10 + 1;
  }
  else
  {
    v17 = 5;
  }
  v28 = v17;
  v29 = 0;
  v30 = &a7;
  v31 = 8LL;
  v32 = &a8;
  if ( !a6 )
    v16 = "NULL";
  v27 = v16;
  v34 = &a9;
  v33 = 4LL;
  v36 = &a10;
  v38 = &v19;
  v35 = 8LL;
  v37 = 8LL;
  v39 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v16, &EventSMRUnsupportedZoneCountError, 0LL, 9u, &v20);
}
