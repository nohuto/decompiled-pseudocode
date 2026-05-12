/*
 * XREFs of McTemplateK0qjzzzhqqqqqqqqquuq_EtwWriteTransfer @ 0x1C007579C
 * Callers:
 *     StorLogMFNDSetChildPFQoS @ 0x1C00771D0 (StorLogMFNDSetChildPFQoS.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzhqqqqqqqqquuq_EtwWriteTransfer(
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
        char a21)
{
  const wchar_t *v21; // rdx
  const wchar_t *v22; // r11
  const wchar_t *v23; // rcx
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned int v27; // r10d
  __int64 v28; // rdx
  int v29; // r8d
  bool v30; // zf
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+38h] [rbp-D0h] BYREF
  int *v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  const wchar_t *v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  const wchar_t *v39; // [rsp+78h] [rbp-90h]
  int v40; // [rsp+80h] [rbp-88h]
  int v41; // [rsp+84h] [rbp-84h]
  const wchar_t *v42; // [rsp+88h] [rbp-80h]
  int v43; // [rsp+90h] [rbp-78h]
  int v44; // [rsp+94h] [rbp-74h]
  char *v45; // [rsp+98h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-68h]
  char *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  char *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  char *v51; // [rsp+C8h] [rbp-40h]
  __int64 v52; // [rsp+D0h] [rbp-38h]
  char *v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  char *v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  char *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  char *v59; // [rsp+108h] [rbp+0h]
  __int64 v60; // [rsp+110h] [rbp+8h]
  char *v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]
  char *v63; // [rsp+128h] [rbp+20h]
  __int64 v64; // [rsp+130h] [rbp+28h]
  char *v65; // [rsp+138h] [rbp+30h]
  __int64 v66; // [rsp+140h] [rbp+38h]
  char *v67; // [rsp+148h] [rbp+40h]
  __int64 v68; // [rsp+150h] [rbp+48h]
  char *v69; // [rsp+158h] [rbp+50h]
  __int64 v70; // [rsp+160h] [rbp+58h]
  int v71; // [rsp+1A0h] [rbp+98h] BYREF

  v71 = a4;
  v21 = a6;
  v22 = a8;
  v23 = a7;
  v33 = &v71;
  v35 = a5;
  v24 = 10;
  v25 = -1LL;
  v34 = 4LL;
  v36 = 16LL;
  if ( a6 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a6[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v38 = v27;
  if ( !a6 )
    v21 = L"NULL";
  v37 = v21;
  if ( a7 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a7[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v29 = 10;
  }
  v40 = v29;
  v41 = 0;
  if ( !a7 )
    v23 = L"NULL";
  v39 = v23;
  v30 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v25;
    while ( a8[v25] );
    v24 = 2 * v25 + 2;
    v30 = a8 == 0LL;
  }
  v43 = v24;
  v45 = &a9;
  v44 = 0;
  v47 = &a10;
  if ( v30 )
    v22 = L"NULL";
  v42 = v22;
  v49 = &a11;
  v46 = 2LL;
  v51 = &a12;
  v48 = 4LL;
  v53 = &a13;
  v55 = &a14;
  v57 = &a15;
  v59 = &a16;
  v61 = &a17;
  v63 = &a18;
  v65 = &a19;
  v67 = &a20;
  v69 = &a21;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 4LL;
  v64 = 4LL;
  v66 = 1LL;
  v68 = 1LL;
  v70 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v23, &EventMFNDSetChildPFQoS, 0LL, 0x13u, &v32);
}
