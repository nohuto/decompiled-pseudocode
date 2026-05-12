/*
 * XREFs of McTemplateK0qjzzzqqbr6uuq_EtwWriteTransfer @ 0x1C0066BF4
 * Callers:
 *     StorLogMFNDQueryChildPFCommandPermission @ 0x1C0067190 (StorLogMFNDQueryChildPFCommandPermission.c)
 *     StorLogMFNDSetChildPFCommandPermission @ 0x1C0067880 (StorLogMFNDSetChildPFCommandPermission.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzqqbr6uuq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        int a10,
        __int64 a11,
        char a12,
        char a13,
        char a14)
{
  const wchar_t *v14; // rcx
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // r9d
  const wchar_t *v20; // rcx
  __int64 v21; // rdx
  int v22; // r9d
  const wchar_t *v23; // rcx
  bool v24; // zf
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-C9h] BYREF
  int *v27; // [rsp+40h] [rbp-B9h]
  __int64 v28; // [rsp+48h] [rbp-B1h]
  __int64 v29; // [rsp+50h] [rbp-A9h]
  __int64 v30; // [rsp+58h] [rbp-A1h]
  const wchar_t *v31; // [rsp+60h] [rbp-99h]
  int v32; // [rsp+68h] [rbp-91h]
  int v33; // [rsp+6Ch] [rbp-8Dh]
  const wchar_t *v34; // [rsp+70h] [rbp-89h]
  int v35; // [rsp+78h] [rbp-81h]
  int v36; // [rsp+7Ch] [rbp-7Dh]
  const wchar_t *v37; // [rsp+80h] [rbp-79h]
  int v38; // [rsp+88h] [rbp-71h]
  int v39; // [rsp+8Ch] [rbp-6Dh]
  char *v40; // [rsp+90h] [rbp-69h]
  __int64 v41; // [rsp+98h] [rbp-61h]
  int *v42; // [rsp+A0h] [rbp-59h]
  __int64 v43; // [rsp+A8h] [rbp-51h]
  __int64 v44; // [rsp+B0h] [rbp-49h]
  int v45; // [rsp+B8h] [rbp-41h]
  int v46; // [rsp+BCh] [rbp-3Dh]
  char *v47; // [rsp+C0h] [rbp-39h]
  __int64 v48; // [rsp+C8h] [rbp-31h]
  char *v49; // [rsp+D0h] [rbp-29h]
  __int64 v50; // [rsp+D8h] [rbp-21h]
  char *v51; // [rsp+E0h] [rbp-19h]
  __int64 v52; // [rsp+E8h] [rbp-11h]
  int v53; // [rsp+128h] [rbp+2Fh] BYREF

  v53 = a4;
  v14 = a6;
  v27 = &v53;
  v29 = a5;
  v16 = -1LL;
  v28 = 4LL;
  v30 = 16LL;
  v17 = 10;
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a6[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v32 = v19;
  v33 = 0;
  if ( !a6 )
    v14 = L"NULL";
  v31 = v14;
  v20 = a7;
  if ( a7 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a7[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v35 = v22;
  v36 = 0;
  if ( !a7 )
    v20 = L"NULL";
  v34 = v20;
  v23 = a8;
  v24 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v16;
    while ( a8[v16] );
    v17 = 2 * v16 + 2;
    v24 = a8 == 0LL;
  }
  if ( v24 )
    v23 = L"NULL";
  v38 = v17;
  v37 = v23;
  v40 = &a9;
  v39 = 0;
  v42 = &a10;
  v44 = a11;
  v45 = a10;
  v47 = &a12;
  v49 = &a13;
  v51 = &a14;
  v41 = 4LL;
  v43 = 4LL;
  v46 = 0;
  v48 = 1LL;
  v50 = 1LL;
  v52 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v23, a2, 0LL, 0xCu, &v26);
}
