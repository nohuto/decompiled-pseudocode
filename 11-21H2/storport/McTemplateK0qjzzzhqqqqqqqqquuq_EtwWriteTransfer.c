/*
 * XREFs of McTemplateK0qjzzzhqqqqqqqqquuq_EtwWriteTransfer @ 0x1C00669B0
 * Callers:
 *     StorLogMFNDSetChildPFQoS @ 0x1C0067B24 (StorLogMFNDSetChildPFQoS.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
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
  const wchar_t *v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // rdx
  int v25; // r9d
  const wchar_t *v26; // rcx
  __int64 v27; // rdx
  int v28; // r9d
  const wchar_t *v29; // rcx
  bool v30; // zf
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  int *v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  const wchar_t *v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+8Ch] [rbp-74h]
  char *v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  char *v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  char *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  char *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  char *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  char *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  char *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  char *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  char *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  char *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  char *v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  char *v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  int v72; // [rsp+198h] [rbp+98h] BYREF

  v72 = a4;
  v21 = a6;
  v33 = &v72;
  v35 = a5;
  v22 = -1LL;
  v34 = 4LL;
  v36 = 16LL;
  v23 = 10;
  if ( a6 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a6[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v38 = v25;
  v39 = 0;
  if ( !a6 )
    v21 = L"NULL";
  v37 = v21;
  v26 = a7;
  if ( a7 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a7[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v41 = v28;
  v42 = 0;
  if ( !a7 )
    v26 = L"NULL";
  v40 = v26;
  v29 = a8;
  v30 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v22;
    while ( a8[v22] );
    v23 = 2 * v22 + 2;
    v30 = a8 == 0LL;
  }
  v44 = v23;
  v46 = &a9;
  v45 = 0;
  v48 = &a10;
  if ( v30 )
    v29 = L"NULL";
  v43 = v29;
  v50 = &a11;
  v47 = 2LL;
  v52 = &a12;
  v49 = 4LL;
  v54 = &a13;
  v56 = &a14;
  v58 = &a15;
  v60 = &a16;
  v62 = &a17;
  v64 = &a18;
  v66 = &a19;
  v68 = &a20;
  v70 = &a21;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 4LL;
  v67 = 1LL;
  v69 = 1LL;
  v71 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v29, &EventMFNDSetChildPFQoS, 0LL, 0x13u, &v32);
}
