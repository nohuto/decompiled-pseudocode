/*
 * XREFs of ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C023F4AC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004CD04 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C023F0CC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0017404 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2F10 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C00A5444 (-Citp100NSToMS@@YAI_K@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C023EB80 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$01@@U2@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$07@@45554@Z @ 0x1C023EC70 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperB_ea_1C023EC70.c)
 *     ?CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C023EFBC (-CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 *     ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C023F3C4 (-CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z.c)
 *     ?CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C023FB3C (-CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 */

void __fastcall CitpDPDataLog(struct _CIT_IMPACT_CONTEXT *a1)
{
  char *v1; // rbx
  int v3; // edi
  double v4; // xmm6_8
  unsigned int v5; // r9d
  const struct _CIT_DP_MEMOIZATION_CONTEXT *v6; // r14
  __int128 v7; // xmm1
  int v8; // edx
  __int64 v9; // r15
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char *v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r12d
  unsigned int v25; // ebx
  _DWORD *i; // rsi
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  unsigned int v29; // r8d
  __int64 v30; // r9
  unsigned int v31; // xmm1_4
  char *v32; // rax
  unsigned __int8 *v33; // rdx
  unsigned int v34; // xmm1_4
  __int64 v35; // r8
  unsigned int v36; // eax
  float v37; // xmm1_4
  __int64 v38; // r8
  __int64 v39; // r9
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  char *v47; // rbx
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v53; // rax
  char *v54; // [rsp+30h] [rbp-E8h]
  unsigned int *v55; // [rsp+38h] [rbp-E0h]
  unsigned int *v56; // [rsp+40h] [rbp-D8h]
  float *v57; // [rsp+48h] [rbp-D0h]
  unsigned int *v58; // [rsp+58h] [rbp-C0h]
  unsigned int *v59; // [rsp+60h] [rbp-B8h]
  char v60; // [rsp+98h] [rbp-80h] BYREF
  char v61; // [rsp+99h] [rbp-7Fh] BYREF
  _BYTE v62[6]; // [rsp+9Ah] [rbp-7Eh] BYREF
  unsigned int v63; // [rsp+A0h] [rbp-78h] BYREF
  float v64; // [rsp+A4h] [rbp-74h] BYREF
  unsigned int v65; // [rsp+A8h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+ACh] [rbp-6Ch] BYREF
  __int64 v67; // [rsp+B0h] [rbp-68h] BYREF
  unsigned int v68; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v69; // [rsp+BCh] [rbp-5Ch] BYREF
  float v70; // [rsp+C0h] [rbp-58h] BYREF
  float v71; // [rsp+C4h] [rbp-54h] BYREF
  __int64 v72; // [rsp+C8h] [rbp-50h]
  __int64 v73; // [rsp+D0h] [rbp-48h] BYREF
  _BYTE v74[80]; // [rsp+D8h] [rbp-40h] BYREF
  __int128 v75; // [rsp+128h] [rbp+10h] BYREF
  __int128 v76; // [rsp+138h] [rbp+20h]
  __int128 v77; // [rsp+148h] [rbp+30h] BYREF
  __int128 v78; // [rsp+158h] [rbp+40h]
  __int128 v79; // [rsp+168h] [rbp+50h]
  __int128 v80; // [rsp+178h] [rbp+60h]
  __int128 v81; // [rsp+188h] [rbp+70h]
  __int128 v82; // [rsp+198h] [rbp+80h]

  v1 = (char *)a1 + 592;
  v3 = 0x546000u / BYTE3(qword_1C029A224);
  v4 = 8.0 / (double)BYTE2(qword_1C029A224);
  memset(v74, 0, sizeof(v74));
  CitpDPCalcInit((struct _CIT_DP_CALC_CONTEXT *)v74, v4, (double)(((unsigned int)qword_1C029A224 >> 2) & 0xF) * 0.025);
  v6 = (const struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88);
  if ( *((double *)v1 + 11) != v4 || *((_DWORD *)v1 + 24) != v3 )
    CitDPMemoizationInitialize(
      (struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88),
      (const struct _CIT_DP_CALC_CONTEXT *)v74,
      v3,
      v5);
  CitpStatIncrement((unsigned __int16 *)v1 + 2, 1);
  v7 = *((_OWORD *)v1 + 1);
  v9 = (unsigned int)(v8 + 127);
  v75 = *(_OWORD *)v1;
  v10 = *((_OWORD *)v1 + 2);
  v76 = v7;
  v11 = *((_OWORD *)v1 + 3);
  v77 = v10;
  v12 = *((_OWORD *)v1 + 4);
  v78 = v11;
  v13 = *((_OWORD *)v1 + 5);
  v79 = v12;
  v14 = *((_OWORD *)v1 + 6);
  v80 = v13;
  v15 = *(_OWORD *)&v1[v9];
  v81 = v14;
  v16 = (char *)&v75 + v9;
  *((_OWORD *)v16 - 1) = *((_OWORD *)v1 + 7);
  v17 = *(_OWORD *)&v1[v9 + 16];
  *(_OWORD *)v16 = v15;
  v18 = *(_OWORD *)&v1[v9 + 32];
  *((_OWORD *)v16 + 1) = v17;
  v19 = *(_OWORD *)&v1[v9 + 48];
  *((_OWORD *)v16 + 2) = v18;
  v20 = *(_OWORD *)&v1[v9 + 64];
  *((_OWORD *)v16 + 3) = v19;
  v21 = *(_OWORD *)&v1[v9 + 80];
  v22 = *(_QWORD *)&v1[v9 + 96];
  *((_OWORD *)v16 + 4) = v20;
  *((_OWORD *)v16 + 5) = v21;
  *((_QWORD *)v16 + 12) = v22;
  v23 = MEMORY[0xFFFFF78000000014];
  v24 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 206);
  *((_DWORD *)a1 + 206) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_QWORD *)v1 + 4) = v23;
  *(_OWORD *)(v1 + 40) = 0LL;
  v72 = v23;
  *(_OWORD *)(v1 + 56) = 0LL;
  *((_QWORD *)v1 + 9) = 0LL;
  *((_DWORD *)v1 + 20) = 0;
  if ( CitpDPDataSave(a1) >= 0 )
  {
    v25 = 0;
    for ( i = (_DWORD *)&v77 + 2; ; ++i )
    {
      v27 = *i / 0x3E8u;
      v28 = CitpDPProcessDuration(v6, (const struct _CIT_DP_CALC_CONTEXT *)v74, v25, v27);
      if ( (qword_1C029A224 & 1) != 0 )
      {
        if ( (unsigned int)dword_1C028D6F0 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000800LL) )
          {
            v67 = 0x2000000LL;
            v66 = v28;
            v60 = v25;
            LODWORD(v64) = v24 / 0x3E8;
            *(float *)&v62[2] = (float)v3;
            *(float *)&v31 = v4;
            v61 = 4;
            v59 = (unsigned int *)&v64;
            v58 = &v63;
            v57 = (float *)&v62[2];
            v56 = &v65;
            v55 = &v66;
            v54 = &v60;
            v32 = &v61;
            v63 = HIDWORD(xmmword_1C029A214) / 0x3E8;
            v33 = (unsigned __int8 *)&unk_1C0265DC3;
            v65 = v31;
            goto LABEL_13;
          }
          goto LABEL_14;
        }
      }
      else if ( (unsigned int)dword_1C028D6F0 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000800LL) )
        {
          v67 = 0x2000000LL;
          *(_DWORD *)&v62[2] = v28;
          v61 = v25;
          v66 = v24 / 0x3E8;
          v64 = (float)v3;
          *(float *)&v34 = v4;
          v60 = 4;
          v59 = &v66;
          v58 = &v65;
          v57 = &v64;
          v56 = &v63;
          v55 = (unsigned int *)&v62[2];
          v54 = &v61;
          v32 = &v60;
          v65 = HIDWORD(xmmword_1C029A214) / 0x3E8;
          v33 = (unsigned __int8 *)&unk_1C0265D3B;
          v63 = v34;
LABEL_13:
          v35 = v29 >> 2;
          LOWORD(v35) = v35 & 0xF;
          *(_WORD *)v62 = v35;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            274877907LL,
            v33,
            v35,
            v30,
            (__int64)v32,
            (__int64)v54,
            (__int64)v55,
            (__int64)v56,
            (__int64)v57,
            (__int64)v62,
            (__int64)v58,
            (__int64)v59,
            (__int64)&v67);
        }
