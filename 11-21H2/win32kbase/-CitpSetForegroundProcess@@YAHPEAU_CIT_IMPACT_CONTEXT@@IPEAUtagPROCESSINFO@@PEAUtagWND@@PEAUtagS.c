/*
 * XREFs of ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004CD04
 * Callers:
 *     CitProcessCallout @ 0x1C0016FF0 (CitProcessCallout.c)
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004CBF8 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00A6204 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     CitSessionConnectChange @ 0x1C00C3A50 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C00D0B04 (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C023F0CC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0016918 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017428 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0017574 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C0017684 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C004BAB4 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U3@U3@U?$_tlgWrapperByVal@$03@@U4@U4@U?$_tlgWrapperByVal@$01@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U4@U5@U5@U5@U5@U2@U5@U2@U5@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@455AEBU?$_tlgWrapperByVal@$03@@66AEBU?$_tlgWrapperByVal@$01@@7777777777777767777474763@Z @ 0x1C004C838 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@$0BA@@@U2@U3@U3@U.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C004D720 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C004D80C (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA-AU1@AEBU1@@Z.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C004D86C (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004D904 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U3@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U5@U5@U5@U2@U5@U2@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@455AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@77747463@Z @ 0x1C004D924 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@$0BA_ea_1C004D924.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C004DB5C (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00A42A4 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C023F4AC (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C023FDB4 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C02402AC (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 */

