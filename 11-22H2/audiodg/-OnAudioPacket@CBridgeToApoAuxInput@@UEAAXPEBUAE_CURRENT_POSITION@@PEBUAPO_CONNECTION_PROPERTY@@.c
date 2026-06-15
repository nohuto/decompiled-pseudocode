/*
 * XREFs of ?OnAudioPacket@CBridgeToApoAuxInput@@UEAAXPEBUAE_CURRENT_POSITION@@PEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140037EC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

void __fastcall CBridgeToApoAuxInput::OnAudioPacket(
        CBridgeToApoAuxInput *this,
        const struct AE_CURRENT_POSITION *a2,
        const struct APO_CONNECTION_PROPERTY *a3)
{
  UINT32 v3; // eax

  v3 = *((_DWORD *)this + 11);
  if ( v3 == 1094930482 || v3 == 1094930505 )
  {
    a3->u32Signature = v3;
    a3[1].pBuffer = a2->hnsQPCPosition;
  }
  if ( a3->u32BufferFlags == BUFFER_SILENT )
    memset_0((void *)a3->pBuffer, 0, a3->u32ValidFrameCount * *(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL));
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct APO_CONNECTION_PROPERTY *))(**((_QWORD **)this + 4) + 24LL))(
    *((_QWORD *)this + 4),
    *((unsigned int *)this + 10),
    a3);
}
