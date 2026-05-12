/*
 * XREFs of McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer @ 0x1C0041618
 * Callers:
 *     StorpMarkDeviceFailed @ 0x1C0046668 (StorpMarkDeviceFailed.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        __int64 a12,
        __int64 a13,
        const wchar_t *a14,
        const char *a15,
        const char *a16,
        const char *a17,
        const wchar_t *a18,
        const char *a19,
        char a20,
        const wchar_t *a21,
        unsigned __int16 a22,
        __int64 a23,
        unsigned __int16 a24,
        __int64 a25,
        char a26)
{
  const wchar_t *v27; // rdx
  int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // r8d
  const char *v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  const char *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  const char *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  const wchar_t *v41; // rax
  __int64 v42; // rdx
  int v43; // r8d
  const char *v44; // rdx
  __int64 v45; // rax
  int v46; // eax
  const wchar_t *v47; // rax
  bool v48; // zf
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+30h] [rbp-D0h] BYREF
  int *v51; // [rsp+40h] [rbp-C0h]
  __int64 v52; // [rsp+48h] [rbp-B8h]
  char *v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  char *v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h]
  char *v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h]
  char *v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+88h] [rbp-78h]
  char *v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  char *v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  char *v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  const wchar_t *v71; // [rsp+E0h] [rbp-20h]
  int v72; // [rsp+E8h] [rbp-18h]
  int v73; // [rsp+ECh] [rbp-14h]
  const char *v74; // [rsp+F0h] [rbp-10h]
  int v75; // [rsp+F8h] [rbp-8h]
  int v76; // [rsp+FCh] [rbp-4h]
  const char *v77; // [rsp+100h] [rbp+0h]
  int v78; // [rsp+108h] [rbp+8h]
  int v79; // [rsp+10Ch] [rbp+Ch]
  const char *v80; // [rsp+110h] [rbp+10h]
  int v81; // [rsp+118h] [rbp+18h]
  int v82; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v83; // [rsp+120h] [rbp+20h]
  int v84; // [rsp+128h] [rbp+28h]
  int v85; // [rsp+12Ch] [rbp+2Ch]
  const char *v86; // [rsp+130h] [rbp+30h]
  int v87; // [rsp+138h] [rbp+38h]
  int v88; // [rsp+13Ch] [rbp+3Ch]
  char *v89; // [rsp+140h] [rbp+40h]
  __int64 v90; // [rsp+148h] [rbp+48h]
  const wchar_t *v91; // [rsp+150h] [rbp+50h]
  int v92; // [rsp+158h] [rbp+58h]
  int v93; // [rsp+15Ch] [rbp+5Ch]
  unsigned __int16 *v94; // [rsp+160h] [rbp+60h]
  __int64 v95; // [rsp+168h] [rbp+68h]
  __int64 v96; // [rsp+170h] [rbp+70h]
  int v97; // [rsp+178h] [rbp+78h]
  int v98; // [rsp+17Ch] [rbp+7Ch]
  unsigned __int16 *v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+188h] [rbp+88h]
  __int64 v101; // [rsp+190h] [rbp+90h]
  int v102; // [rsp+198h] [rbp+98h]
  int v103; // [rsp+19Ch] [rbp+9Ch]
  char *v104; // [rsp+1A0h] [rbp+A0h]
  __int64 v105; // [rsp+1A8h] [rbp+A8h]
  int v106; // [rsp+1F8h] [rbp+F8h] BYREF

  v106 = a4;
  v52 = 4LL;
  v51 = &v106;
  v54 = 4LL;
  v53 = &a5;
  v27 = a14;
  v55 = &a6;
  v28 = 10;
  v56 = 4LL;
  v57 = &a7;
  v29 = -1LL;
  v58 = 4LL;
  v59 = &a8;
  v61 = &a9;
  v63 = &a10;
  v65 = &a11;
  v67 = a12;
  v69 = a13;
  v60 = 4LL;
  v62 = 1LL;
  v64 = 1LL;
  v66 = 1LL;
  v68 = 16LL;
  v70 = 16LL;
  if ( a14 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a14[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v72 = v31;
  v73 = 0;
  if ( !a14 )
    v27 = L"NULL";
  v71 = v27;
  v32 = a15;
  if ( a15 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a15[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v75 = v34;
  v76 = 0;
  if ( !a15 )
    v32 = "NULL";
  v74 = v32;
  v35 = a16;
  if ( a16 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a16[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v78 = v37;
  v79 = 0;
  if ( !a16 )
    v35 = "NULL";
  v77 = v35;
  v38 = a17;
  if ( a17 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a17[v39] );
    v40 = v39 + 1;
  }
  else
  {
    v40 = 5;
  }
  v81 = v40;
  v41 = a18;
  if ( !a17 )
    v38 = "NULL";
  v82 = 0;
  v80 = v38;
  if ( a18 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a18[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v43 = 10;
  }
  v44 = a19;
  v84 = v43;
  if ( !a18 )
    v41 = L"NULL";
  v85 = 0;
  v83 = v41;
  if ( a19 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( a19[v45] );
    v46 = v45 + 1;
  }
  else
  {
    v46 = 5;
  }
  v87 = v46;
  v88 = 0;
  if ( !a19 )
    v44 = "NULL";
  v89 = &a20;
  v47 = a21;
  v86 = v44;
  v90 = 2LL;
  v48 = a21 == 0LL;
  if ( a21 )
  {
    do
      ++v29;
    while ( a21[v29] );
    v28 = 2 * v29 + 2;
    v48 = a21 == 0LL;
  }
  if ( v48 )
    v47 = L"NULL";
  v92 = v28;
  v91 = v47;
  v93 = 0;
  v94 = &a22;
  v96 = a23;
  v97 = a22;
  v99 = &a24;
  v101 = a25;
  v102 = a24;
  v104 = &a26;
  v95 = 2LL;
  v98 = 0;
  v100 = 2LL;
  v103 = 0;
  v105 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v29, a2, 0LL, 0x18u, &v50);
}