__int64 __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a5)
{
  struct tagSHELL_INPUT_USAGE_DATA_INFO *v5; // r14
  unsigned int v6; // edi
  unsigned __int64 v7; // r13
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  unsigned int v16; // r9d
  int v17; // ecx
  bool v18; // cf
  unsigned int v19; // eax
  int v20; // edx
  struct _CIT_PROCESS *v21; // rax
  int v22; // edi
  unsigned int v23; // ecx
  int v24; // eax
  struct tagPROCESSINFO *v25; // rdx
  int v26; // r14d
  struct tagPROCESSINFO *v27; // rdx
  __int128 v28; // xmm0
  __int64 v29; // r8
  __int64 v30; // r9
  __int16 v31; // cx
  __int16 v32; // ax
  __int16 v33; // cx
  __int16 v34; // ax
  __int64 v35; // rcx
  __int16 v36; // ax
  struct _CIT_INTERACTION_SUMMARY *v37; // rax
  struct _CIT_INTERACTION_SUMMARY *v38; // r11
  unsigned int v39; // ecx
  int v40; // r9d
  int v41; // r8d
  int v42; // edx
  unsigned int v43; // ecx
  int v44; // edx
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // edx
  unsigned int v48; // eax
  int v49; // ecx
  int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // eax
  __int64 v53; // r11
  _OWORD *v54; // r11
  __int64 v55; // rbx
  int v56; // eax
  __int128 v57; // xmm0
  int v58; // ecx
  __int64 v59; // r8
  int v60; // r9d
  __int64 v62; // rax
  unsigned int v63; // edx
  struct _CIT_PROG_DATA *v64; // rax
  unsigned int v65; // ecx
  int v66; // r8d
  int v67; // edx
  unsigned int v68; // ecx
  int v69; // edx
  char v70; // [rsp+140h] [rbp-80h] BYREF
  char v71; // [rsp+141h] [rbp-7Fh] BYREF
  char v72; // [rsp+142h] [rbp-7Eh] BYREF
  char v73; // [rsp+143h] [rbp-7Dh] BYREF
  int v74; // [rsp+144h] [rbp-7Ch] BYREF
  __int16 v75; // [rsp+148h] [rbp-78h] BYREF
  __int16 v76; // [rsp+14Ah] [rbp-76h] BYREF
  unsigned int v77; // [rsp+14Ch] [rbp-74h] BYREF
  unsigned int v78; // [rsp+150h] [rbp-70h] BYREF
  int v79; // [rsp+154h] [rbp-6Ch]
  __int16 v80; // [rsp+158h] [rbp-68h] BYREF
  __int16 v81; // [rsp+15Ah] [rbp-66h] BYREF
  __int16 v82; // [rsp+15Ch] [rbp-64h] BYREF
  __int16 v83; // [rsp+15Eh] [rbp-62h] BYREF
  __int16 v84; // [rsp+160h] [rbp-60h] BYREF
  __int16 v85; // [rsp+162h] [rbp-5Eh] BYREF
  __int16 v86; // [rsp+164h] [rbp-5Ch] BYREF
  __int16 v87; // [rsp+166h] [rbp-5Ah] BYREF
  __int16 v88; // [rsp+168h] [rbp-58h] BYREF
  __int16 v89; // [rsp+16Ah] [rbp-56h] BYREF
  __int16 v90; // [rsp+16Ch] [rbp-54h] BYREF
  __int16 v91; // [rsp+16Eh] [rbp-52h] BYREF
  __int16 v92; // [rsp+170h] [rbp-50h] BYREF
  __int16 v93; // [rsp+172h] [rbp-4Eh] BYREF
  __int16 v94; // [rsp+174h] [rbp-4Ch] BYREF
  __int16 v95; // [rsp+176h] [rbp-4Ah] BYREF
  int v96; // [rsp+178h] [rbp-48h] BYREF
  __int64 v97; // [rsp+180h] [rbp-40h] BYREF
  struct _CIT_PROCESS *v98; // [rsp+188h] [rbp-38h]
  __int64 v99; // [rsp+190h] [rbp-30h] BYREF
  int v100; // [rsp+198h] [rbp-28h] BYREF
  int v101; // [rsp+19Ch] [rbp-24h] BYREF
  unsigned int v102; // [rsp+1A0h] [rbp-20h] BYREF
  int v103; // [rsp+1A8h] [rbp-18h] BYREF
  int v104; // [rsp+1ACh] [rbp-14h]
  __int64 v105; // [rsp+1B0h] [rbp-10h] BYREF
  __int128 *v106; // [rsp+1B8h] [rbp-8h] BYREF
  struct tagSHELL_INPUT_USAGE_DATA_INFO *v107; // [rsp+1C0h] [rbp+0h] BYREF
  struct _GUID v108; // [rsp+1C8h] [rbp+8h] BYREF
  struct _GUID v109; // [rsp+1D8h] [rbp+18h] BYREF
  __int64 v110; // [rsp+1E8h] [rbp+28h] BYREF
  __int128 *v111; // [rsp+1F0h] [rbp+30h] BYREF
  __int64 v112; // [rsp+1F8h] [rbp+38h] BYREF
  int v113; // [rsp+200h] [rbp+40h]
  __int128 v114; // [rsp+208h] [rbp+48h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = (unsigned __int64)a3;
  *(_QWORD *)&v109.Data1 = a4;
  v107 = a5;
  v79 = 0;
  if ( *((struct tagPROCESSINFO **)a1 + 15) == a3 )
    return 0LL;
  v10 = (char *)a1 + 204;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 204), a2);
  v11 = *((_QWORD *)v10 + 2);
  v99 = v11;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 228), a2);
  v12 = *(_QWORD *)((char *)a1 + 244);
  v13 = v11 - *((_DWORD *)a1 + 145);
  v97 = v12;
  if ( v13 > *(&xmmword_1C029A204 + 2) )
  {
    v63 = 3;
LABEL_60:
    CitpPostUpdateUseInfoLog(a1, v63);
    *((_DWORD *)a1 + 145) = v11;
    *((_DWORD *)a1 + 144) = a2;
    goto LABEL_4;
  }
  if ( a2 - *((_DWORD *)a1 + 144) > 2 * *(&xmmword_1C029A204 + 2) )
  {
    v63 = 4;
    goto LABEL_60;
  }
