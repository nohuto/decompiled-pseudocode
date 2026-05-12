/*
 * XREFs of McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer @ 0x1C006B108
 * Callers:
 *     StorpTelemetrySendUnitQos @ 0x1C001CB64 (StorpTelemetrySendUnitQos.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer(
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
  int v26; // r10d
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+48h] [rbp-B8h]
  int v36; // [rsp+4Ch] [rbp-B4h]
  char *v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  char *v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  char *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  char *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  const char *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  const char *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  const char *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  char *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  char *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  char *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  char *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  char *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  char *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  char *v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]
  char *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]

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
  v36 = 0;
  v38 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v40 = 16LL;
  v34 = a4;
  v37 = &a5;
  v39 = a6;
  v41 = &a7;
  v43 = &a8;
  v45 = &a9;
  v47 = a10;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 16LL;
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
  v50 = v28;
  v51 = 0;
  if ( !a11 )
    v24 = "NULL";
  v49 = v24;
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
  v53 = v30;
  v54 = 0;
  if ( !a12 )
    v23 = "NULL";
  v52 = v23;
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
  v56 = v31;
  v58 = &a14;
  v57 = 0;
  v60 = &a15;
  v59 = 8LL;
  v62 = &a16;
  if ( !a13 )
    v21 = "NULL";
  v55 = v21;
  v64 = &a17;
  v61 = 8LL;
  v66 = &a18;
  v63 = 1LL;
  v68 = &a19;
  v70 = &a20;
  v72 = &a21;
  v65 = 8LL;
  v67 = 8LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v31, &EventUnitQosData, 0LL, 0x13u, &v33);
}
