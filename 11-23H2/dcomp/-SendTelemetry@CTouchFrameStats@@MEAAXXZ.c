/*
 * XREFs of ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWarp@CCompFrameStats@@SA_NXZ @ 0x180014BF4 (-IsWarp@CCompFrameStats@@SA_NXZ.c)
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U4@U4@U4@U4@U1@U4@U4@U1@U1@U?$_tlgWrapperByVal@$03@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U4@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33333AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@666636633AEBU?$_tlgWrapperByVal@$03@@7777777777767777777777777777765@Z @ 0x1801A62C4 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@.c)
 *     ?AppCommitUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A6BF0 (-AppCommitUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?AppDeliveryUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A6C3C (-AppDeliveryUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?AppInputUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A6C78 (-AppInputUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?AppUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A6CB8 (-AppUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?CalcAverageAppCommitLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A6CF8 (-CalcAverageAppCommitLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageAppDeliveryLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A6E54 (-CalcAverageAppDeliveryLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageAppInputLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A6FB0 (-CalcAverageAppInputLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageAppLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7114 (-CalcAverageAppLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7270 (-CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageDwmRenderLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A73E0 (-CalcAverageDwmRenderLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageGestureTargetingLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7550 (-CalcAverageGestureTargetingLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageInputProcessorLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A76AC (-CalcAverageInputProcessorLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageIsmLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7808 (-CalcAverageIsmLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageRimQueueLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7964 (-CalcAverageRimQueueLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageRimReadLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7AC8 (-CalcAverageRimReadLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageRimSignalLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7C24 (-CalcAverageRimSignalLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageTotalLatency@CTouchFrameStats@@IEBAMW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@@Z @ 0x1801A7D80 (-CalcAverageTotalLatency@CTouchFrameStats@@IEBAMW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     ?CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ @ 0x1801A7EF0 (-CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcInputGlitches@CTouchFrameStats@@IEBAIXZ @ 0x1801A8154 (-CalcInputGlitches@CTouchFrameStats@@IEBAIXZ.c)
 *     ?CalcMaxVSyncsMissed@CTouchFrameStats@@IEBAIXZ @ 0x1801A82B8 (-CalcMaxVSyncsMissed@CTouchFrameStats@@IEBAIXZ.c)
 *     ?CalcRenderGlitches@CTouchFrameStats@@IEBAIXZ @ 0x1801A8304 (-CalcRenderGlitches@CTouchFrameStats@@IEBAIXZ.c)
 *     ?DwmPresentUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8488 (-DwmPresentUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?DwmRenderUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A84D8 (-DwmRenderUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?FrameIdFromBatchId@CTouchFrameStats@@IEBA_KK@Z @ 0x1801A8680 (-FrameIdFromBatchId@CTouchFrameStats@@IEBA_KK@Z.c)
 *     ?GestureTargetingUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A86B0 (-GestureTargetingUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?InputGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@PEBV12@@Z @ 0x1801A8704 (-InputGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NW4__MIDL___MIDL_itf_touchtelemetry_0000_00.c)
 *     ?InputProcessorUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A87FC (-InputProcessorUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?IsmUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8888 (-IsmUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?ParallelMode@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A88CC (-ParallelMode@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ.c)
 *     ?RenderGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A8998 (-RenderGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ.c)
 *     ?ResolveFrames@CTouchFrameStats@@IEAA_NAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A89E8 (-ResolveFrames@CTouchFrameStats@@IEAA_NAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?RimQueueUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8A9C (-RimQueueUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?RimReadUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8ADC (-RimReadUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?RimSignalUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8B20 (-RimSignalUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?TotalLatencyMs@CInteractionInfo@CTouchFrameStats@@QEBAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@_K@Z @ 0x1801A94E4 (-TotalLatencyMs@CInteractionInfo@CTouchFrameStats@@QEBAGW4__MIDL___MIDL_itf_touchtelemetry_0000_.c)
 *     ?VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ @ 0x1801A954C (-VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ.c)
 */

