/*
 * XREFs of McTemplateK0qjzzzhhuuuuuq_EtwWriteTransfer @ 0x1C00667E0
 * Callers:
 *     StorLogMFNDQueryChildPFProperty @ 0x1C0067428 (StorLogMFNDQueryChildPFProperty.c)
 *     StorLogMFNDSetChildPFProperty @ 0x1C00679C0 (StorLogMFNDSetChildPFProperty.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzhhuuuuuq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  const wchar_t *v16; // rcx
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // r9d
  const wchar_t *v22; // rcx
  __int64 v23; // rdx
  int v24; // r9d
  const wchar_t *v25; // rcx
  bool v26; // zf
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-D0h] BYREF
  int *v29; // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  const wchar_t *v33; // [rsp+60h] [rbp-A0h]
  int v34; // [rsp+68h] [rbp-98h]
  int v35; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+8Ch] [rbp-74h]
  char *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  char *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  char *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  char *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  char *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  char *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  char *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  char *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  int v58; // [rsp+148h] [rbp+48h] BYREF

  v58 = a4;
  v16 = a6;
  v29 = &v58;
  v31 = a5;
  v18 = -1LL;
  v30 = 4LL;
  v32 = 16LL;
  v19 = 10;
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a6[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v34 = v21;
  v35 = 0;
  if ( !a6 )
    v16 = L"NULL";
  v33 = v16;
  v22 = a7;
  if ( a7 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a7[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v37 = v24;
  v38 = 0;
  if ( !a7 )
    v22 = L"NULL";
  v36 = v22;
  v25 = a8;
  v26 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v18;
    while ( a8[v18] );
    v19 = 2 * v18 + 2;
    v26 = a8 == 0LL;
  }
  if ( v26 )
    v25 = L"NULL";
  v40 = v19;
  v39 = v25;
  v42 = &a9;
  v41 = 0;
  v44 = &a10;
  v43 = 2LL;
  v46 = &a11;
  v45 = 2LL;
  v48 = &a12;
  v50 = &a13;
  v52 = &a14;
  v54 = &a15;
  v56 = &a16;
  v47 = 1LL;
  v49 = 1LL;
  v51 = 1LL;
  v53 = 1LL;
  v55 = 1LL;
  v57 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v25, a2, 0LL, 0xEu, &v28);
}
