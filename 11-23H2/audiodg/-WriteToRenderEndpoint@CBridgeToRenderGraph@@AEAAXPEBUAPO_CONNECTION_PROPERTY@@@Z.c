/*
 * XREFs of ?WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14007A594
 * Callers:
 *     ?OnAudioPacket@CBridgeToRenderGraph@@UEAAXPEBUAE_CURRENT_POSITION@@PEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140039690 (-OnAudioPacket@CBridgeToRenderGraph@@UEAAXPEBUAE_CURRENT_POSITION@@PEBUAPO_CONNECTION_PROPERTY@@.c)
 *     ?WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14007A594 (-WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14007A594 (-WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 */

void __fastcall CBridgeToRenderGraph::WriteToRenderEndpoint(
        CBridgeToRenderGraph *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  UINT32 v4; // eax
  int v5; // edx
  UINT32 u32ValidFrameCount; // r8d
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  void *v10; // rax
  UINT_PTR v11; // rsi
  __int64 v12; // rcx
  void *v13; // rax
  UINT_PTR v14; // rsi
  __int64 v15; // rcx
  APO_CONNECTION_PROPERTY v16; // [rsp+20h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    v4 = *((_DWORD *)this + 21);
    v16.pBuffer = 0LL;
    v16.u32ValidFrameCount = v4;
    v16.u32BufferFlags = BUFFER_SILENT;
    v16.u32Signature = 1094930515;
    *((_BYTE *)this + 80) = 1;
    CBridgeToRenderGraph::WriteToRenderEndpoint(this, &v16);
  }
  if ( *((_BYTE *)this + 81) )
  {
    v5 = *((_DWORD *)this + 19);
    u32ValidFrameCount = a2->u32ValidFrameCount;
    if ( u32ValidFrameCount + v5 < *((_DWORD *)this + 18) )
    {
      if ( a2->u32BufferFlags == BUFFER_VALID )
      {
        v8 = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL);
        memcpy_0(
          (void *)(*((_QWORD *)this + 8) + (unsigned int)(v5 * v8)),
          (const void *)a2->pBuffer,
          v8 * u32ValidFrameCount);
      }
      else if ( a2->u32BufferFlags == BUFFER_SILENT )
      {
        v7 = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL);
        memset_0((void *)(*((_QWORD *)this + 8) + (unsigned int)(v5 * v7)), 0, v7 * u32ValidFrameCount);
      }
      *((_DWORD *)this + 19) += a2->u32ValidFrameCount;
      return;
    }
    *((_BYTE *)this + 81) = 0;
  }
  v9 = *((unsigned int *)this + 19);
  if ( (_DWORD)v9 )
  {
    v10 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 6) + 24LL))(
                    *((_QWORD *)this + 6),
                    v9,
                    0LL);
    v11 = (UINT_PTR)v10;
    if ( v10 )
    {
      memcpy_0(
        v10,
        *((const void **)this + 8),
        *((_DWORD *)this + 19) * (unsigned int)*(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL));
      v16.u32ValidFrameCount = *((_DWORD *)this + 19);
      v12 = *((_QWORD *)this + 6);
      v16.u32BufferFlags = BUFFER_VALID;
      v16.pBuffer = v11;
      v16.u32Signature = 1094930515;
      (*(void (__fastcall **)(__int64, APO_CONNECTION_PROPERTY *))(*(_QWORD *)v12 + 32LL))(v12, &v16);
      *((_DWORD *)this + 19) = 0;
    }
  }
  v13 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 6) + 24LL))(
                  *((_QWORD *)this + 6),
                  a2->u32ValidFrameCount,
                  0LL);
  v14 = (UINT_PTR)v13;
  if ( v13 )
  {
    if ( a2->pBuffer )
      memcpy_0(
        v13,
        (const void *)a2->pBuffer,
        a2->u32ValidFrameCount * *(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL));
    v15 = *((_QWORD *)this + 6);
    v16.u32ValidFrameCount = a2->u32ValidFrameCount;
    v16.u32BufferFlags = a2->u32BufferFlags;
    v16.pBuffer = v14;
    v16.u32Signature = 1094930515;
    (*(void (__fastcall **)(__int64, APO_CONNECTION_PROPERTY *))(*(_QWORD *)v15 + 32LL))(v15, &v16);
  }
}