void __fastcall CTouchFrameStats::SendTelemetry(CTouchFrameStats *this)
{
  __int64 v2; // rax
  CTouchFrameStats::CInteractionInfo *v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int16 v10; // r15
  unsigned __int16 v11; // si
  __int64 v12; // rcx
  float v13; // xmm0_4
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm2_4
  __int64 v17; // rcx
  bool v18; // al
  unsigned int v19; // ebx
  __int64 v20; // rcx
  int v21; // ebx
  __int16 v22; // r9
  int v23; // r10d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // [rsp+1B8h] [rbp-80h] BYREF
  bool v29; // [rsp+1B9h] [rbp-7Fh] BYREF
  bool v30; // [rsp+1BAh] [rbp-7Eh] BYREF
  char v31; // [rsp+1BBh] [rbp-7Dh] BYREF
  char v32; // [rsp+1BCh] [rbp-7Ch] BYREF
  char v33; // [rsp+1BDh] [rbp-7Bh] BYREF
  _BYTE v34[2]; // [rsp+1BEh] [rbp-7Ah] BYREF
  __int16 v35; // [rsp+1C0h] [rbp-78h] BYREF
  unsigned __int16 v36; // [rsp+1C2h] [rbp-76h] BYREF
  __int16 v37; // [rsp+1C4h] [rbp-74h] BYREF
  float v38; // [rsp+1C8h] [rbp-70h] BYREF
  float v39; // [rsp+1CCh] [rbp-6Ch] BYREF
  float v40; // [rsp+1D0h] [rbp-68h] BYREF
  float v41; // [rsp+1D4h] [rbp-64h] BYREF
  float v42; // [rsp+1D8h] [rbp-60h] BYREF
  float v43; // [rsp+1DCh] [rbp-5Ch] BYREF
  float v44; // [rsp+1E0h] [rbp-58h] BYREF
  int v45; // [rsp+1E4h] [rbp-54h] BYREF
  float v46; // [rsp+1E8h] [rbp-50h] BYREF
  float v47; // [rsp+1ECh] [rbp-4Ch] BYREF
  float v48; // [rsp+1F0h] [rbp-48h] BYREF
  float v49; // [rsp+1F4h] [rbp-44h] BYREF
  float v50; // [rsp+1F8h] [rbp-40h] BYREF
  float Latency; // [rsp+1FCh] [rbp-3Ch] BYREF
  unsigned __int32 v52; // [rsp+200h] [rbp-38h] BYREF
  int v53; // [rsp+204h] [rbp-34h] BYREF
  int v54; // [rsp+208h] [rbp-30h] BYREF
  int v55; // [rsp+20Ch] [rbp-2Ch] BYREF
  int v56; // [rsp+210h] [rbp-28h] BYREF
  int v57; // [rsp+214h] [rbp-24h] BYREF
  int v58; // [rsp+218h] [rbp-20h] BYREF
  int v59; // [rsp+21Ch] [rbp-1Ch] BYREF
  int v60; // [rsp+220h] [rbp-18h] BYREF
  int v61; // [rsp+224h] [rbp-14h] BYREF
  int v62; // [rsp+228h] [rbp-10h] BYREF
  int v63; // [rsp+22Ch] [rbp-Ch] BYREF
  int Us; // [rsp+230h] [rbp-8h] BYREF
  int v65; // [rsp+234h] [rbp-4h] BYREF
  int v66; // [rsp+238h] [rbp+0h] BYREF
  int v67; // [rsp+23Ch] [rbp+4h] BYREF
  float v68; // [rsp+240h] [rbp+8h] BYREF
  float v69; // [rsp+244h] [rbp+Ch] BYREF
  float v70; // [rsp+248h] [rbp+10h] BYREF
  float v71; // [rsp+24Ch] [rbp+14h] BYREF
  float v72; // [rsp+250h] [rbp+18h] BYREF
  float v73; // [rsp+254h] [rbp+1Ch] BYREF
  float v74; // [rsp+258h] [rbp+20h] BYREF
  unsigned __int64 v75; // [rsp+260h] [rbp+28h] BYREF
  unsigned __int64 v76; // [rsp+268h] [rbp+30h] BYREF
  __int64 v77; // [rsp+270h] [rbp+38h] BYREF
  __int64 v78; // [rsp+278h] [rbp+40h] BYREF
  __int64 v79; // [rsp+280h] [rbp+48h] BYREF
  __int64 v80; // [rsp+288h] [rbp+50h] BYREF
  __int64 v81; // [rsp+290h] [rbp+58h] BYREF
  __int128 v82; // [rsp+298h] [rbp+60h] BYREF
  __int64 v83; // [rsp+2A8h] [rbp+70h]
  _BYTE v84[40]; // [rsp+2B0h] [rbp+78h] BYREF
  _BYTE v85[16]; // [rsp+2D8h] [rbp+A0h] BYREF
  __int64 v86; // [rsp+2E8h] [rbp+B0h]
  unsigned int v87; // [rsp+2F4h] [rbp+BCh]
  unsigned __int64 v88; // [rsp+300h] [rbp+C8h]

  if ( *((_BYTE *)this + 344) )
  {
    if ( *((_BYTE *)this + 12) )
    {
      if ( *((_QWORD *)this + 14) != *((_QWORD *)this + 15)
        && (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 31) - *((_QWORD *)this + 30)) >> 5)) >= 2
        && (*(int (__fastcall **)(CTouchFrameStats *, _BYTE *))(*(_QWORD *)this + 88LL))(this, v84) >= 0 )
      {
        if ( CTouchFrameStats::ResolveFrames(this, (const struct tagCOMPOSITION_TARGET_ID *)v84) )
        {
          v2 = (*(__int64 (__fastcall **)(CTouchFrameStats *))(*(_QWORD *)this + 48LL))(this);
          v3 = (CTouchFrameStats::CInteractionInfo *)*((_QWORD *)this + 30);
          v4 = v2;
          if ( *(_QWORD *)(*(_QWORD *)v3 + 56LL) )
          {
            v5 = CTouchFrameStats::FrameIdFromBatchId(this, *((_DWORD *)this + 45));
            v7 = v5;
            if ( v5 )
            {
              if ( v5 > *(_QWORD *)(v6 + 8) )
              {
                v83 = 0LL;
                v82 = 0LL;
                memset_0(v85, 0, 0x48uLL);
                if ( (*(unsigned __int8 (__fastcall **)(CTouchFrameStats *, unsigned __int64, __int128 *, _BYTE *, _BYTE *))(*(_QWORD *)this + 96LL))(
                       this,
                       v7,
                       &v82,
                       v84,
                       v85) )
                {
                  if ( v86 )
                  {
                    v8 = *(_QWORD *)v3;
                    v9 = *(_DWORD *)(*(_QWORD *)v3 + 92LL);
                    if ( v9 )
                    {
                      if ( v87 )
                      {
                        if ( v87 > v9 )
                        {
                          v10 = v87 - v9;
                          if ( v88 > *(_QWORD *)(v8 + 16) )
                          {
                            v11 = v7 - *(_WORD *)(v8 + 8);
                            v12 = v88 - *(_QWORD *)(v8 + 16);
                            if ( v12 < 0 )
                              v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
                                  + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
                            else
                              v13 = (float)(int)v12;
                            if ( (v4 & 0x8000000000000000uLL) != 0LL )
                              v14 = (float)(int)(v4 & 1 | (v4 >> 1)) + (float)(int)(v4 & 1 | (v4 >> 1));
                            else
                              v14 = (float)(int)v4;
                            v15 = *(_QWORD *)this;
                            v78 = 0LL;
                            v77 = 0LL;
                            v16 = (float)((float)v11 / (float)(v13 / v14)) + 0.5;
                            (*(void (__fastcall **)(CTouchFrameStats *, __int64 *, __int64 *))(v15 + 240))(
                              this,
                              &v78,
                              &v77);
                            v17 = *(_QWORD *)this;
                            v80 = 0LL;
                            v79 = 0LL;
                            v76 = (v77 - v78) / (v4 / 0x3E8);
                            (*(void (__fastcall **)(CTouchFrameStats *, __int64 *, __int64 *))(v17 + 248))(
                              this,
                              &v80,
                              &v79);
                            v75 = (v79 - v80) / (v4 / 0x3E8);
                            v18 = CTouchFrameStats::CInteractionInfo::ParallelMode(v3);
                            v19 = *((_DWORD *)this + 78);
                            v30 = v18;
                            v35 = CTouchFrameStats::CInteractionInfo::TotalLatencyMs(v20, v19, v4);
                            v29 = CTouchFrameStats::CInteractionInfo::InputGlitch((__int64 *)v3, v19);
                            v28 = CTouchFrameStats::CInteractionInfo::RenderGlitch(v3);
                            Us = CTouchFrameStats::CInteractionInfo::RimReadUs(v3, v4);
                            v63 = CTouchFrameStats::CInteractionInfo::RimQueueUs(v3, v4);
                            v62 = CTouchFrameStats::CInteractionInfo::RimSignalUs(v3, v4);
                            v61 = CTouchFrameStats::CInteractionInfo::InputProcessorUs(v3, v4);
                            v60 = CTouchFrameStats::CInteractionInfo::IsmUs(v3, v4);
                            v59 = CTouchFrameStats::CInteractionInfo::GestureTargetingUs(v3, v4);
                            v58 = CTouchFrameStats::CInteractionInfo::AppDeliveryUs(v3, v4);
                            v57 = CTouchFrameStats::CInteractionInfo::AppInputUs(v3, v4);
                            v56 = CTouchFrameStats::CInteractionInfo::AppUs(v3, v4);
                            v55 = CTouchFrameStats::CInteractionInfo::AppCommitUs(v3, v4);
                            v54 = CTouchFrameStats::CInteractionInfo::DwmRenderUs(v3);
                            v53 = CTouchFrameStats::CInteractionInfo::DwmPresentUs(v3);
                            v36 = CTouchFrameStats::CInteractionInfo::VSyncsMissed(v3);
                            v52 = CTouchFrameStats::CalcAverageTotalLatency(this, v19).m128_u32[0];
                            Latency = CTouchFrameStats::CalcAverageRimReadLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v50 = CTouchFrameStats::CalcAverageRimQueueLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v49 = CTouchFrameStats::CalcAverageRimSignalLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v48 = CTouchFrameStats::CalcAverageInputProcessorLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v47 = CTouchFrameStats::CalcAverageIsmLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v46 = CTouchFrameStats::CalcAverageGestureTargetingLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v38 = CTouchFrameStats::CalcAverageAppDeliveryLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v39 = CTouchFrameStats::CalcAverageAppInputLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v40 = CTouchFrameStats::CalcAverageAppLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v41 = CTouchFrameStats::CalcAverageAppCommitLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v42 = CTouchFrameStats::CalcAverageDwmRenderLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v43 = CTouchFrameStats::CalcAverageDwmPresentLatency((CTouchFrameStats::CInteractionInfo **)this);
                            v44 = CTouchFrameStats::CalcAverageVSyncsMissed(this);
                            v21 = CTouchFrameStats::CalcInputGlitches(this);
                            v45 = CTouchFrameStats::CalcRenderGlitches(this);
                            CTouchFrameStats::CalcMaxVSyncsMissed(this);
                            if ( (unsigned int)dword_1802191E8 > 4 )
                            {
                              if ( tlgKeywordOn((__int64)&dword_1802191E8, 0x400000000002LL) )
                              {
                                v66 = v45;
                                v68 = v44;
                                v69 = v43;
                                v70 = v42;
                                v71 = v41;
                                v72 = v40;
                                v73 = v39;
                                v74 = v38;
                                LOWORD(v38) = v36;
                                LOWORD(v39) = v35;
                                LOWORD(v43) = *((_WORD *)this + 144);
                                LOWORD(v44) = v75;
                                LOWORD(v45) = v76;
                                v24 = (__int64)(*((_QWORD *)this + 31) - *((_QWORD *)this + 30)) >> 5;
                                v81 = 0x1000000LL;
                                v37 = (int)v16;
                                v65 = v23;
                                v67 = v21;
                                LOWORD(v40) = v22;
                                LOWORD(v41) = v11;
                                LOWORD(v42) = v10;
                                v76 = 0x6DB6DB6DB6DB6DB7LL * v24;
                                v75 = (unsigned __int64)this + 328;
                                v31 = *((_BYTE *)this + 324);
                                v32 = *((_BYTE *)this + 312);
                                v33 = *((_BYTE *)this + 320);
                                v34[0] = *((_BYTE *)this + 316);
                                LOBYTE(v35) = CCompFrameStats::IsWarp();
                                LOBYTE(v36) = (*(__int64 (__fastcall **)(CTouchFrameStats *))(*(_QWORD *)this + 56LL))(this);
                                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>>(
                                  v25,
                                  byte_1801F27C8,
                                  v26,
                                  v27,
                                  (__int64)&v36,
                                  (__int64)&v35,
                                  (__int64)v34,
                                  (__int64)&v33,
                                  (__int64)&v32,
                                  (__int64)&v31,
                                  (__int64 *)&v75,
                                  (__int64)&v76,
                                  (__int64)&v45,
                                  (__int64)&v44,
                                  (__int64)&v43,
                                  (__int64)&v42,
                                  (__int64)&v41,
                                  (__int64)&v30,
                                  (__int64)&v40,
                                  (__int64)&v39,
                                  (__int64)&v29,
                                  (__int64)&v28,
                                  (__int64)&Us,
                                  (__int64)&v63,
                                  (__int64)&v62,
                                  (__int64)&v61,
                                  (__int64)&v60,
                                  (__int64)&v59,
                                  (__int64)&v58,
                                  (__int64)&v57,
                                  (__int64)&v56,
                                  (__int64)&v55,
                                  (__int64)&v54,
                                  (__int64)&v53,
                                  (__int64)&v38,
                                  (__int64)&v52,
                                  (__int64)&Latency,
                                  (__int64)&v50,
                                  (__int64)&v49,
                                  (__int64)&v48,
                                  (__int64)&v47,
                                  (__int64)&v46,
                                  (__int64)&v74,
                                  (__int64)&v73,
                                  (__int64)&v72,
                                  (__int64)&v71,
                                  (__int64)&v70,
                                  (__int64)&v69,
                                  (__int64)&v68,
                                  (__int64)&v67,
                                  (__int64)&v66,
                                  (__int64)&v65,
                                  (__int64)&v37,
                                  (__int64)&v81);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
