/*
 * XREFs of McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer @ 0x1C0055DC8
 * Callers:
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer(
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
        const wchar_t *a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26)
{
  const wchar_t *v26; // rdx
  const wchar_t *v27; // rbx
  const char *v28; // r9
  __int64 v29; // rcx
  const char *v30; // r10
  const char *v31; // r8
  int v32; // edi
  __int64 v33; // rax
  int v34; // r11d
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  bool v41; // zf
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+38h] [rbp-D0h] BYREF
  int *v44; // [rsp+48h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-B8h]
  char *v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  char *v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h]
  char *v50; // [rsp+78h] [rbp-90h]
  __int64 v51; // [rsp+80h] [rbp-88h]
  __int64 v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+90h] [rbp-78h]
  __int64 v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h]
  const wchar_t *v56; // [rsp+A8h] [rbp-60h]
  int v57; // [rsp+B0h] [rbp-58h]
  int v58; // [rsp+B4h] [rbp-54h]
  const char *v59; // [rsp+B8h] [rbp-50h]
  int v60; // [rsp+C0h] [rbp-48h]
  int v61; // [rsp+C4h] [rbp-44h]
  const char *v62; // [rsp+C8h] [rbp-40h]
  int v63; // [rsp+D0h] [rbp-38h]
  int v64; // [rsp+D4h] [rbp-34h]
  const char *v65; // [rsp+D8h] [rbp-30h]
  int v66; // [rsp+E0h] [rbp-28h]
  int v67; // [rsp+E4h] [rbp-24h]
  const wchar_t *v68; // [rsp+E8h] [rbp-20h]
  int v69; // [rsp+F0h] [rbp-18h]
  int v70; // [rsp+F4h] [rbp-14h]
  char *v71; // [rsp+F8h] [rbp-10h]
  __int64 v72; // [rsp+100h] [rbp-8h]
  char *v73; // [rsp+108h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+8h]
  char *v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  char *v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+130h] [rbp+28h]
  char *v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  char *v81; // [rsp+148h] [rbp+40h]
  __int64 v82; // [rsp+150h] [rbp+48h]
  char *v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  char *v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+68h]
  char *v87; // [rsp+178h] [rbp+70h]
  __int64 v88; // [rsp+180h] [rbp+78h]
  char *v89; // [rsp+188h] [rbp+80h]
  __int64 v90; // [rsp+190h] [rbp+88h]
  char *v91; // [rsp+198h] [rbp+90h]
  __int64 v92; // [rsp+1A0h] [rbp+98h]
  char *v93; // [rsp+1A8h] [rbp+A0h]
  __int64 v94; // [rsp+1B0h] [rbp+A8h]
  int v95; // [rsp+210h] [rbp+108h] BYREF

  v95 = a4;
  v26 = a10;
  v27 = a14;
  v28 = a13;
  v29 = -1LL;
  v30 = a12;
  v31 = a11;
  v44 = &v95;
  v45 = 4LL;
  v46 = &a5;
  v48 = &a6;
  v50 = &a7;
  v32 = 10;
  v52 = a8;
  v54 = a9;
  v47 = 1LL;
  v49 = 1LL;
  v51 = 1LL;
  v53 = 16LL;
  v55 = 16LL;
  if ( a10 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a10[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v34 = 10;
  }
  v57 = v34;
  v58 = 0;
  if ( !a10 )
    v26 = L"NULL";
  v56 = v26;
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v60 = v36;
  v61 = 0;
  if ( !a11 )
    v31 = "NULL";
  v59 = v31;
  if ( a12 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a12[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v63 = v38;
  v64 = 0;
  if ( !a12 )
    v30 = "NULL";
  v62 = v30;
  if ( a13 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a13[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v40 = 5;
  }
  v66 = v40;
  v67 = 0;
  if ( !a13 )
    v28 = "NULL";
  v65 = v28;
  v41 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v29;
    while ( a14[v29] );
    v32 = 2 * v29 + 2;
    v41 = a14 == 0LL;
  }
  v69 = v32;
  v71 = &a15;
  v70 = 0;
  v73 = &a16;
  if ( v41 )
    v27 = L"NULL";
  v68 = v27;
  v75 = &a17;
  v72 = 2LL;
  v77 = &a18;
  v74 = 4LL;
  v79 = &a19;
  v81 = &a20;
  v83 = &a21;
  v85 = &a22;
  v87 = &a23;
  v89 = &a24;
  v91 = &a25;
  v93 = &a26;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 1LL;
  v88 = 1LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 2LL;
  return McGenEventWrite_EtwWriteTransfer(v29, &TcgConfigurationInvalid, 0LL, 0x18u, &v43);
}
