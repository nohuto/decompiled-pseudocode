/*
 * XREFs of ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050
 * Callers:
 *     <none>
 * Callees:
 *     ?TargetTimeToFirstFrame@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x180003810 (-TargetTimeToFirstFrame@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z.c)
 *     ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180003910 (-FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TAR.c)
 *     ?IsMultiMon@CCompFrameStats@@UEBA_NXZ @ 0x18000B320 (-IsMultiMon@CCompFrameStats@@UEBA_NXZ.c)
 *     ?TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x180013070 (-TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 *     ?TargetFramesGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800136E0 (-TargetFramesGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetMaxVBlankGlitchDuration@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180013810 (-TargetMaxVBlankGlitchDuration@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetMaxTimeBetweenFrames@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180013910 (-TargetMaxTimeBetweenFrames@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFrameRate@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180013A60 (-TargetFrameRate@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetTotalVSyncsGlitched@CAnimationFrameStats@@QEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18001482C (-TargetTotalVSyncsGlitched@CAnimationFrameStats@@QEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U2@U?$_tlgWrapperByVal@$01@@U2@U3@U2@U2@U1@U1@U2@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$07@@54AEBU?$_tlgWrapperByVal@$01@@454433434AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180014968 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U2@U-.c)
 *     ?IsWarp@CCompFrameStats@@SA_NXZ @ 0x180014BF4 (-IsWarp@CCompFrameStats@@SA_NXZ.c)
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

void __fastcall CAnimationFrameStats::SendTelemetry(CAnimationFrameStats *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int8 *v5; // r9
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v12[16]; // [rsp+148h] [rbp+0h] BYREF
  __int64 v13; // [rsp+158h] [rbp+10h]
  unsigned int v14; // [rsp+164h] [rbp+1Ch]
  _BYTE v15[16]; // [rsp+198h] [rbp+50h] BYREF
  __int64 v16; // [rsp+1A8h] [rbp+60h]
  unsigned int v17; // [rsp+1B4h] [rbp+6Ch]
  __int128 v18; // [rsp+1E8h] [rbp+A0h] BYREF
  __int64 v19; // [rsp+1F8h] [rbp+B0h]
  __int128 v20; // [rsp+200h] [rbp+B8h] BYREF
  __int64 v21; // [rsp+210h] [rbp+C8h]

  if ( *((_BYTE *)this + 12) )
  {
    if ( *((_BYTE *)this + 2804) )
    {
      v18 = 0LL;
      v19 = 0LL;
      memset_0(v12, 0, 0x48uLL);
      if ( CCompFrameStats::FrameTargetData(
             this,
             *((struct tagCOMPOSITION_FRAME_STATS **)this + 14),
             (struct tagCOMPOSITION_FRAME_STATS *)&v18,
             (CAnimationFrameStats *)((char *)this + 168),
             (struct tagCOMPOSITION_TARGET_STATS *)v12) )
      {
        if ( v13 )
        {
          v21 = 0LL;
          v20 = 0LL;
          memset_0(v15, 0, 0x48uLL);
          if ( CCompFrameStats::FrameTargetData(
                 this,
                 *((struct tagCOMPOSITION_FRAME_STATS **)this + 15),
                 (struct tagCOMPOSITION_FRAME_STATS *)&v20,
                 (CAnimationFrameStats *)((char *)this + 168),
                 (struct tagCOMPOSITION_TARGET_STATS *)v15) )
          {
            if ( v16 && v17 > v14 )
            {
              CAnimationFrameStats::TargetTotalVSyncsGlitched(
                this,
                (CAnimationFrameStats *)((char *)this + 168),
                *((_QWORD *)this + 14),
                *((_QWORD *)this + 15));
              CCompFrameStats::TargetFrameRate(
                this,
                (CAnimationFrameStats *)((char *)this + 168),
                *((_QWORD *)this + 14),
                *((_QWORD *)this + 15));
              CCompFrameStats::TargetMaxTimeBetweenFrames(
                (unsigned __int64 **)this,
                (CAnimationFrameStats *)((char *)this + 168),
                *((_QWORD *)this + 14),
                *((_QWORD *)this + 15));
              CCompFrameStats::TargetTimeToFirstFrame(
                this,
                (CAnimationFrameStats *)((char *)this + 168),
                *((_QWORD *)this + 14));
              CCompFrameStats::TargetAverageFrameDuration(
                this,
                (CAnimationFrameStats *)((char *)this + 168),
                0LL,
                *((_QWORD *)this + 14),
                *((_QWORD *)this + 15));
              CCompFrameStats::TargetMaxVBlankGlitchDuration(
                (unsigned __int64 **)this,
                (CAnimationFrameStats *)((char *)this + 168),
                *((_QWORD *)this + 14),
                *((_QWORD *)this + 15));
              CCompFrameStats::TargetFramesGlitched(
                (unsigned __int64 **)this,
                (CAnimationFrameStats *)((char *)this + 168),
                *((_QWORD *)this + 14),
                *((_QWORD *)this + 15));
              if ( *((_WORD *)this + 878) )
              {
                v5 = (unsigned __int8 *)this + 1756;
                v6 = -1LL;
                do
                  ++v6;
                while ( *((_WORD *)this + v6 + 878) );
                v7 = 2 * v6;
                v8 = 314159LL;
                if ( v7 >= 8 )
                {
                  v9 = (unsigned __int64)v7 >> 3;
                  do
                  {
                    v10 = v5[6]
                        + 37
                        * (v5[5] + 37 * (v5[4] + 37 * (v5[3] + 37 * (v5[2] + 37 * (v5[1] + 37 * (*v5 + 37 * v8))))));
                    v11 = v5[7];
                    v5 += 8;
                    v8 = v11 + 37 * v10;
                    --v9;
                  }
                  while ( v9 );
                }
              }
              _InterlockedIncrement(&dword_18022098C);
              if ( !CCompFrameStats::IsMultiMon(this) )
                CCompFrameStats::IsWarp();
              if ( (unsigned int)dword_1802191E8 > 5 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1802191E8, 0x200000000004LL, v2, v3) )
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                    v4,
                    &unk_1801F227E);
              }
            }
          }
        }
      }
    }
  }
}
