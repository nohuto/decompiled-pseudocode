/*
 * XREFs of McTemplateK0zqjuuussssx_EtwWriteTransfer @ 0x1C0050760
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuussssx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14)
{
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  const char *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  const char *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  const char *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  const char *v26; // rax
  __int64 v27; // rcx
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-C9h] BYREF
  const wchar_t *v30; // [rsp+40h] [rbp-B9h]
  int v31; // [rsp+48h] [rbp-B1h]
  int v32; // [rsp+4Ch] [rbp-ADh]
  char *v33; // [rsp+50h] [rbp-A9h]
  __int64 v34; // [rsp+58h] [rbp-A1h]
  __int64 v35; // [rsp+60h] [rbp-99h]
  __int64 v36; // [rsp+68h] [rbp-91h]
  char *v37; // [rsp+70h] [rbp-89h]
  __int64 v38; // [rsp+78h] [rbp-81h]
  char *v39; // [rsp+80h] [rbp-79h]
  __int64 v40; // [rsp+88h] [rbp-71h]
  char *v41; // [rsp+90h] [rbp-69h]
  __int64 v42; // [rsp+98h] [rbp-61h]
  const char *v43; // [rsp+A0h] [rbp-59h]
  int v44; // [rsp+A8h] [rbp-51h]
  int v45; // [rsp+ACh] [rbp-4Dh]
  const char *v46; // [rsp+B0h] [rbp-49h]
  int v47; // [rsp+B8h] [rbp-41h]
  int v48; // [rsp+BCh] [rbp-3Dh]
  const char *v49; // [rsp+C0h] [rbp-39h]
  int v50; // [rsp+C8h] [rbp-31h]
  int v51; // [rsp+CCh] [rbp-2Dh]
  const char *v52; // [rsp+D0h] [rbp-29h]
  int v53; // [rsp+D8h] [rbp-21h]
  int v54; // [rsp+DCh] [rbp-1Dh]
  char *v55; // [rsp+E0h] [rbp-19h]
  __int64 v56; // [rsp+E8h] [rbp-11h]

  v14 = -1LL;
  if ( a4 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v31 = v16;
  v17 = a10;
  v32 = 0;
  v34 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v36 = 16LL;
  v30 = a4;
  v33 = &a5;
  v35 = a6;
  v37 = &a7;
  v39 = &a8;
  v41 = &a9;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  if ( a10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a10[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5;
  }
  v44 = v19;
  v45 = 0;
  if ( !a10 )
    v17 = "NULL";
  v43 = v17;
  v20 = a11;
  if ( a11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a11[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v47 = v22;
  v48 = 0;
  if ( !a11 )
    v20 = "NULL";
  v46 = v20;
  v23 = a12;
  if ( a12 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a12[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v50 = v25;
  v26 = a13;
  if ( !a12 )
    v23 = "NULL";
  v51 = 0;
  v49 = v23;
  if ( a13 )
  {
    do
      ++v14;
    while ( a13[v14] );
    v27 = (unsigned int)(v14 + 1);
  }
  else
  {
    v27 = 5LL;
  }
  v53 = v27;
  v54 = 0;
  if ( !a13 )
    v26 = "NULL";
  v56 = 8LL;
  v52 = v26;
  v55 = &a14;
  return McGenEventWrite_EtwWriteTransfer(v27, &EventSMRUnsupportedZoneSizeError, 0LL, 0xCu, &v29);
}