LABEL_4:
  if ( a2 - *((_DWORD *)a1 + 206) >= HIDWORD(xmmword_1C029A214) )
    CitpDPDataLog(a1);
  if ( *((_QWORD *)a1 + 15) )
  {
    v14 = *((_DWORD *)a1 + 82);
    v15 = -1;
    v16 = a2 - *((_DWORD *)a1 + 34);
    v78 = v16;
    v17 = v14 + 1;
    v18 = v14 + 1 < v14;
    v19 = *((_DWORD *)a1 + 83);
    if ( !v18 )
      v15 = v17;
    *((_DWORD *)a1 + 82) = v15;
    v20 = -1;
    if ( v19 + v16 >= v19 )
      v20 = v19 + v16;
    *((_DWORD *)a1 + 83) = v20;
    v98 = *(struct _CIT_PROCESS **)(*((_QWORD *)a1 + 15) + 928LL);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v99, &v103, (char *)a1 + 184);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v97, &v99, (char *)a1 + 192);
    v21 = v98;
    v22 = v99;
    *((_DWORD *)a1 + 158) += v99;
    v23 = *((unsigned __int8 *)v21 + 116);
    if ( (v23 & 0x1E) != 0 )
    {
      v62 = (v23 >> 1) & 0xF;
      if ( (unsigned int)v62 < 0xB )
        *((_DWORD *)a1 + v62 + 158) += v22;
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000800LL) )
    {
      v24 = *((_DWORD *)a1 + 45);
      v25 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
      v112 = *(_QWORD *)((char *)a1 + 172);
      v113 = v24;
      CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v112, v25, 0LL);
      v26 = v103;
      if ( HIBYTE(qword_1C029A224) )
      {
        v27 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
        v77 = 0;
        v28 = (__int128)*CitpProcessGetAppSessionId(&v108, v27, &v77);
        ++*((_QWORD *)a1 + 104);
        v114 = v28;
        if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000800LL) )
        {
          v102 = v77;
          v31 = *((_WORD *)a1 + 84);
          v92 = *((_WORD *)a1 + 82);
          v93 = v113;
          v71 = BYTE2(v113);
          v94 = HIWORD(v112);
          v95 = WORD2(v112);
          v80 = WORD1(v112);
          v81 = v112;
          v100 = *(&xmmword_1C029A204 + 1);
          v32 = v31 + *((_WORD *)a1 + 83);
          v82 = v31;
          v33 = *((_WORD *)a1 + 80);
          v83 = v32;
          v84 = *((_WORD *)a1 + 76);
          v85 = *((_WORD *)a1 + 81);
          v34 = v33 + *((_WORD *)a1 + 79);
          v86 = v33;
          v35 = *((unsigned __int16 *)a1 + 78);
          v87 = v34;
          v36 = *((_WORD *)a1 + 77);
          v110 = v29;
          v91 = v35 + v36;
          v89 = *((_WORD *)a1 + 75);
          v90 = *((_WORD *)a1 + 74);
          v75 = *((_WORD *)a1 + 73);
          LOWORD(v74) = *((_WORD *)a1 + 72);
          HIWORD(v74) = *((_WORD *)a1 + 71);
          v76 = *((_WORD *)a1 + 70);
          LOWORD(v77) = v104;
          LODWORD(v97) = v78;
          v111 = &v114;
          v105 = (__int64)&v114;
          v106 = &v114;
          v70 = 1;
          v88 = v35;
          v101 = v22;
          v96 = v26;
          v72 = 1;
          v73 = 0;
          *(_QWORD *)&v108.Data1 = 0x2000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v35,
            (int)&unk_1C0265E4C,
            v29,
            v30,
            (__int64)&v108,
            (__int64)&v73,
            (__int64 *)&v106,
            (__int64)&v72,
            &v105,
            (__int64 *)&v111,
            (__int64)&v97,
            (__int64)&v96,
            (__int64)&v101,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)&v74 + 2,
            (__int64)&v74,
            (__int64)&v75,
            (__int64)&v90,
            (__int64)&v89,
            (__int64)&v91,
            (__int64)&v88,
            (__int64)&v87,
            (__int64)&v86,
            (__int64)&v85,
            (__int64)&v84,
            (__int64)&v83,
            (__int64)&v82,
            (__int64)&v100,
            (__int64)&v81,
            (__int64)&v80,
            (__int64)&v95,
            (__int64)&v94,
            (__int64)&v71,
            (__int64)&v93,
            (__int64)&v70,
            (__int64)&v92,
            (__int64)&v102,
            (__int64)&v110);
        }
      }
      if ( BYTE5(qword_1C029A224) )
      {
        v64 = CitpProcessEnsureProgData(*((struct tagPROCESSINFO **)v98 + 1));
        if ( v64 )
        {
          v65 = *((_DWORD *)v64 + 20);
          v66 = -1;
          v67 = v65 + 1;
          v18 = v65 + 1 < v65;
          v68 = *((_DWORD *)v64 + 21);
          if ( !v18 )
            v66 = v67;
          v69 = -1;
          *((_DWORD *)v64 + 20) = v66;
          if ( v68 + v78 >= v68 )
            v69 = v68 + v78;
          *((_DWORD *)v64 + 21) = v69;
          CitpProgDataNotifyUseUpdate(xmmword_1C029A230, v64);
        }
      }
      if ( (xmmword_1C029A214 & 1) != 0 )
      {
        v37 = CitpInteractionSummaryEnsure(a1, (struct tagPROCESSINFO **)v98, 2);
        v38 = v37;
        if ( v37 )
        {
          v39 = *((_DWORD *)v37 + 33);
          v40 = -1;
          v41 = -1;
          v42 = v39 + 1;
          v18 = v39 + 1 < v39;
          v43 = *((_DWORD *)v37 + 34);
          if ( !v18 )
            v41 = v42;
          v44 = -1;
          *((_DWORD *)v37 + 33) = v41;
          if ( v43 + v78 >= v43 )
            v44 = v43 + v78;
          v45 = -1;
          *((_DWORD *)v38 + 34) = v44;
          v46 = *((_DWORD *)v38 + 35);
          if ( v46 + (v104 & 0x7FFFFFFF) >= v46 )
            v45 = v46 + (v104 & 0x7FFFFFFF);
          v47 = -1;
          *((_DWORD *)v38 + 35) = v45;
          v48 = *((_DWORD *)v38 + 36);
          v49 = v26 + v48;
          v18 = v26 + v48 < v48;
          v50 = -1;
          if ( !v18 )
            v47 = v49;
          *((_DWORD *)v38 + 36) = v47;
          v51 = *((_DWORD *)v38 + 37);
          if ( v51 + (HIDWORD(v99) & 0x7FFFFFFF) >= v51 )
            v50 = v51 + (HIDWORD(v99) & 0x7FFFFFFF);
          *((_DWORD *)v38 + 37) = v50;
          v52 = *((_DWORD *)v38 + 38);
          if ( v52 + v22 >= v52 )
            v40 = v52 + v22;
          *((_DWORD *)v38 + 38) = v40;
          CitpInputTimesAddTo(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v38 + 32),
            (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
          *(_QWORD *)(v53 + 64) = v112;
          *(_DWORD *)(v53 + 72) = v113;
          CitpBitmapUpdateForTimeRange(
            (struct _CIT_BITMAP *)(v53 + 160),
            *((_DWORD *)a1 + 34),
            a2,
            *((_DWORD *)a1 + 218),
            DWORD2(xmmword_1C029A214));
        }
        if ( (xmmword_1C029A214 & 1) != 0 && a2 - *((_DWORD *)a1 + 218) > DWORD1(xmmword_1C029A214) )
          CitpInteractionSummariesFlush(a1, 0);
      }
      v5 = v107;
      *((_DWORD *)v98 + 26) = a2;
    }
    v6 = v79;
  }
  if ( v5 )
  {
    v6 = 1;
    *((_WORD *)v5 + 4) = *((_WORD *)a1 + 71);
    *((_WORD *)v5 + 6) = *((_WORD *)a1 + 72);
    *((_WORD *)v5 + 5) = *((_WORD *)a1 + 73);
    *((_WORD *)v5 + 7) = *((_WORD *)a1 + 74);
    *((_WORD *)v5 + 8) = *((_WORD *)a1 + 75);
    *((_WORD *)v5 + 9) = *((_WORD *)a1 + 76);
    *((_WORD *)v5 + 10) = *((_WORD *)a1 + 77);
    *((_WORD *)v5 + 11) = *((_WORD *)a1 + 78);
    *((_WORD *)v5 + 12) = *((_WORD *)a1 + 79);
    *((_WORD *)v5 + 13) = *((_WORD *)a1 + 80);
    *((_WORD *)v5 + 14) = *((_WORD *)a1 + 81);
    *((_WORD *)v5 + 15) = *((_WORD *)a1 + 83);
    *((_WORD *)v5 + 16) = *((_WORD *)a1 + 84);
    v79 = 1;
  }
  if ( v7 )
  {
    if ( (unsigned int)CitpAllowForegroundProcess(a1) )
    {
      v7 &= -(__int64)(CitpProcessEnsureContext((struct _CIT_PROCESS **)v7) != 0LL);
      v6 = v79;
    }
    else
    {
      v7 = 0LL;
    }
  }
  *((_QWORD *)a1 + 15) = v7;
  *((_DWORD *)a1 + 34) = a2;
  *((_QWORD *)a1 + 23) = v11;
  *((_QWORD *)a1 + 24) = v12;
  CitpInputTimesAddTo(
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 264),
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
  *v54 = 0LL;
  v54[1] = 0LL;
  *(_QWORD *)((char *)a1 + 172) = 0LL;
  *((_DWORD *)a1 + 45) = 0;
  if ( v7 )
  {
    v55 = *(_QWORD *)(v7 + 928);
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000800LL) )
    {
      if ( (xmmword_1C029A214 & 1) != 0
        && *((struct _CIT_IMPACT_CONTEXT **)a1 + 106) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 848) )
      {
        *((_DWORD *)a1 + 218) = a2;
        *((_QWORD *)a1 + 108) = MEMORY[0xFFFFF78000000014];
      }
      v112 = 0LL;
      v113 = 0;
      CitpGetForegroundWindowInfo(
        (struct _CIT_WINDOW_INFO *)&v112,
        (struct tagPROCESSINFO *)v7,
        *(struct tagWND **)&v109.Data1);
      v56 = v113;
      *(_QWORD *)((char *)a1 + 172) = v112;
      *((_DWORD *)a1 + 45) = v56;
      if ( HIBYTE(qword_1C029A224) )
      {
        v78 = 0;
        v57 = (__int128)*CitpProcessGetAppSessionId(&v109, (struct tagPROCESSINFO *)v7, &v78);
        ++*((_QWORD *)a1 + 104);
        v114 = v57;
        if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000800LL) )
        {
          LODWORD(v97) = v78;
          LOWORD(v77) = v113;
          v72 = BYTE2(v113);
          v76 = HIWORD(v112);
          v74 = *(_DWORD *)((char *)&v112 + 2);
          v75 = v112;
          v107 = (struct tagSHELL_INPUT_USAGE_DATA_INFO *)&v114;
          *(_QWORD *)&v108.Data1 = &v114;
          v106 = &v114;
          *(_QWORD *)&v109.Data1 = v59;
          v73 = 1;
          v96 = v60;
          v71 = 1;
          v70 = 1;
          v105 = 0x2000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v58,
            (unsigned int)&unk_1C0266114,
            v59,
            v60,
            (__int64)&v105,
            (__int64)&v70,
            (__int64)&v106,
            (__int64)&v71,
            (__int64)&v108,
            (__int64)&v107,
            (__int64)&v96,
            (__int64)&v75,
            (__int64)&v74,
            (__int64)&v74 + 2,
            (__int64)&v76,
            (__int64)&v72,
            (__int64)&v77,
            (__int64)&v73,
            (__int64)&v97,
            (__int64)&v109);
        }
      }
    }
    *(_DWORD *)(v55 + 104) = a2;
  }
  return v6;
}
