/*
 * XREFs of McTemplateK0qjzzzhhhhhqqqqqqqqqqqqquuq_EtwWriteTransfer @ 0x1C00661B0
 * Callers:
 *     StorLogMFNDSetChildPFSettings @ 0x1C0067CFC (StorLogMFNDSetChildPFSettings.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzhhhhhqqqqqqqqqqqqquuq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
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
        char a26,
        char a27,
        char a28,
        char a29)
{
  const wchar_t *v29; // rcx
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rdx
  int v33; // r9d
  const wchar_t *v34; // rcx
  __int64 v35; // rdx
  int v36; // r9d
  const wchar_t *v37; // rcx
  bool v38; // zf
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+30h] [rbp-D0h] BYREF
  int *v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h]
  const wchar_t *v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v51; // [rsp+80h] [rbp-80h]
  int v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+8Ch] [rbp-74h]
  char *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  char *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  char *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  char *v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  char *v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  char *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  char *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  char *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  char *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  char *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  char *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  char *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  char *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  char *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  char *v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  char *v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]
  char *v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  char *v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  char *v90; // [rsp+1B0h] [rbp+B0h]
  __int64 v91; // [rsp+1B8h] [rbp+B8h]
  char *v92; // [rsp+1C0h] [rbp+C0h]
  __int64 v93; // [rsp+1C8h] [rbp+C8h]
  char *v94; // [rsp+1D0h] [rbp+D0h]
  __int64 v95; // [rsp+1D8h] [rbp+D8h]
  int v96; // [rsp+218h] [rbp+118h] BYREF

  v96 = a4;
  v29 = a6;
  v41 = &v96;
  v43 = a5;
  v30 = -1LL;
  v42 = 4LL;
  v44 = 16LL;
  v31 = 10;
  if ( a6 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a6[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v33 = 10;
  }
  v46 = v33;
  v47 = 0;
  if ( !a6 )
    v29 = L"NULL";
  v45 = v29;
  v34 = a7;
  if ( a7 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a7[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v36 = 10;
  }
  v49 = v36;
  v50 = 0;
  if ( !a7 )
    v34 = L"NULL";
  v48 = v34;
  v37 = a8;
  v38 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v30;
    while ( a8[v30] );
    v31 = 2 * v30 + 2;
    v38 = a8 == 0LL;
  }
  v52 = v31;
  v54 = &a9;
  v53 = 0;
  v56 = &a10;
  if ( v38 )
    v37 = L"NULL";
  v51 = v37;
  v58 = &a11;
  v55 = 2LL;
  v60 = &a12;
  v57 = 2LL;
  v62 = &a13;
  v64 = &a14;
  v66 = &a15;
  v68 = &a16;
  v70 = &a17;
  v72 = &a18;
  v74 = &a19;
  v76 = &a20;
  v78 = &a21;
  v80 = &a22;
  v82 = &a23;
  v84 = &a24;
  v86 = &a25;
  v88 = &a26;
  v90 = &a27;
  v92 = &a28;
  v94 = &a29;
  v59 = 2LL;
  v61 = 2LL;
  v63 = 2LL;
  v65 = 4LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 1LL;
  v93 = 1LL;
  v95 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v37, &EventMFNDSetChildPFSettings, 0LL, 0x1Bu, &v40);
}