LABEL_14:
        if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000800LL) )
        {
          v36 = Citp100NSToMS(v72 - v77);
          v65 = v27;
          v73 = 0x2000000LL;
          *(_DWORD *)v62 = DWORD1(v75);
          LOWORD(v63) = WORD4(v75);
          v66 = v36 / 0x3E8;
          v70 = (float)v3;
          v37 = v4;
          LODWORD(v67) = v28;
          v68 = v24 / 0x3E8;
          v71 = v37;
          LOWORD(v64) = ((unsigned int)qword_1C029A224 >> 2) & 0xF;
          v69 = HIDWORD(xmmword_1C029A214) / 0x3E8;
          v61 = v25;
          v60 = 4;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>>(
            v36,
            byte_1C0265846,
            v38,
            v39,
            (__int64)&v60,
            (__int64)&v61,
            (__int64)&v67,
            (__int64)&v71,
            (__int64)&v70,
            (__int64)&v64,
            (__int64)&v69,
            (__int64)&v68,
            (__int64)&v73,
            (__int64)&v65,
            (__int64)&v63,
            (__int64)&v62[2],
            (__int64)v62,
            (__int64)&v66);
        }
      }
      if ( ++v25 >= 0xB )
        return;
    }
  }
  v40 = v76;
  *(_OWORD *)v1 = v75;
  v41 = v77;
  *((_OWORD *)v1 + 1) = v40;
  v42 = v78;
  *((_OWORD *)v1 + 2) = v41;
  v43 = v79;
  *((_OWORD *)v1 + 3) = v42;
  v44 = v80;
  *((_OWORD *)v1 + 4) = v43;
  v45 = v81;
  *((_OWORD *)v1 + 5) = v44;
  v46 = v82;
  *((_OWORD *)v1 + 6) = v45;
  v47 = &v1[v9];
  *((_OWORD *)v47 - 1) = v46;
  v48 = *(__int128 *)((char *)&v75 + v9 + 16);
  *(_OWORD *)v47 = *(__int128 *)((char *)&v75 + v9);
  v49 = *(__int128 *)((char *)&v75 + v9 + 32);
  *((_OWORD *)v47 + 1) = v48;
  v50 = *(__int128 *)((char *)&v75 + v9 + 48);
  *((_OWORD *)v47 + 2) = v49;
  v51 = *(__int128 *)((char *)&v75 + v9 + 64);
  *((_OWORD *)v47 + 3) = v50;
  v52 = *(__int128 *)((char *)&v75 + v9 + 80);
  v53 = *(_QWORD *)((char *)&v75 + v9 + 96);
  *((_OWORD *)v47 + 4) = v51;
  *((_OWORD *)v47 + 5) = v52;
  *((_QWORD *)v47 + 12) = v53;
}
