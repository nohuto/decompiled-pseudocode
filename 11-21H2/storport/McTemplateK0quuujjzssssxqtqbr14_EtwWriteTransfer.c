/*
 * XREFs of McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer @ 0x1C00010C0
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C000172C (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer(
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
        const char *a14,
        int a15,
        char a16,
        char a17,
        int a18,
        __int64 a19)
{
  const wchar_t *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r8d
  const char *v23; // rdx
  __int64 v24; // rcx
  int v25; // ecx
  const char *v26; // rdx
  __int64 v27; // rcx
  int v28; // ecx
  const char *v29; // rdx
  __int64 v30; // rcx
  int v31; // ecx
  const char *v32; // rcx
  int v33; // eax
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v37[16]; // [rsp+40h] [rbp-C0h] BYREF
  int *v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  char *v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  char *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  char *v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  const wchar_t *v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  const char *v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  const char *v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  const char *v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  const char *v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FCh] [rbp-4h]
  __int64 *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  char *v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  char *v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  int *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  __int64 v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  int v75; // [rsp+188h] [rbp+88h] BYREF

  v75 = a4;
  v19 = a10;
  v36 = *(_QWORD *)&g_SystemUptime_s;
  v38 = &v75;
  v40 = &a5;
  v35 = 512;
  v42 = &a6;
  v44 = &a7;
  v46 = a8;
  v48 = a9;
  v20 = -1LL;
  v39 = 4LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 16LL;
  v49 = 16LL;
  if ( a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a10[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v51 = v22;
  v52 = 0;
  if ( !a10 )
    v19 = L"NULL";
  v50 = v19;
  v23 = a11;
  if ( a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a11[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v54 = v25;
  v55 = 0;
  if ( !a11 )
    v23 = "NULL";
  v53 = v23;
  v26 = a12;
  if ( a12 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a12[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v57 = v28;
  v58 = 0;
  if ( !a12 )
    v26 = "NULL";
  v56 = v26;
  v29 = a13;
  if ( a13 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a13[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v60 = v31;
  v32 = a14;
  if ( !a13 )
    v29 = "NULL";
  v61 = 0;
  v59 = v29;
  if ( a14 )
  {
    do
      ++v20;
    while ( a14[v20] );
    v33 = v20 + 1;
  }
  else
  {
    v33 = 5;
  }
  v63 = v33;
  v64 = 0;
  v65 = &v36;
  v66 = 8LL;
  v67 = &a16;
  if ( !a14 )
    v32 = "NULL";
  v62 = v32;
  v69 = &a17;
  v68 = 4LL;
  v71 = &v35;
  v73 = a19;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 512LL;
  return McGenEventWrite_EtwWriteTransfer(v32, &EventUnitSmartAttributes, 0LL, 17LL, v37);
}
