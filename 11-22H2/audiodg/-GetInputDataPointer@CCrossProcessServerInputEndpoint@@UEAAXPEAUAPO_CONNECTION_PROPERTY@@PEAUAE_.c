/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140009270
 * Callers:
 *     <none>
 * Callees:
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140008AF8 (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x140008C30 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x14000AF64 (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x14002AC80 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14003A268 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A342 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14009638C (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096990 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x1400985B0 (McTemplateU0pqqqq_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned int v4; // r13d
  unsigned int u32ValidFrameCount; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rcx
  unsigned __int32 v9; // eax
  __int64 v10; // rdx
  int v11; // ebp
  signed __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rax
  char v16; // r9
  _QWORD *v17; // rsi
  APO_BUFFER_FLAGS v18; // edi
  int v19; // r11d
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  signed __int32 v22; // r8d
  int v23; // ecx
  int v24; // ecx
  void *v25; // rcx
  const void *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdi
  size_t v29; // r8
  int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // rdi
  unsigned __int8 *pBuffer; // r12
  unsigned int v34; // edx
  unsigned int v35; // r9d
  int *v36; // [rsp+40h] [rbp-68h]
  __int64 v37; // [rsp+48h] [rbp-60h]
  __int64 v38; // [rsp+50h] [rbp-58h]
  int v39; // [rsp+58h] [rbp-50h]
  int v40; // [rsp+B0h] [rbp+8h]
  unsigned int v41; // [rsp+B8h] [rbp+10h]
  unsigned int v42; // [rsp+B8h] [rbp+10h]
  unsigned int v44; // [rsp+C8h] [rbp+20h]

  v4 = 0;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      a2->u32ValidFrameCount,
      (_DWORD)a2,
      (_DWORD)this - 464,
      5,
      a2->u32ValidFrameCount,
      a2->u32BufferFlags,
      0);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  v7 = 0;
  v8 = *((_QWORD *)this - 49);
  *((_DWORD *)this + 5) = u32ValidFrameCount;
  *((_DWORD *)this + 4) = 2;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 164), 0, 0);
  v10 = v9;
  v36 = (int *)((char *)this + 88);
  v40 = *((_DWORD *)this + 22);
  if ( (v9 & 1) != 0 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( (*((_BYTE *)this - 288) & 1) == 0 )
      goto LABEL_53;
  }
  if ( !u32ValidFrameCount )
  {
LABEL_53:
    LODWORD(v17) = (_DWORD)this - 464;
    if ( (byte_1400CF981 & 4) != 0 )
      McTemplateU0pqxxx_EventWriteTransfer(v8, v9, (_DWORD)this - 464, 23, v9, u32ValidFrameCount, 101);
    if ( v40 != v11 && !v11 )
    {
      CCrossProcessServerInputEndpoint::FillRampBuffer((CCrossProcessServerInputEndpoint *)((char *)this - 464));
      if ( u32ValidFrameCount )
      {
        v35 = *((_DWORD *)this - 93);
        if ( v35 )
          ApplyVolumeRamp(
            (CCrossProcessServerInputEndpoint *)((char *)this + 92),
            *((unsigned __int8 **)this - 44),
            u32ValidFrameCount,
            v35,
            *((_DWORD *)this - 91),
            *((_DWORD *)this - 90),
            *((_DWORD *)this - 89),
            0);
      }
      v18 = BUFFER_VALID;
      goto LABEL_15;
    }
LABEL_14:
    v18 = BUFFER_SILENT;
LABEL_15:
    v19 = (int)v17;
    a2->u32BufferFlags = v18;
    a2->pBuffer = *((_QWORD *)this - 44);
    v21 = *(_DWORD *)(*((_QWORD *)this - 49) + 164LL);
    v20 = _InterlockedCompareExchange(
            (volatile signed __int32 *)(*((_QWORD *)this - 49) + 164LL),
            v21 & 0xFFFFFFFD,
            v21);
    if ( v21 != v20 )
    {
      do
      {
        v22 = v20;
        v20 = _InterlockedCompareExchange(
                (volatile signed __int32 *)(*((_QWORD *)this - 49) + 164LL),
                v20 & 0xFFFFFFFD,
                v20);
      }
      while ( v20 != v22 );
    }
    goto LABEL_17;
  }
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), 0LL, 0LL);
  v13 = *((_QWORD *)this - 49);
  v14 = v12;
  v38 = v12;
  v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 24), 0LL, 0LL);
  v37 = v15;
  v16 = v15;
  v17 = (_QWORD *)((char *)this - 464);
  if ( v14 < 0 || v15 < 0 )
  {
    if ( (byte_1400CF981 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v13, v10, (char *)this - 464);
    _InterlockedAnd((volatile signed __int32 *)(v17[9] + 164LL), 0xFFFFFFFE);
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6B9u, -2147467259);
    v16 = v37;
    LOBYTE(v14) = v38;
    goto LABEL_12;
  }
  if ( v14 < v15 )
  {
LABEL_12:
    if ( (byte_1400CF981 & 4) != 0 )
      McTemplateU0pqxxx_EventWriteTransfer(v13, v10, (_DWORD)this - 464, 23, v14, v16, 102);
    goto LABEL_14;
  }
  v4 = v14 - v15;
  v23 = *(_DWORD *)(*((_QWORD *)this - 48) + 160LL);
  v39 = v23 + v14 % *((unsigned int *)this - 78);
  v44 = v23 + v15 % *((unsigned int *)this - 78);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 49) + 176LL), 0, 0) )
  {
    u32ValidFrameCount = a2->u32ValidFrameCount;
    if ( u32ValidFrameCount >= v4 / *((_DWORD *)this - 94) )
      u32ValidFrameCount = v4 / *((_DWORD *)this - 94);
    a2->u32ValidFrameCount = u32ValidFrameCount;
    *((_DWORD *)this + 5) = u32ValidFrameCount;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetImpl'::`2'::impl) )
  {
    if ( !*((_BYTE *)this + 85) )
      (*(void (__fastcall **)(char *, struct AE_CURRENT_POSITION *, __int64))(*v17 + 80LL))((char *)this - 464, a3, v37);
    v36 = (int *)((char *)this + 88);
  }
  else
  {
    (*(void (__fastcall **)(char *, struct AE_CURRENT_POSITION *, __int64))(*v17 + 80LL))((char *)this - 464, a3, v37);
    v36 = (int *)((char *)this + 88);
  }
  *((_DWORD *)this + 20) = 0;
  v7 = *((_DWORD *)this - 94) * u32ValidFrameCount;
  if ( v7 <= v4 )
  {
    v31 = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL) - v44;
    v42 = v31;
    if ( v7 <= v31 )
    {
      a2->pBuffer = *((_QWORD *)this - 49) + v44;
      *((_DWORD *)this + 4) = 0;
      goto LABEL_48;
    }
    v32 = v31;
    memcpy_0(*((void **)this - 44), (const void *)(v44 + *((_QWORD *)this - 49)), v31);
    memcpy_0(
      (void *)(v32 + *((_QWORD *)this - 44)),
      (const void *)(*((_QWORD *)this - 49) + *(unsigned int *)(*((_QWORD *)this - 48) + 160LL)),
      v7 - v42);
  }
  else
  {
    if ( !*((_BYTE *)this + 84) )
    {
      if ( (byte_1400CF981 & 1) != 0 )
        McTemplateU0pqqqq_EventWriteTransfer(
          v24,
          (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
          (_DWORD)this - 464,
          v39,
          v44,
          *((_DWORD *)this - 78),
          v7 - v4);
      if ( v38 > 0 )
        CCrossProcessEndpointTraceLogger::Glitch((char *)this - 264, 5LL, "CpGlitchEvent::SERVER_INPUT_STARVATION");
    }
    if ( !v4 )
    {
      *((_DWORD *)this + 20) = v7;
      goto LABEL_14;
    }
    v25 = (void *)*((_QWORD *)this - 44);
    v26 = (const void *)(*((_QWORD *)this - 49) + v44);
    v27 = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL) - v44;
    v41 = v27;
    if ( v4 <= v27 )
    {
      v29 = v4;
    }
    else
    {
      v28 = v27;
      memcpy_0(v25, v26, v27);
      v29 = v4 - v41;
      v26 = (const void *)(*((_QWORD *)this - 49) + *(unsigned int *)(*((_QWORD *)this - 48) + 160LL));
      v25 = (void *)(v28 + *((_QWORD *)this - 44));
    }
    memcpy_0(v25, v26, v29);
    v30 = 128;
    if ( *((_DWORD *)this - 90) != 8 )
      v30 = 0;
    memset_0((void *)(*((_QWORD *)this - 44) + v4), v30, v7 - v4);
    *((_DWORD *)this + 20) = v7 - v4;
  }
  a2->pBuffer = *((_QWORD *)this - 44);
  *((_DWORD *)this + 4) = 1;
LABEL_48:
  a2->u32BufferFlags = BUFFER_VALID;
  v19 = (_DWORD)this - 464;
  if ( (*((_BYTE *)this - 288) & 1) == 0 && v40 != v11 && v11 == 1 )
  {
    pBuffer = (unsigned __int8 *)a2->pBuffer;
    if ( !(unsigned int)CheckSampleForSilence(
                          pBuffer,
                          *((_DWORD *)this - 93),
                          *((_DWORD *)this - 90),
                          *((_DWORD *)this - 89)) )
    {
      ApplyVolumeRamp(
        (CCrossProcessServerInputEndpoint *)((char *)this + 92),
        pBuffer,
        u32ValidFrameCount,
        v34,
        *((_DWORD *)this - 91),
        *((_DWORD *)this - 90),
        *((_DWORD *)this - 89),
        1);
      v19 = (_DWORD)this - 464;
    }
  }
LABEL_17:
  *v36 = v11;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v7, v4, v19, 6, v7, v4, *((_DWORD *)this + 4));
}
