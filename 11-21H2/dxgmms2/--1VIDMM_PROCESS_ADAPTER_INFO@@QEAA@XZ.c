/*
 * XREFs of ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C009DA74
 * Callers:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014B6C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@7@Z @ 0x1C001A624 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U5@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@7777@Z @ 0x1C0030D3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA_ea_1C0030D3C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U5@U_tlgWrapperPtrSize@@U6@U6@U6@U6@U6@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@7AEBU_tlgWrapperPtrSize@@888888@Z @ 0x1C0030E4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA_ea_1C0030E4C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@777@Z @ 0x1C0030FDC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA_ea_1C0030FDC.c)
 *     ?LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1C009DC54 (-LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C009DD54 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::~VIDMM_PROCESS_ADAPTER_INFO(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  unsigned int i; // r14d
  __int64 v5; // r15
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  struct DXGADAPTER *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r15
  char *v11; // r9
  char *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int16 *v15; // r8
  __int64 v16; // r9
  __int128 v17; // xmm0
  __int64 v18; // rcx
  unsigned __int16 *v19; // r8
  __int64 v20; // r9
  __int128 v21; // xmm0
  unsigned __int64 *v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r10d
  int v28; // r11d
  __int128 v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int128 v33; // xmm0
  _QWORD *v34; // r10
  unsigned __int64 v35; // rax
  __int64 v36; // r8
  _DWORD *v37; // r9
  __int128 v38; // xmm0
  __int16 v39; // [rsp+98h] [rbp-80h] BYREF
  __int128 *v40; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int16 *v41; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-68h] BYREF
  int v43; // [rsp+B8h] [rbp-60h] BYREF
  int v44; // [rsp+BCh] [rbp-5Ch] BYREF
  __int64 v45; // [rsp+C0h] [rbp-58h] BYREF
  int v46; // [rsp+C8h] [rbp-50h]
  __int128 *v47; // [rsp+D0h] [rbp-48h] BYREF
  int v48; // [rsp+D8h] [rbp-40h]
  __int64 v49; // [rsp+E0h] [rbp-38h] BYREF
  int v50; // [rsp+E8h] [rbp-30h]
  unsigned __int16 *v51; // [rsp+F0h] [rbp-28h] BYREF
  int v52; // [rsp+F8h] [rbp-20h]
  _BYTE *v53; // [rsp+100h] [rbp-18h] BYREF
  int v54; // [rsp+108h] [rbp-10h]
  __int64 v55; // [rsp+110h] [rbp-8h] BYREF
  int v56; // [rsp+118h] [rbp+0h]
  __int64 v57; // [rsp+120h] [rbp+8h] BYREF
  int v58; // [rsp+128h] [rbp+10h]
  __int64 v59; // [rsp+130h] [rbp+18h] BYREF
  int v60; // [rsp+138h] [rbp+20h]
  _BYTE *v61; // [rsp+140h] [rbp+28h] BYREF
  int v62; // [rsp+148h] [rbp+30h]
  _BYTE *v63; // [rsp+150h] [rbp+38h] BYREF
  int v64; // [rsp+158h] [rbp+40h]
  _DWORD *v65; // [rsp+160h] [rbp+48h] BYREF
  int v66; // [rsp+168h] [rbp+50h]
  _DWORD *v67; // [rsp+170h] [rbp+58h] BYREF
  int v68; // [rsp+178h] [rbp+60h]
  _DWORD *v69; // [rsp+180h] [rbp+68h] BYREF
  int v70; // [rsp+188h] [rbp+70h]
  _DWORD *v71; // [rsp+190h] [rbp+78h] BYREF
  int v72; // [rsp+198h] [rbp+80h]
  _DWORD *v73; // [rsp+1A0h] [rbp+88h] BYREF
  int v74; // [rsp+1A8h] [rbp+90h]
  __int128 v75; // [rsp+1B0h] [rbp+98h] BYREF
  _BYTE v76[176]; // [rsp+1C8h] [rbp+B0h] BYREF
  _BYTE v77[176]; // [rsp+278h] [rbp+160h] BYREF
  _BYTE v78[176]; // [rsp+328h] [rbp+210h] BYREF

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    operator delete(v2);
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 88) )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 7016LL); ++i )
      {
        v5 = 2LL;
        v6 = (_QWORD *)(*((_QWORD *)this + 6) + 296LL * i);
        v7 = v6 + 25;
        do
        {
          if ( *(v7 - 8) || *(v7 - 16) || *v7 )
            WdLogSingleEntry5(0LL, 270LL, 51LL, this, *v7, 0LL);
          ++v7;
          --v5;
        }
        while ( v5 );
        if ( VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v6) )
        {
          v13 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v6);
          WdLogSingleEntry5(0LL, 270LL, 51LL, this, v13, 0LL);
        }
        if ( v6[27] )
          WdLogSingleEntry5(0LL, 270LL, 51LL, this, v6[27], 0LL);
        v3 = *(_QWORD *)this;
      }
    }
  }
  v8 = *(struct DXGADAPTER **)(v3 + 24);
  v9 = *(_QWORD *)(*((_QWORD *)this + 5) + 32LL);
  VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT::LogData(
    (VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 528),
    (struct DXGPROCESS *)v9,
    v8);
  if ( *((_BYTE *)this + 1148)
    && (unsigned int)dword_1C006E048 > 5
    && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
  {
    v17 = *(_OWORD *)(v9 + 360);
    v49 = (__int64)v15;
    v47 = (__int128 *)(v15 + 116);
    v41 = (unsigned __int16 *)*((_QWORD *)v8 + 202);
    v40 = &v75;
    v50 = 232;
    v48 = 116;
    v75 = v17;
    v39 = 1;
    v42 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      v14,
      (int)&unk_1C00511EB,
      (__int64)v15,
      v16,
      (__int64)&v42,
      (__int64)&v39,
      (__int64 *)&v40,
      &v41,
      (__int64 *)&v47,
      &v49);
  }
  if ( *((_BYTE *)this + 1212)
    && (unsigned int)dword_1C006E048 > 5
    && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
  {
    v21 = *(_OWORD *)(v9 + 360);
    v45 = (__int64)v19;
    v51 = v19 + 20;
    v41 = (unsigned __int16 *)*((_QWORD *)v8 + 202);
    v40 = &v75;
    v46 = 40;
    v52 = 20;
    v75 = v21;
    v39 = 1;
    v42 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      v18,
      (int)&unk_1C005115D,
      (__int64)v19,
      v20,
      (__int64)&v42,
      (__int64)&v39,
      (__int64 *)&v40,
      &v41,
      (__int64 *)&v51,
      &v45);
  }
  v10 = 22LL;
  if ( *((_BYTE *)this + 1744) )
  {
    v22 = (unsigned __int64 *)v76;
    v23 = 22LL;
    do
    {
      *v22 = 10000000
           * *(unsigned __int64 *)((char *)v22
                                 + (VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 1216)
                                 - (VIDMM_PROCESS_ADAPTER_INFO *)v76
                                 + 352)
           / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
      ++v22;
      --v23;
    }
    while ( v23 );
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v29 = *(_OWORD *)(v9 + 360);
      v54 = v28;
      v53 = v76;
      v56 = v28;
      v55 = v25 + 176;
      v57 = v25 + 88;
      v58 = v27 + 88;
      v60 = v27 + 88;
      v41 = (unsigned __int16 *)*((_QWORD *)v8 + 202);
      v40 = &v75;
      v59 = v25;
      v75 = v29;
      v39 = 0;
      v42 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v24,
        byte_1C00510BE,
        v25,
        v26,
        (__int64)&v42,
        (__int64)&v39,
        (__int64 *)&v40,
        &v41,
        &v59,
        &v57,
        &v55,
        (__int64 *)&v53);
    }
  }
  if ( *((_BYTE *)this + 1772)
    && (unsigned int)dword_1C006E048 > 5
    && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
  {
    v33 = *(_OWORD *)(v9 + 360);
    v43 = *((_DWORD *)this + 442);
    v44 = *((_DWORD *)this + 441);
    LODWORD(v42) = *((_DWORD *)this + 440);
    LODWORD(v40) = *((_DWORD *)this + 439);
    LODWORD(v41) = *((_DWORD *)this + 438);
    v45 = *((_QWORD *)v8 + 202);
    v47 = &v75;
    v75 = v33;
    v39 = 0;
    v49 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v30,
      byte_1C0050CA0,
      v31,
      v32,
      (__int64)&v49,
      (__int64)&v39,
      (__int64 *)&v47,
      (unsigned __int16 **)&v45,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v42,
      (__int64)&v44,
      (__int64)&v43);
  }
  v11 = (char *)this + 1776;
  if ( *((_BYTE *)this + 2752) )
  {
    v34 = (_QWORD *)((char *)this + 2048);
    do
    {
      *(_QWORD *)((char *)v34 + v78 - v11 - 272) = (unsigned __int64)(10000000LL * *(v34 - 22))
                                                 / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
      v35 = 10000000LL * *v34++;
      *(_QWORD *)((char *)v34 + v77 - v11 - 280) = v35 / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
      --v10;
    }
    while ( v10 );
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v38 = *(_OWORD *)(v9 + 360);
      v45 = 0x1000000LL;
      v62 = 176;
      v61 = v77;
      v63 = v78;
      v65 = v37 + 222;
      v66 = 88;
      v67 = v37 + 200;
      v69 = v37 + 156;
      v71 = v37 + 112;
      v73 = v37 + 2;
      LODWORD(v41) = v37[1];
      LODWORD(v40) = *v37;
      v49 = *((_QWORD *)v8 + 202);
      v47 = &v75;
      v39 = 1;
      v68 = 88;
      v74 = 88;
      v64 = 176;
      v70 = 176;
      v72 = 176;
      v75 = v38;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        176LL,
        byte_1C0050B61,
        v36,
        (__int64)v37,
        (__int64)&v45,
        (__int64)&v39,
        (__int64 *)&v47,
        (unsigned __int16 **)&v49,
        (__int64)&v40,
        (__int64)&v41,
        (__int64 *)&v73,
        (__int64 *)&v71,
        (__int64 *)&v69,
        (__int64 *)&v67,
        (__int64 *)&v65,
        (__int64 *)&v63,
        (__int64 *)&v61);
    }
  }
  v12 = (char *)*((_QWORD *)this + 6);
  if ( v12 != (char *)this + 56 && v12 )
    ExFreePoolWithTag(v12, 0);
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 88) = 0;
}
