/*
 * XREFs of McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer @ 0x1C0066F2C
 * Callers:
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C00677D4 (StorEtwHwTimeoutDetectedEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
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
        int a16,
        __int64 a17,
        char a18,
        char a19)
{
  const char *v19; // r11
  __int64 v20; // rcx
  const char *v21; // rdx
  const char *v23; // r8
  __int64 v24; // rax
  int v25; // r10d
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
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
  char *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  char *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  int *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  __int64 v63; // [rsp+110h] [rbp+10h]
  int v64; // [rsp+118h] [rbp+18h]
  int v65; // [rsp+11Ch] [rbp+1Ch]
  char *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  char *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]

  v19 = a13;
  v20 = -1LL;
  v21 = a12;
  v23 = a11;
  if ( a4 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a4[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v34 = v25;
  v35 = 0;
  v37 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v39 = 16LL;
  v33 = a4;
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
    v26 = -1LL;
    do
      ++v26;
    while ( a11[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v49 = v27;
  v50 = 0;
  if ( !a11 )
    v23 = "NULL";
  v48 = v23;
  if ( a12 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a12[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v52 = v29;
  v53 = 0;
  if ( !a12 )
    v21 = "NULL";
  v51 = v21;
  if ( a13 )
  {
    do
      ++v20;
    while ( a13[v20] );
    v30 = (unsigned int)(v20 + 1);
  }
  else
  {
    v30 = 5LL;
  }
  v55 = v30;
  v57 = &a14;
  v56 = 0;
  v59 = &a15;
  v58 = 4LL;
  v61 = &a16;
  if ( !a13 )
    v19 = "NULL";
  v63 = a17;
  v64 = a16;
  v66 = &a18;
  v68 = &a19;
  v54 = v19;
  v60 = 4LL;
  v62 = 4LL;
  v65 = 0;
  v67 = 4LL;
  v69 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v30, &EventUnitHwTimeout, a3, 0x11u, &v32);
}
