/*
 * XREFs of ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180004F10 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?IsMultiMon@CCompFrameStats@@UEBA_NXZ @ 0x1800029B0 (-IsMultiMon@CCompFrameStats@@UEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$07@@544444433434AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800053A0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U2@U2.c)
 *     ?IsWarp@@YA_NXZ @ 0x1800056CC (-IsWarp@@YA_NXZ.c)
 *     ?TargetTimeToFirstFrame@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x180008D90 (-TargetTimeToFirstFrame@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z.c)
 *     ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180008E80 (-FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TAR.c)
 *     ?TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x180008FD0 (-TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 *     ?TargetFrameRate@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009220 (-TargetFrameRate@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetTotalGlitchDuration@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009390 (-TargetTotalGlitchDuration@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetMaxVBlankGlitchDuration@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009470 (-TargetMaxVBlankGlitchDuration@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFramesGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009540 (-TargetFramesGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetMaxTimeBetweenFrames@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009660 (-TargetMaxTimeBetweenFrames@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

void __fastcall CAnimationFrameStats::SendAnimationLastFrameTelemetry(CAnimationFrameStats *this)
{
  bool v2; // bl
  bool v3; // al
  unsigned __int64 v4; // rbx
  unsigned int v5; // r15d
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // di
  unsigned int v9; // r12d
  unsigned __int64 v10; // rax
  float v11; // xmm7_4
  float v12; // xmm0_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 Frame; // rax
  unsigned __int64 v20; // r9
  float v21; // xmm0_4
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned int v24; // eax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r8
  __int64 v27; // rbx
  signed __int32 v28; // r14d
  _DWORD *v29; // rcx
  int v30; // ecx
  __int64 v31; // rax
  unsigned __int8 *v32; // r9
  __int64 v33; // r8
  __int64 v34; // r8
  unsigned __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r8d
  int v39; // r8d
  int v40; // r8d
  int v41; // r8d
  int v42; // r8d
  int v43; // r8d
  struct tagCOMPOSITION_TARGET_STATS *v44; // [rsp+28h] [rbp-120h]
  char v45; // [rsp+C8h] [rbp-80h] BYREF
  unsigned int v46; // [rsp+CCh] [rbp-7Ch] BYREF
  unsigned int v47; // [rsp+D0h] [rbp-78h] BYREF
  int v48; // [rsp+D4h] [rbp-74h] BYREF
  signed __int32 v49; // [rsp+D8h] [rbp-70h] BYREF
  unsigned int v50; // [rsp+DCh] [rbp-6Ch] BYREF
  unsigned int v51; // [rsp+E0h] [rbp-68h] BYREF
  int v52; // [rsp+E4h] [rbp-64h] BYREF
  int v53; // [rsp+E8h] [rbp-60h] BYREF
  int v54; // [rsp+ECh] [rbp-5Ch] BYREF
  int v55; // [rsp+F0h] [rbp-58h] BYREF
  int v56; // [rsp+F4h] [rbp-54h] BYREF
  unsigned __int64 v57; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v58; // [rsp+100h] [rbp-48h] BYREF
  __int64 v59; // [rsp+108h] [rbp-40h] BYREF
  __int64 v60; // [rsp+110h] [rbp-38h]
  __int64 v61; // [rsp+118h] [rbp-30h] BYREF
  __int64 v62; // [rsp+120h] [rbp-28h] BYREF
  __int64 v63; // [rsp+128h] [rbp-20h] BYREF
  __int64 v64; // [rsp+130h] [rbp-18h] BYREF
  __int64 v65; // [rsp+138h] [rbp-10h] BYREF
  _BYTE v66[16]; // [rsp+148h] [rbp+0h] BYREF
  unsigned __int64 v67; // [rsp+158h] [rbp+10h]
  int v68; // [rsp+164h] [rbp+1Ch]
  _BYTE v69[16]; // [rsp+198h] [rbp+50h] BYREF
  unsigned __int64 v70; // [rsp+1A8h] [rbp+60h]
  int v71; // [rsp+1B4h] [rbp+6Ch]
  __int128 v72; // [rsp+1E8h] [rbp+A0h] BYREF
  __int64 v73; // [rsp+1F8h] [rbp+B0h]
  __int128 v74; // [rsp+200h] [rbp+B8h] BYREF
  __int64 v75; // [rsp+210h] [rbp+C8h]

  v73 = 0LL;
  v72 = 0LL;
  memset_0(v66, 0, 0x48uLL);
  v2 = CCompFrameStats::FrameTargetData(
         this,
         *((_QWORD *)this + 11),
         (struct tagCOMPOSITION_FRAME_STATS *)&v72,
         (CAnimationFrameStats *)((char *)this + 160),
         (struct tagCOMPOSITION_TARGET_STATS *)v66);
  v75 = 0LL;
  v74 = 0LL;
  memset_0(v69, 0, 0x48uLL);
  v3 = CCompFrameStats::FrameTargetData(
         this,
         *((_QWORD *)this + 12),
         (struct tagCOMPOSITION_FRAME_STATS *)&v74,
         (CAnimationFrameStats *)((char *)this + 160),
         (struct tagCOMPOSITION_TARGET_STATS *)v69);
  if ( v2 && v3 )
  {
    v4 = v70;
    if ( v67 > v70 )
      v4 = v67;
    if ( v4 )
    {
      v5 = v71 - v68;
      v6 = CCompFrameStats::TargetTotalGlitchDuration(
             this,
             (CAnimationFrameStats *)((char *)this + 160),
             *((_QWORD *)this + 11),
             *((_QWORD *)this + 12));
      v7 = *((_QWORD *)this + 2);
      v8 = 1;
      v9 = v5;
      v10 = v6 / v4;
      if ( (unsigned int)v10 <= v5 )
        v9 = v10;
      if ( v7 < 0 )
      {
        v31 = *((_QWORD *)this + 2) & 1LL | (*((_QWORD *)this + 2) >> 1);
        v11 = (float)(int)v31 + (float)(int)v31;
      }
      else
      {
        v11 = (float)(int)v7;
      }
      if ( (v4 & 0x8000000000000000uLL) != 0LL )
        v12 = (float)(int)(v4 & 1 | (v4 >> 1)) + (float)(int)(v4 & 1 | (v4 >> 1));
      else
        v12 = (float)(int)v4;
      v13 = v11 / v12;
      if ( v13 >= 59.0 && v13 <= 61.0 )
        v13 = FLOAT_60_0;
      v14 = CCompFrameStats::TargetFrameRate(
              this,
              (CAnimationFrameStats *)((char *)this + 160),
              *((_QWORD *)this + 11),
              *((_QWORD *)this + 12));
      v15 = *((_QWORD *)this + 12);
      v16 = *((_QWORD *)this + 11);
      v59 = (unsigned int)(int)(float)(v14 + 0.5);
      v17 = CCompFrameStats::TargetMaxTimeBetweenFrames(this, (CAnimationFrameStats *)((char *)this + 160), v16, v15);
      v18 = *((_QWORD *)this + 11);
      v57 = 1000 * v17 / *((_QWORD *)this + 2);
      Frame = CCompFrameStats::TargetTimeToFirstFrame(this, (CAnimationFrameStats *)((char *)this + 160), v18);
      v20 = *((_QWORD *)this + 11);
      v44 = (struct tagCOMPOSITION_TARGET_STATS *)*((_QWORD *)this + 12);
      v58 = 1000 * Frame / *((_QWORD *)this + 2);
      v21 = CCompFrameStats::TargetAverageFrameDuration(
              this,
              (CAnimationFrameStats *)((char *)this + 160),
              0LL,
              v20,
              (unsigned __int64)v44);
      v22 = *((_QWORD *)this + 12);
      v23 = *((_QWORD *)this + 11);
      v60 = (unsigned int)(int)(float)(v21 + 0.5);
      v24 = CCompFrameStats::TargetMaxVBlankGlitchDuration(this, (CAnimationFrameStats *)((char *)this + 160), v23, v22);
      v25 = *((_QWORD *)this + 12);
      v26 = *((_QWORD *)this + 11);
      v47 = v24;
      v46 = CCompFrameStats::TargetFramesGlitched(this, (CAnimationFrameStats *)((char *)this + 160), v26, v25);
      LODWORD(v27) = 0;
      if ( !*((_WORD *)this + 874) )
        goto LABEL_16;
      v32 = (unsigned __int8 *)this + 1748;
      v33 = -1LL;
      do
        ++v33;
      while ( *((_WORD *)this + v33 + 874) );
      v34 = 2 * v33;
      v27 = 314159LL;
      if ( v34 >= 8 )
      {
        v35 = (unsigned __int64)v34 >> 3;
        v34 -= 8 * ((unsigned __int64)v34 >> 3);
        do
        {
          v36 = v32[6]
              + 37 * (v32[5] + 37 * (v32[4] + 37 * (v32[3] + 37 * (v32[2] + 37 * (v32[1] + 37 * (*v32 + 37 * v27))))));
          v37 = v32[7];
          v32 += 8;
          v27 = v37 + 37 * v36;
          --v35;
        }
        while ( v35 );
      }
      if ( v34 < 1 || v34 > 7 )
        goto LABEL_16;
      v38 = v34 - 1;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v41 )
            {
              v42 = v41 - 1;
              if ( v42 )
              {
                v43 = v42 - 1;
                if ( v43 )
                {
                  if ( v43 != 1 )
                    goto LABEL_16;
                  LODWORD(v27) = *v32++ + 37 * v27;
                }
                LODWORD(v27) = *v32++ + 37 * v27;
              }
              LODWORD(v27) = *v32++ + 37 * v27;
            }
            LODWORD(v27) = *v32++ + 37 * v27;
          }
          LODWORD(v27) = *v32++ + 37 * v27;
        }
        LODWORD(v27) = *v32++ + 37 * v27;
      }
      LODWORD(v27) = *v32 + 37 * v27;
LABEL_16:
      v28 = _InterlockedIncrement(&g_scenarioEtwIndex);
      if ( CCompFrameStats::IsMultiMon(this) || IsWarp() || v67 != v70 )
        v8 = 0;
      v29 = (_DWORD *)*((_QWORD *)this + 19);
      if ( *v29 > 5u )
      {
        if ( (unsigned __int8)tlgKeywordOn(v29, 0x200000000004LL) )
        {
          v54 = 0;
          v62 = (__int64)this + 708;
          v45 = v8;
          v63 = (__int64)this + 188;
          v48 = v27;
          v61 = (__int64)this + 1748;
          v49 = v28;
          v50 = v9;
          v51 = v5;
          v52 = (int)v13;
          v53 = *((_DWORD *)this + 697);
          v64 = *((_QWORD *)this + 12);
          v65 = *((_QWORD *)this + 11);
          v55 = v58;
          v56 = v57;
          LODWORD(v57) = v60;
          LODWORD(v58) = v59;
          v59 = (__int64)this + 1228;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
            v30,
            (int)&dword_18012103D,
            (__int64)&v59,
            (__int64)&v58,
            (__int64)&v57,
            (__int64)&v56,
            (__int64)&v55,
            (__int64)&v54,
            (__int64)&v65,
            (__int64)&v64,
            (__int64)&v53,
            (__int64)&v52,
            (__int64)&v51,
            (__int64)&v50,
            (__int64)&v47,
            (__int64)&v46,
            (__int64)&v63,
            (__int64)&v62,
            (__int64)&v49,
            (__int64)&v61,
            (__int64)&v48,
            (__int64)&v45);
        }
      }
    }
  }
}
