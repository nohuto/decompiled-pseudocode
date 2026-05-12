/*
 * XREFs of McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer @ 0x1C005D3E8
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C001EC20 (StorpInitializeUnitTelemetry.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x1C00873B0 (StorpInitializePerUnitPerfTelemetry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        const wchar_t *a15,
        __int64 a16,
        char a17)
{
  const wchar_t *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r8d
  const char *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  const char *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  const char *v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  const wchar_t *v30; // rax
  int v31; // edx
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+58h] [rbp-B0h] BYREF
  int *v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  char *v39; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-88h]
  char *v41; // [rsp+88h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-78h]
  char *v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  __int64 v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  __int64 v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  const wchar_t *v49; // [rsp+C8h] [rbp-40h]
  int v50; // [rsp+D0h] [rbp-38h]
  int v51; // [rsp+D4h] [rbp-34h]
  const char *v52; // [rsp+D8h] [rbp-30h]
  int v53; // [rsp+E0h] [rbp-28h]
  int v54; // [rsp+E4h] [rbp-24h]
  const char *v55; // [rsp+E8h] [rbp-20h]
  int v56; // [rsp+F0h] [rbp-18h]
  int v57; // [rsp+F4h] [rbp-14h]
  const char *v58; // [rsp+F8h] [rbp-10h]
  int v59; // [rsp+100h] [rbp-8h]
  int v60; // [rsp+104h] [rbp-4h]
  char *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  const wchar_t *v63; // [rsp+118h] [rbp+10h]
  int v64; // [rsp+120h] [rbp+18h]
  int v65; // [rsp+124h] [rbp+1Ch]
  const wchar_t *v66; // [rsp+128h] [rbp+20h]
  __int64 v67; // [rsp+130h] [rbp+28h]
  char *v68; // [rsp+138h] [rbp+30h]
  __int64 v69; // [rsp+140h] [rbp+38h]
  const wchar_t *v70; // [rsp+148h] [rbp+40h]
  __int64 v71; // [rsp+150h] [rbp+48h]
  __int64 *v72; // [rsp+158h] [rbp+50h]
  __int64 v73; // [rsp+160h] [rbp+58h]
  const wchar_t *v74; // [rsp+168h] [rbp+60h]
  __int64 v75; // [rsp+170h] [rbp+68h]
  __int64 *v76; // [rsp+178h] [rbp+70h]
  __int64 v77; // [rsp+180h] [rbp+78h]
  const wchar_t *v78; // [rsp+188h] [rbp+80h]
  __int64 v79; // [rsp+190h] [rbp+88h]
  __int64 *v80; // [rsp+198h] [rbp+90h]
  __int64 v81; // [rsp+1A0h] [rbp+98h]
  int v82; // [rsp+1E0h] [rbp+D8h] BYREF

  v82 = a4;
  v17 = a10;
  v37 = &v82;
  v35 = 0LL;
  v39 = &a5;
  v18 = -1LL;
  v34 = 0LL;
  v41 = &a6;
  v33 = 0LL;
  v43 = &a7;
  v45 = a8;
  v47 = a9;
  v38 = 4LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 16LL;
  v48 = 16LL;
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a10[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v50 = v20;
  v51 = 0;
  if ( !a10 )
    v17 = L"NULL";
  v49 = v17;
  v21 = a11;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a11[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v53 = v23;
  v54 = 0;
  if ( !a11 )
    v21 = "NULL";
  v52 = v21;
  v24 = a12;
  if ( a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a12[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v56 = v26;
  v57 = 0;
  if ( !a12 )
    v24 = "NULL";
  v55 = v24;
  v27 = a13;
  if ( a13 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a13[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v59 = v29;
  v60 = 0;
  if ( !a13 )
    v27 = "NULL";
  v61 = &a14;
  v30 = a15;
  v58 = v27;
  v62 = 4LL;
  if ( a15 )
  {
    do
      ++v18;
    while ( a15[v18] );
    v31 = 2 * v18 + 2;
  }
  else
  {
    v31 = 10;
  }
  v64 = v31;
  v65 = 0;
  if ( !a15 )
    v30 = L"NULL";
  v67 = 18LL;
  v63 = v30;
  v69 = 8LL;
  v66 = L"NtStatus";
  v70 = L"NULL";
  v68 = &a17;
  v72 = &v33;
  v76 = &v34;
  v80 = &v35;
  v71 = 10LL;
  v73 = 8LL;
  v74 = L"NULL";
  v75 = 10LL;
  v77 = 8LL;
  v78 = L"NULL";
  v79 = 10LL;
  v81 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v18, &DeviceWarning, 0LL, 0x15u, &v36);
}
