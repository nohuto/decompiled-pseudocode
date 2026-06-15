/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14001E050
 * Callers:
 *     <none>
 * Callees:
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140002FF4 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x14001C488 (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x140022F00 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x14002BC20 (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14008946C (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140089C70 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14008A380 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x14008B5DC (McTemplateU0pqqqq_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  int v3; // esi
  CCrossProcessServerInputEndpoint *v4; // r14
  struct AE_CURRENT_POSITION *v5; // r9
  unsigned int v8; // edi
  UINT32 u32ValidFrameCount; // r12d
  __int64 v10; // rcx
  unsigned __int32 v11; // eax
  APO_BUFFER_FLAGS v12; // ebp
  __int64 v13; // rdx
  bool v14; // zf
  int v15; // eax
  int v16; // r13d
  signed __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rax
  char v21; // di
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int v26; // r12d
  int v27; // ecx
  int v28; // r9d
  unsigned int v29; // r11d
  unsigned int v30; // ebp
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  unsigned __int8 *pBuffer; // r15
  unsigned int v34; // ebp
  unsigned int v35; // r12d
  unsigned int v36; // edx
  unsigned int v37; // r9d
  void *v38; // rcx
  const void *v39; // rdx
  unsigned int v40; // ebp
  void *v41; // rcx
  unsigned int v42; // edi
  unsigned int v43; // ecx
  int v44; // [rsp+40h] [rbp-58h]
  int v45; // [rsp+44h] [rbp-54h]
  unsigned int v46; // [rsp+A0h] [rbp+8h]
  unsigned int Size; // [rsp+A8h] [rbp+10h]
  unsigned int v49; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v4 = (CCrossProcessServerInputEndpoint *)((char *)this - 464);
  v5 = a3;
  v8 = 0;
  if ( (byte_1400C1841 & 4) != 0 )
  {
    McTemplateU0pqxxx_EventWriteTransfer(
      a2->u32ValidFrameCount,
      (_DWORD)a2,
      (_DWORD)v4,
      5,
      a2->u32ValidFrameCount,
      a2->u32BufferFlags,
      0);
    v5 = a3;
  }
  u32ValidFrameCount = a2->u32ValidFrameCount;
  v10 = *((_QWORD *)this - 49);
  v49 = u32ValidFrameCount;
  *((_DWORD *)this + 5) = u32ValidFrameCount;
  *((_DWORD *)this + 4) = 2;
  v46 = 0;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 164), 0, 0);
  v12 = BUFFER_VALID;
  v13 = v11;
  v14 = (v11 & 1) == 0;
  v15 = *((_DWORD *)this + 21);
  v44 = v15;
  if ( v14 )
  {
    v16 = 0;
    if ( (*((_BYTE *)this - 288) & 1) == 0 )
    {
LABEL_24:
      if ( (byte_1400C1841 & 4) != 0 )
      {
        McTemplateU0pqxxx_EventWriteTransfer(v10, v13, (_DWORD)v4, 23, v13, u32ValidFrameCount, 101);
        v15 = v44;
      }
      if ( v15 != v16 && !v16 )
      {
        CCrossProcessServerInputEndpoint::FillRampBuffer(v4);
        if ( u32ValidFrameCount )
        {
          v37 = *((_DWORD *)this - 93);
          if ( v37 )
            ApplyVolumeRamp(
              (CCrossProcessServerInputEndpoint *)((char *)this + 88),
              *((unsigned __int8 **)this - 44),
              u32ValidFrameCount,
              v37,
              *((_DWORD *)this - 91),
              *((_DWORD *)this - 90),
              *((_DWORD *)this - 89),
              0);
        }
        goto LABEL_28;
      }
LABEL_27:
      v12 = BUFFER_SILENT;
LABEL_28:
      a2->u32BufferFlags = v12;
      a2->pBuffer = *((_QWORD *)this - 44);
      v31 = *(_DWORD *)(*((_QWORD *)this - 49) + 164LL);
      do
      {
        v32 = v31;
        v31 = _InterlockedCompareExchange(
                (volatile signed __int32 *)(*((_QWORD *)this - 49) + 164LL),
                v31 & 0xFFFFFFFD,
                v31);
      }
      while ( v32 != v31 );
      goto LABEL_30;
    }
  }
  else
  {
    v16 = 1;
  }
  if ( !u32ValidFrameCount )
    goto LABEL_24;
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), 0LL, 0LL);
  v18 = *((_QWORD *)this - 49);
  v19 = v17;
  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), 0LL, 0LL);
  v21 = v20;
  if ( v19 < 0 )
  {
    if ( (byte_1400C1841 & 4) == 0 )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( v20 < 0 )
  {
    if ( (byte_1400C1841 & 4) == 0 )
    {
LABEL_55:
      _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v4 + 9) + 164LL), 0xFFFFFFFE);
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6B8u, -2147467259);
      goto LABEL_56;
    }
