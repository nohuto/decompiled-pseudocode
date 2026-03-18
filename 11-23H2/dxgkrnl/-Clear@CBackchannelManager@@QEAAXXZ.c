/*
 * XREFs of ?Clear@CBackchannelManager@@QEAAXXZ @ 0x1C00880E8
 * Callers:
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0084DD8 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ??1CBackchannelManager@@UEAA@XZ @ 0x1C00880B0 (--1CBackchannelManager@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C0080304 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C0088138 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 */

void __fastcall CBackchannelManager::Clear(CBackchannelManager *this)
{
  _QWORD *v2; // rdi
  CFlipPropertySetBase *v3; // rax

  v2 = (_QWORD *)((char *)this + 8);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (CFlipPropertySetBase *)CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(v2);
    CFlipPropertySetBase::Release(v3);
  }
  *((_DWORD *)this + 6) = 0;
  KeResetEvent(*((PRKEVENT *)this + 4));
}
