/*
 * XREFs of ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007B978
 * Callers:
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C007BBEC (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007D264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 */

__int64 __fastcall FlipManagerObject::CreatePresentUpdateForProducer(
        FlipManagerObject *this,
        bool a2,
        unsigned __int64 a3,
        struct CFlipPropertySet *a4,
        struct CFlipPresentUpdate **a5,
        struct FlipManagerTokenIFlipInfo **a6)
{
  int PresentUpdateForProducer; // ebx

  PresentUpdateForProducer = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( PresentUpdateForProducer >= 0 )
  {
    PresentUpdateForProducer = CFlipManager::CreatePresentUpdateForProducer(
                                 (FlipManagerObject *)((char *)this + 32),
                                 a2,
                                 a3,
                                 a4,
                                 a5,
                                 a6);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)PresentUpdateForProducer;
}