LABEL_54:
    McTemplateU0p_EventWriteTransfer(v18, v13, v4, v5);
    goto LABEL_55;
  }
  if ( v19 < v20 )
  {
LABEL_56:
    if ( (byte_1400C1841 & 4) != 0 )
      McTemplateU0pqxxx_EventWriteTransfer(v18, v13, (_DWORD)v4, 23, v19, v21, 102);
    v8 = 0;
    goto LABEL_27;
  }
  v22 = *((unsigned int *)this - 78);
  v23 = *(_DWORD *)(*((_QWORD *)this - 48) + 160LL);
  if ( v22 == 76800 )
    v24 = v19 % 76800;
  else
    v24 = v19 % v22;
  v45 = v24 + v23;
  if ( v22 == 76800 )
    v25 = v20 % 76800;
  else
    v25 = v20 % v22;
  v26 = v25 + v23;
  Size = v19 - v20;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 49) + 176LL), 0, 0) )
  {
    v43 = a2->u32ValidFrameCount;
    if ( v43 >= (unsigned int)(v19 - v20) / *((_DWORD *)this - 94) )
      v43 = (unsigned int)(v19 - v20) / *((_DWORD *)this - 94);
    a2->u32ValidFrameCount = v43;
    *((_DWORD *)this + 5) = v43;
    v49 = v43;
  }
  (*(void (__fastcall **)(CCrossProcessServerInputEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v4 + 80LL))(
    v4,
    v5,
    v20);
  v29 = v49 * *((_DWORD *)this - 94);
  v8 = Size;
  *((_DWORD *)this + 20) = 0;
  v46 = v29;
  if ( v29 > Size )
  {
    if ( (byte_1400C1841 & 1) != 0 )
    {
      McTemplateU0pqqqq_EventWriteTransfer(
        v27,
        (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
        (_DWORD)v4,
        v45,
        v26,
        *((_DWORD *)this - 78),
        v29 - Size);
      v29 = v46;
    }
    if ( v19 > 0 )
    {
      CCrossProcessEndpointTraceLogger::Glitch(
        (__int64)this - 264,
        5u,
        (__int64)"CpGlitchEvent::SERVER_INPUT_STARVATION",
        v28);
      v29 = v46;
    }
    if ( Size )
    {
      v38 = (void *)*((_QWORD *)this - 44);
      v39 = (const void *)(*((_QWORD *)this - 49) + v26);
      v40 = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL) - v26;
      if ( Size > v40 )
      {
        memcpy_0(v38, v39, v40);
        memcpy_0(
          (void *)(v40 + *((_QWORD *)this - 44)),
          (const void *)(*((_QWORD *)this - 49) + *(unsigned int *)(*((_QWORD *)this - 48) + 160LL)),
          Size - v40);
        v8 = Size;
      }
      else
      {
        memcpy_0(v38, v39, Size);
      }
      v41 = (void *)(*((_QWORD *)this - 44) + v8);
      if ( *((_DWORD *)this - 90) == 8 )
        v3 = 128;
      v42 = v46 - v8;
      memset_0(v41, v3, v42);
      *((_DWORD *)this + 20) = v42;
      goto LABEL_32;
    }
    *((_DWORD *)this + 20) = v29;
    goto LABEL_27;
  }
  v30 = *(_DWORD *)(*((_QWORD *)this - 48) + 164LL) - v26;
  if ( v29 <= v30 )
  {
    a2->pBuffer = *((_QWORD *)this - 49) + v26;
    *((_DWORD *)this + 4) = 0;
    goto LABEL_17;
  }
  memcpy_0(*((void **)this - 44), (const void *)(v26 + *((_QWORD *)this - 49)), v30);
  memcpy_0(
    (void *)(v30 + *((_QWORD *)this - 44)),
    (const void *)(*((_QWORD *)this - 49) + *(unsigned int *)(*((_QWORD *)this - 48) + 160LL)),
    v46 - v30);
LABEL_32:
  v29 = v46;
  v8 = Size;
  a2->pBuffer = *((_QWORD *)this - 44);
  *((_DWORD *)this + 4) = 1;
LABEL_17:
  a2->u32BufferFlags = BUFFER_VALID;
  if ( (*((_BYTE *)this - 288) & 1) != 0 )
    goto LABEL_19;
  if ( v44 == v16 )
    goto LABEL_19;
  if ( v16 != 1 )
    goto LABEL_19;
  pBuffer = (unsigned __int8 *)a2->pBuffer;
  v34 = *((_DWORD *)this - 89);
  v35 = *((_DWORD *)this - 90);
  if ( (unsigned int)CheckSampleForSilence(pBuffer, *((_DWORD *)this - 93), v35, v34) )
    goto LABEL_19;
  ApplyVolumeRamp(
    (CCrossProcessServerInputEndpoint *)((char *)this + 88),
    pBuffer,
    v49,
    v36,
    *((_DWORD *)this - 91),
    v35,
    v34,
    1);
LABEL_30:
  v29 = v46;
LABEL_19:
  *((_DWORD *)this + 21) = v16;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v8, v29, (_DWORD)v4, 6, v29, v8, *((_DWORD *)this + 4));
}
