/*
 * XREFs of McTemplateK0zqjuuujsssztt_EtwWriteTransfer @ 0x1C001E704
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C0087538 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujsssztt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const wchar_t *a14,
        char a15,
        char a16)
{
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rax
  int v19; // edx
  const char *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  const char *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  const char *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  const wchar_t *v29; // rax
  bool v30; // zf
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v33; // [rsp+40h] [rbp-C0h]
  int v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+4Ch] [rbp-B4h]
  char *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  char *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  char *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  char *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  const char *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  const char *v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+CCh] [rbp-34h]
  const char *v54; // [rsp+D0h] [rbp-30h]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  const wchar_t *v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  char *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  char *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]

  v16 = -1LL;
  v17 = 10;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a4[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v34 = v19;
  v20 = a11;
  v36 = &a5;
  v38 = a6;
  v40 = &a7;
  if ( !a4 )
    a4 = L"NULL";
  v33 = a4;
  v42 = &a8;
  v44 = &a9;
  v46 = a10;
  v35 = 0;
  v37 = 4LL;
  v39 = 16LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 16LL;
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
  v49 = v22;
  v50 = 0;
  if ( !a11 )
    v20 = "NULL";
  v48 = v20;
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
  v52 = v25;
  v53 = 0;
  if ( !a12 )
    v23 = "NULL";
  v51 = v23;
  v26 = a13;
  if ( a13 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a13[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v55 = v28;
  v29 = a14;
  if ( !a13 )
    v26 = "NULL";
  v56 = 0;
  v54 = v26;
  v30 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v16;
    while ( a14[v16] );
    v17 = 2 * v16 + 2;
    v30 = a14 == 0LL;
  }
  if ( v30 )
    v29 = L"NULL";
  v58 = v17;
  v57 = v29;
  v59 = 0;
  v60 = &a15;
  v61 = 4LL;
  v62 = &a16;
  v63 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v16, &EventUnitSurpriseRemoved, 0LL, 0xEu, &v32);
}
