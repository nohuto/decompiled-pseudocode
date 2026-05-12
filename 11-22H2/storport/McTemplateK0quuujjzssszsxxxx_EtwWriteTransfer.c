/*
 * XREFs of McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer @ 0x1C0054984
 * Callers:
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibEalLogError @ 0x1C005587C (TcglibEalLogError.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        const char *a15,
        char a16,
        char a17,
        char a18,
        char a19)
{
  const char *v19; // rdi
  const wchar_t *v20; // r9
  const char *v21; // rbx
  const wchar_t *v23; // rdx
  const char *v24; // r11
  const char *v25; // r8
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // r10d
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  bool v36; // zf
  int v37; // eax
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+38h] [rbp-D0h] BYREF
  int *v40; // [rsp+48h] [rbp-C0h]
  __int64 v41; // [rsp+50h] [rbp-B8h]
  char *v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  char *v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  char *v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h]
  __int64 v48; // [rsp+88h] [rbp-80h]
  __int64 v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  const wchar_t *v52; // [rsp+A8h] [rbp-60h]
  int v53; // [rsp+B0h] [rbp-58h]
  int v54; // [rsp+B4h] [rbp-54h]
  const char *v55; // [rsp+B8h] [rbp-50h]
  int v56; // [rsp+C0h] [rbp-48h]
  int v57; // [rsp+C4h] [rbp-44h]
  const char *v58; // [rsp+C8h] [rbp-40h]
  int v59; // [rsp+D0h] [rbp-38h]
  int v60; // [rsp+D4h] [rbp-34h]
  const char *v61; // [rsp+D8h] [rbp-30h]
  int v62; // [rsp+E0h] [rbp-28h]
  int v63; // [rsp+E4h] [rbp-24h]
  const wchar_t *v64; // [rsp+E8h] [rbp-20h]
  int v65; // [rsp+F0h] [rbp-18h]
  int v66; // [rsp+F4h] [rbp-14h]
  const char *v67; // [rsp+F8h] [rbp-10h]
  int v68; // [rsp+100h] [rbp-8h]
  int v69; // [rsp+104h] [rbp-4h]
  char *v70; // [rsp+108h] [rbp+0h]
  __int64 v71; // [rsp+110h] [rbp+8h]
  char *v72; // [rsp+118h] [rbp+10h]
  __int64 v73; // [rsp+120h] [rbp+18h]
  char *v74; // [rsp+128h] [rbp+20h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  char *v76; // [rsp+138h] [rbp+30h]
  __int64 v77; // [rsp+140h] [rbp+38h]
  int v78; // [rsp+1A0h] [rbp+98h] BYREF

  v78 = a4;
  v19 = a15;
  v20 = a14;
  v21 = a13;
  v23 = a10;
  v24 = a12;
  v25 = a11;
  v26 = 10;
  v40 = &v78;
  v42 = &a5;
  v44 = &a6;
  v46 = &a7;
  v48 = a8;
  v50 = a9;
  v27 = -1LL;
  v41 = 4LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 16LL;
  v51 = 16LL;
  if ( a10 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a10[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v29 = 10;
  }
  v53 = v29;
  v54 = 0;
  if ( !a10 )
    v23 = L"NULL";
  v52 = v23;
  if ( a11 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a11[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v56 = v31;
  v57 = 0;
  if ( !a11 )
    v25 = "NULL";
  v55 = v25;
  if ( a12 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a12[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v59 = v33;
  v60 = 0;
  if ( !a12 )
    v24 = "NULL";
  v58 = v24;
  if ( a13 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a13[v34] );
    v35 = (unsigned int)(v34 + 1);
  }
  else
  {
    v35 = 5LL;
  }
  v62 = v35;
  v63 = 0;
  if ( !a13 )
    v21 = "NULL";
  v61 = v21;
  v36 = a14 == 0LL;
  if ( a14 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a14[v35] );
    v26 = 2 * v35 + 2;
    v36 = a14 == 0LL;
  }
  if ( v36 )
    v20 = L"NULL";
  v65 = v26;
  v64 = v20;
  v66 = 0;
  if ( a15 )
  {
    do
      ++v27;
    while ( a15[v27] );
    v37 = v27 + 1;
  }
  else
  {
    v37 = 5;
  }
  v68 = v37;
  v69 = 0;
  v70 = &a16;
  if ( !a15 )
    v19 = "NULL";
  v67 = v19;
  v72 = &a17;
  v71 = 8LL;
  v74 = &a18;
  v73 = 8LL;
  v76 = &a19;
  v75 = 8LL;
  v77 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v35, a2, 0LL, 0x11u, &v39);
}
