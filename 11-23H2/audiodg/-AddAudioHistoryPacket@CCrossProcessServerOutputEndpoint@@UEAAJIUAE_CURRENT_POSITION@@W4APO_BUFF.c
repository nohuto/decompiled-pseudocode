/*
 * XREFs of ?AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@_K@Z @ 0x1400986B0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140039E8A (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pqqx_EventWriteTransfer @ 0x1400989EC (McTemplateU0pqqx_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::AddAudioHistoryPacket(
        CCrossProcessServerOutputEndpoint *this,
        int a2,
        struct AE_CURRENT_POSITION *a3,
        enum APO_BUFFER_FLAGS a4,
        void *Src)
{
  char *v5; // rdi
  __int64 v10; // rbp
  unsigned int v11; // r14d
  unsigned int v12; // esi
  CCrossProcessBaseEndpoint *v13; // rcx
  __int64 v14; // rdx
  int v16; // edx
  unsigned int v17; // esi
  unsigned int v18; // r14d
  void *v19; // rcx
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (char *)this - 408;
  if ( *(_DWORD *)(*((_QWORD *)this - 52) + 180LL) == -1 )
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 52) + 180LL), *(_DWORD *)(*(_QWORD *)v5 + 168LL));
  v10 = *(unsigned int *)(*((_QWORD *)this - 52) + 188LL);
  v11 = *(_DWORD *)(*((_QWORD *)this - 52) + 184LL);
  v12 = *(_DWORD *)(*(_QWORD *)v5 + 148LL);
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex(this, *(_DWORD *)(*((_QWORD *)this - 52) + 188LL), v12) )
  {
    v14 = 788LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpserveroutputendpoint.cpp",
      (const char *)0x887C0045LL);
    return 2289827909LL;
  }
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex(v13, v11, v12) )
  {
    v14 = 789LL;
    goto LABEL_5;
  }
  if ( (_DWORD)v10 )
    v17 = *(_DWORD *)(((unsigned __int64)(unsigned int)(v10 - 1) << 6) + *((_QWORD *)this - 45) + 4)
        + *((_DWORD *)this - 100)
        * *(_DWORD *)(((unsigned __int64)(unsigned int)(v10 - 1) << 6) + *((_QWORD *)this - 45) + 56);
  else
    v17 = *(_DWORD *)(*(_QWORD *)v5 + 172LL);
  v18 = *((_DWORD *)this - 100) * a2;
  if ( v18 + v17 <= *(_DWORD *)(*(_QWORD *)v5 + 176LL) && a4 )
  {
    if ( (byte_1400CF981 & 4) != 0 )
      McTemplateU0pqqx_EventWriteTransfer(v18 + v17, v16, (_DWORD)this - 488, a2, a4, a3->hnsQPCPosition);
    v19 = (void *)(*((_QWORD *)this - 52) + v17);
    if ( a4 == BUFFER_SILENT )
      memset_0(v19, 0, v18);
    else
      memcpy_0(v19, Src, v18);
    v20 = *(_OWORD *)&a3->u64DevicePosition;
    v21 = v10 << 6;
    v22 = *(_OWORD *)&a3->u64PaddingFrames;
    *(_DWORD *)(v21 + *((_QWORD *)this - 45)) = 1;
    *(_DWORD *)(*((_QWORD *)this - 45) + v21 + 4) = v17;
    *(_DWORD *)(*((_QWORD *)this - 45) + v21 + 56) = a2;
    v23 = *((_QWORD *)this - 45);
    *(_OWORD *)(v23 + v21 + 16) = v20;
    *(_QWORD *)&v20 = *(_QWORD *)&a3->f32FramesPerSecond;
    *(_OWORD *)(v23 + v21 + 32) = v22;
    *(_QWORD *)(v23 + v21 + 48) = v20;
    *(_DWORD *)(*((_QWORD *)this - 45) + v21 + 8) = a4;
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 52) + 188LL), v10 + 1);
  }
  return 0LL;
}
