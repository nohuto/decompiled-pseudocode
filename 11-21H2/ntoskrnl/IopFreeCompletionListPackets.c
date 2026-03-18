/*
 * XREFs of IopFreeCompletionListPackets @ 0x1406ACB64
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x140234678 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IopDropIrp @ 0x140234D58 (IopDropIrp.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x14074F700 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  while ( v1 )
  {
    v2 = (_BYTE *)v1;
    v1 = *(_QWORD *)(v1 + 8);
    if ( v2[16] )
    {
      IopFreeMiniCompletionPacket(v2);
    }
    else
    {
      v3 = v2 - 168;
      if ( (*((_DWORD *)v3 + 4) & 0x2000) != 0 )
        IopDropIrp((PIRP)v3, *((_QWORD *)v3 + 24));
      else
        IoFreeIrp((PIRP)v3);
    }
  }
}
