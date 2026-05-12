/*
 * XREFs of McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer @ 0x1C006AEB0
 * Callers:
 *     StorpTelemetryCollectPerfData @ 0x1C0003500 (StorpTelemetryCollectPerfData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer(
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
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21)
{
  const char *v21; // r11
  __int64 v22; // rcx
  const char *v23; // rdx
  const char *v24; // r8
  __int64 v25; // rax
  unsigned int v26; // r10d
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+38h] [rbp-D0h] BYREF
  const wchar_t *v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h]
  char *v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  __int64 v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h]
  char *v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+80h] [rbp-88h]
  char *v42; // [rsp+88h] [rbp-80h]
  __int64 v43; // [rsp+90h] [rbp-78h]
  char *v44; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  const char *v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+C0h] [rbp-48h]
  int v50; // [rsp+C4h] [rbp-44h]
  const char *v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  const char *v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+E0h] [rbp-28h]
  int v56; // [rsp+E4h] [rbp-24h]
  char *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  char *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  char *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  char *v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]
  char *v65; // [rsp+128h] [rbp+20h]
  __int64 v66; // [rsp+130h] [rbp+28h]
  char *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  char *v69; // [rsp+148h] [rbp+40h]
  __int64 v70; // [rsp+150h] [rbp+48h]
  char *v71; // [rsp+158h] [rbp+50h]
  __int64 v72; // [rsp+160h] [rbp+58h]

  v21 = a13;
  v22 = -1LL;
  v23 = a12;
  v24 = a11;
  if ( a4 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a4[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v35 = v26;
  v37 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v39 = 16LL;
  v34 = a4;
  v36 = &a5;
  v38 = a6;
  v40 = &a7;
  v42 = &a8;
  v44 = &a9;
  v46 = a10;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 16LL;
  if ( a11 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a11[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v49 = v28;
  v50 = 0;
  if ( !a11 )
    v24 = "NULL";
  v48 = v24;
  if ( a12 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a12[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v52 = v30;
  v53 = 0;
  if ( !a12 )
    v23 = "NULL";
  v51 = v23;
  if ( a13 )
  {
    do
      ++v22;
    while ( a13[v22] );
    v31 = (unsigned int)(v22 + 1);
  }
  else
  {
    v31 = 5LL;
  }
  v55 = v31;
  v57 = &a14;
  v56 = 0;
  v59 = &a15;
  v58 = 4LL;
  v61 = &a16;
  if ( !a13 )
    v21 = "NULL";
  v54 = v21;
  v63 = &a17;
  v60 = 8LL;
  v65 = &a18;
  v62 = 4LL;
  v67 = &a19;
  v69 = &a20;
  v71 = &a21;
  v64 = 4LL;
  v66 = 1LL;
  v68 = 4LL;
  v70 = 8LL;
  v72 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v31, &EventHighLatencyIo, 0LL, 0x13u, &v33);
}
