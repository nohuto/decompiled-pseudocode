/*
 * XREFs of McTemplateK0sssxiqxqq_EtwWriteTransfer @ 0x1C0023094
 * Callers:
 *     GetZoneIndexFromUnitAndLba @ 0x1C0022E6C (GetZoneIndexFromUnitAndLba.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0sssxiqxqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        const char *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ecx
  const char *v15; // rdx
  __int64 v16; // rcx
  int v17; // ecx
  const char *v18; // rcx
  int v19; // eax
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-99h] BYREF
  const char *v22; // [rsp+40h] [rbp-89h]
  int v23; // [rsp+48h] [rbp-81h]
  int v24; // [rsp+4Ch] [rbp-7Dh]
  const char *v25; // [rsp+50h] [rbp-79h]
  int v26; // [rsp+58h] [rbp-71h]
  int v27; // [rsp+5Ch] [rbp-6Dh]
  const char *v28; // [rsp+60h] [rbp-69h]
  int v29; // [rsp+68h] [rbp-61h]
  int v30; // [rsp+6Ch] [rbp-5Dh]
  char *v31; // [rsp+70h] [rbp-59h]
  __int64 v32; // [rsp+78h] [rbp-51h]
  char *v33; // [rsp+80h] [rbp-49h]
  __int64 v34; // [rsp+88h] [rbp-41h]
  char *v35; // [rsp+90h] [rbp-39h]
  __int64 v36; // [rsp+98h] [rbp-31h]
  char *v37; // [rsp+A0h] [rbp-29h]
  __int64 v38; // [rsp+A8h] [rbp-21h]
  char *v39; // [rsp+B0h] [rbp-19h]
  __int64 v40; // [rsp+B8h] [rbp-11h]
  char *v41; // [rsp+C0h] [rbp-9h]
  __int64 v42; // [rsp+C8h] [rbp-1h]

  v12 = -1LL;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v14 = 5;
  }
  v15 = a5;
  v23 = v14;
  v24 = 0;
  if ( !a4 )
    a4 = "NULL";
  v22 = a4;
  if ( a5 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a5[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5;
  }
  v26 = v17;
  v18 = a6;
  if ( !a5 )
    v15 = "NULL";
  v27 = 0;
  v25 = v15;
  if ( a6 )
  {
    do
      ++v12;
    while ( a6[v12] );
    v19 = v12 + 1;
  }
  else
  {
    v19 = 5;
  }
  v29 = v19;
  v30 = 0;
  v31 = &a7;
  v32 = 8LL;
  v33 = &a8;
  if ( !a6 )
    v18 = "NULL";
  v28 = v18;
  v35 = &a9;
  v34 = 8LL;
  v37 = &a10;
  v39 = &a11;
  v41 = &a12;
  v36 = 4LL;
  v38 = 8LL;
  v40 = 4LL;
  v42 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v18, &EventSMRUnsupportedZoneIndexError, 0LL, 0xAu, &v21);
}
