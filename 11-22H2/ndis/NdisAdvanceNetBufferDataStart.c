/*
 * XREFs of NdisAdvanceNetBufferDataStart @ 0x1C0005B30
 * Callers:
 *     NdisAdvanceNetBufferListDataStart @ 0x1C00400D0 (NdisAdvanceNetBufferListDataStart.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C0040150 (NdisRetreatNetBufferListDataStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisAdvanceNetBufferDataStart(
        PNET_BUFFER NetBuffer,
        ULONG DataOffsetDelta,
        BOOLEAN FreeMdl,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  NET_BUFFER_FREE_MDL_HANDLER v5; // rdi
  struct _NET_BUFFER *MdlChain; // rcx
  _MDL *CurrentMdl; // rax
  unsigned int i; // ecx
  ULONG ByteCount; // edx
  unsigned __int64 v10; // rdx
  struct _NET_BUFFER *v11; // rax
  unsigned int DataOffset; // r8d
  unsigned int v13; // eax

  NetBuffer->DataOffset += DataOffsetDelta;
  NetBuffer->DataLength -= DataOffsetDelta;
  v5 = FreeMdlHandler;
  MdlChain = (struct _NET_BUFFER *)NetBuffer->MdlChain;
  if ( !FreeMdlHandler )
    v5 = ndisFreeMdlInternal;
  if ( FreeMdl )
  {
    v10 = (unsigned __int64)MdlChain;
    if ( MdlChain )
    {
      v11 = MdlChain;
      do
      {
        DataOffset = NetBuffer->DataOffset;
        v10 = (unsigned __int64)v11;
        if ( MdlChain->DataOffset > DataOffset )
          break;
        if ( MdlChain == &NetBuffer[1] )
          break;
        NetBuffer->MdlChain = (_MDL *)MdlChain->Link.Alignment;
        NetBuffer->DataOffset = DataOffset - MdlChain->DataOffset;
        ((void (__fastcall *)(struct _NET_BUFFER *, struct _NET_BUFFER *))v5)(MdlChain, v11);
        MdlChain = (struct _NET_BUFFER *)NetBuffer->MdlChain;
        v11 = MdlChain;
        v10 = (unsigned __int64)MdlChain;
      }
      while ( MdlChain );
    }
    v13 = NetBuffer->DataOffset;
    NetBuffer->Link.Region = v10;
    NetBuffer->CurrentMdlOffset = v13;
  }
  else
  {
    CurrentMdl = NetBuffer->CurrentMdl;
    for ( i = DataOffsetDelta + NetBuffer->CurrentMdlOffset; CurrentMdl; i -= ByteCount )
    {
      ByteCount = CurrentMdl->ByteCount;
      if ( ByteCount > i )
        break;
      CurrentMdl = CurrentMdl->Next;
    }
    NetBuffer->Link.Region = (unsigned __int64)CurrentMdl;
    NetBuffer->CurrentMdlOffset = i;
  }
}
