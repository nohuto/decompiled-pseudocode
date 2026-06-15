/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18003C470
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18003C440 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // r15
  __int64 v4; // rcx
  const WCHAR *v5; // rdx
  const CHAR *v6; // r9
  const WCHAR *v7; // r10
  const CHAR *v8; // r11
  const CHAR *v9; // rbx
  const WCHAR *v10; // rdi
  const CHAR *v11; // r14
  const CHAR *v12; // rsi
  __int64 v13; // rax
  bool v14; // zf
  int v15; // r8d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rax
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 *v37; // [rsp+78h] [rbp-90h] BYREF
  int v38; // [rsp+80h] [rbp-88h]
  int v39; // [rsp+84h] [rbp-84h]
  void *v40; // [rsp+88h] [rbp-80h]
  int v41; // [rsp+90h] [rbp-78h]
  int v42; // [rsp+94h] [rbp-74h]
  __int64 *v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  char *v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  const CHAR *v47; // [rsp+B8h] [rbp-50h]
  int v48; // [rsp+C0h] [rbp-48h]
  int v49; // [rsp+C4h] [rbp-44h]
  __int64 *v50; // [rsp+C8h] [rbp-40h]
  __int64 v51; // [rsp+D0h] [rbp-38h]
  const CHAR *v52; // [rsp+D8h] [rbp-30h]
  int v53; // [rsp+E0h] [rbp-28h]
  int v54; // [rsp+E4h] [rbp-24h]
  char *v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  const WCHAR *v57; // [rsp+F8h] [rbp-10h]
  int v58; // [rsp+100h] [rbp-8h]
  int v59; // [rsp+104h] [rbp-4h]
  __int64 *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  const CHAR *v62; // [rsp+118h] [rbp+10h]
  int v63; // [rsp+120h] [rbp+18h]
  int v64; // [rsp+124h] [rbp+1Ch]
  int *v65; // [rsp+128h] [rbp+20h]
  __int64 v66; // [rsp+130h] [rbp+28h]
  const CHAR *v67; // [rsp+138h] [rbp+30h]
  int v68; // [rsp+140h] [rbp+38h]
  int v69; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v70; // [rsp+148h] [rbp+40h]
  int v71; // [rsp+150h] [rbp+48h]
  int v72; // [rsp+154h] [rbp+4Ch]
  int *v73; // [rsp+158h] [rbp+50h]
  __int64 v74; // [rsp+160h] [rbp+58h]
  const CHAR *v75; // [rsp+168h] [rbp+60h]
  int v76; // [rsp+170h] [rbp+68h]
  int v77; // [rsp+174h] [rbp+6Ch]
  const WCHAR *v78; // [rsp+178h] [rbp+70h]
  int v79; // [rsp+180h] [rbp+78h]
  int v80; // [rsp+184h] [rbp+7Ch]

  v2 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)v2 > 2u
    && (*(_QWORD *)(v2 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200000000000LL) == *(_QWORD *)(v2 + 24) )
  {
    v4 = -1LL;
    v5 = (const WCHAR *)*((_QWORD *)a2 + 15);
    v6 = (const CHAR *)*((_QWORD *)a2 + 14);
    v7 = (const WCHAR *)*((_QWORD *)a2 + 12);
    v8 = (const CHAR *)*((_QWORD *)a2 + 11);
    v9 = (const CHAR *)*((_QWORD *)a2 + 9);
    v10 = (const WCHAR *)*((_QWORD *)a2 + 3);
    v11 = (const CHAR *)*((_QWORD *)a2 + 16);
    v12 = (const CHAR *)*((_QWORD *)a2 + 7);
    v30 = *((_DWORD *)a2 + 26);
    v31 = *((_DWORD *)a2 + 20);
    LODWORD(v32) = *((_DWORD *)a2 + 8);
    HIDWORD(v32) = *(_DWORD *)a2;
    LODWORD(v33) = *((_DWORD *)a2 + 16);
    HIDWORD(v33) = *((_DWORD *)a2 + 2);
    v35 = 0x1000000LL;
    if ( v5 )
    {
      v13 = -1LL;
      do
        v14 = v5[++v13] == 0;
      while ( !v14 );
      v15 = 2 * v13 + 2;
    }
    else
    {
      v5 = &String2;
      v15 = 2;
    }
    v79 = v15;
    v78 = v5;
    v80 = 0;
    if ( v6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v6[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v6 = MultiByteStr;
      v17 = 1;
    }
    v76 = v17;
    v73 = &v30;
    v75 = v6;
    v77 = 0;
    v74 = 4LL;
    if ( v7 )
    {
      v18 = -1LL;
      do
        v14 = v7[++v18] == 0;
      while ( !v14 );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v7 = &String2;
      v19 = 2;
    }
    v70 = v7;
    v71 = v19;
    v72 = 0;
    if ( v8 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v8[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v8 = MultiByteStr;
      v21 = 1;
    }
    v68 = v21;
    v65 = &v31;
    v67 = v8;
    v69 = 0;
    v66 = 4LL;
    if ( v9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( v9[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v9 = MultiByteStr;
      v23 = 1;
    }
    v63 = v23;
    v62 = v9;
    v60 = &v32;
    v64 = 0;
    v61 = 4LL;
    if ( v10 )
    {
      v24 = -1LL;
      do
        v14 = v10[++v24] == 0;
      while ( !v14 );
      v25 = 2 * v24 + 2;
    }
    else
    {
      v10 = &String2;
      v25 = 2;
    }
    v57 = v10;
    v55 = (char *)&v32 + 4;
    v58 = v25;
    v59 = 0;
    v56 = 4LL;
    if ( v11 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( v11[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v11 = MultiByteStr;
      v27 = 1;
    }
    v53 = v27;
    v52 = v11;
    v50 = &v33;
    v54 = 0;
    v51 = 4LL;
    if ( v12 )
    {
      do
        ++v4;
      while ( v12[v4] );
      v28 = v4 + 1;
    }
    else
    {
      v12 = MultiByteStr;
      v28 = 1;
    }
    v48 = v28;
    v45 = (char *)&v33 + 4;
    v47 = v12;
    v43 = &v35;
    v37 = *(unsigned __int16 **)(v2 + 8);
    v49 = 0;
    v46 = 4LL;
    v44 = 8LL;
    v36[0] = 0x20B000000LL;
    v36[1] = 0x200000000000LL;
    v38 = *v37;
    v40 = &unk_18018EEDB;
    v39 = 2;
    v29 = *(_QWORD *)(v2 + 32);
    v41 = 263;
    v42 = 1;
    LODWORD(v34) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(v29, v36, 0LL, 0LL, 17, &v37, v30, v32, v33);
  }
}
