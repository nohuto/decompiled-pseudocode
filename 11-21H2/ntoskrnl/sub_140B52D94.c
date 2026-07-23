/*
 * XREFs of sub_140B52D94 @ 0x140B52D94
 * Callers:
 *     sub_140B2C124 @ 0x140B2C124 (sub_140B2C124.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1403C0D08 @ 0x1403C0D08 (sub_1403C0D08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409A0DC4 @ 0x1409A0DC4 (sub_1409A0DC4.c)
 *     sub_140B53288 @ 0x140B53288 (sub_140B53288.c)
 */

char __fastcall sub_140B52D94(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        char a9,
        char a10)
{
  char v10; // si
  __int64 v11; // rcx
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  char result; // al
  __int128 *v23; // rcx
  char *v24; // rax
  __int64 v25; // rdx
  LPCGUID ActivityId; // [rsp+20h] [rbp-E0h]
  unsigned int RelatedActivityId; // [rsp+28h] [rbp-D8h]
  char UserDataCount; // [rsp+30h] [rbp-D0h]
  char UserData; // [rsp+38h] [rbp-C8h]
  char v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+48h] [rbp-B8h]
  char v32; // [rsp+60h] [rbp-A0h] BYREF
  char v33; // [rsp+61h] [rbp-9Fh] BYREF
  char v34; // [rsp+62h] [rbp-9Eh] BYREF
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+74h] [rbp-8Ch] BYREF
  BOOL v39; // [rsp+78h] [rbp-88h] BYREF
  BOOL v40; // [rsp+7Ch] [rbp-84h] BYREF
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  __int128 v42; // [rsp+90h] [rbp-70h]
  __int128 v43; // [rsp+A0h] [rbp-60h]
  __int128 v44; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+D0h] [rbp-30h] BYREF
  char v47; // [rsp+ECh] [rbp-14h] BYREF
  int *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  unsigned int *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  char *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  BOOL *v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  int *v58; // [rsp+170h] [rbp+70h]
  __int64 v59; // [rsp+178h] [rbp+78h]
  char *v60; // [rsp+180h] [rbp+80h]
  __int64 v61; // [rsp+188h] [rbp+88h]
  int *v62; // [rsp+190h] [rbp+90h]
  __int64 v63; // [rsp+198h] [rbp+98h]
  char *v64; // [rsp+1A0h] [rbp+A0h]
  __int64 v65; // [rsp+1A8h] [rbp+A8h]
  __int64 *v66; // [rsp+1B0h] [rbp+B0h]
  __int64 v67; // [rsp+1B8h] [rbp+B8h]
  BOOL *v68; // [rsp+1C0h] [rbp+C0h]
  __int64 v69; // [rsp+1C8h] [rbp+C8h]
  _OWORD SourceString[9]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v71; // [rsp+260h] [rbp+160h]
  int v72; // [rsp+268h] [rbp+168h]
  int v73; // [rsp+2C0h] [rbp+1C0h] BYREF

  v73 = a3;
  v10 = a10;
  v11 = *(_QWORD *)(a1 + 240);
  v36 = dword_140D04C14;
  v35 = 0;
  v37 = 0;
  v39 = a4 != 0;
  v40 = a10 != 0;
  v32 = a8;
  v33 = a9;
  v44 = 0LL;
  v45 = 0LL;
  if ( !v11
    || (v14 = *(_QWORD *)(v11 + 280)) == 0
    || (v35 = *(_DWORD *)(v14 + 56), v44 = *(_OWORD *)(v14 + 64), v45 = *(_OWORD *)(v14 + 80), !v35) )
  {
    v15 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    SourceString[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
    v16 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
    SourceString[1] = v15;
    v17 = *(_OWORD *)L"\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
    SourceString[2] = v16;
    v18 = *(_OWORD *)L"ControlSet\\Control\\CrashControl\\LastCrashdump";
    SourceString[3] = v17;
    v19 = *(_OWORD *)L"et\\Control\\CrashControl\\LastCrashdump";
    SourceString[4] = v18;
    v20 = *(_OWORD *)L"ol\\CrashControl\\LastCrashdump";
    SourceString[5] = v19;
    SourceString[6] = v20;
    SourceString[7] = *(_OWORD *)L"Control\\LastCrashdump";
    v21 = *(_QWORD *)L"hdump";
    SourceString[8] = *(_OWORD *)L"LastCrashdump";
    v71 = v21;
    v72 = *(_DWORD *)L"p";
    if ( (int)sub_1403C0D08((PCWSTR)SourceString, L"Info", 0x30uLL, 0, &v41) >= 0 )
    {
      *(_QWORD *)&v44 = v42;
      v37 = 1;
      v35 = DWORD2(v41);
    }
  }
  v38 = a2;
  sub_140B53288(a2, v36);
  v31 = v73;
  v30 = a4;
  UserData = v33;
  UserDataCount = v32;
  RelatedActivityId = v36;
  LOBYTE(ActivityId) = v10;
  result = sub_1409A0DC4(
             v35,
             (__int64)&v44,
             a2,
             a6,
             ActivityId,
             RelatedActivityId,
             UserDataCount,
             UserData,
             v30,
             v31,
             a5);
  if ( byte_140C5AE14 )
  {
    result = EtwEventEnabled(RegHandle, &stru_140037D38);
    if ( result )
    {
      v46.Ptr = (ULONGLONG)&v35;
      v23 = &v44;
      *(_QWORD *)&v46.Size = 4LL;
      v24 = &v47;
      v25 = 4LL;
      do
      {
        *(_QWORD *)(v24 - 12) = v23;
        v23 = (__int128 *)((char *)v23 + 8);
        *(_QWORD *)(v24 - 4) = 8LL;
        v24 += 16;
        --v25;
      }
      while ( v25 );
      v48 = (int *)&v38;
      v49 = 4LL;
      v50 = &a6;
      v52 = &v36;
      v54 = &v32;
      v56 = &v39;
      v58 = &v73;
      v34 = a5;
      v60 = &v34;
      v62 = &v37;
      v64 = &v33;
      v66 = &a5;
      v68 = &v40;
      v51 = 8LL;
      v53 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v63 = 4LL;
      v67 = 8LL;
      v69 = 4LL;
      v55 = 1LL;
      v61 = 1LL;
      v65 = 1LL;
      return EtwWriteEx(RegHandle, &stru_140037D38, 0LL, 0, 0LL, 0LL, 0x10u, &v46);
    }
  }
  return result;
}
