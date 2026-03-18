/*
 * XREFs of ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C007A0C0
 * Callers:
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C007B410 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C007B500 (NtFlipObjectReadNextMessageToProducer.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C0080EA8 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 */

__int64 __fastcall FlipManagerObject::QueryNextMessageToProducer(
        FlipManagerObject *this,
        char a2,
        struct CFlipConsumerMessage **a3)
{
  int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // rcx
  struct CFlipConsumerMessage *v9; // rcx
  __int64 v10; // r10
  _QWORD *v11; // r9

  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    v7 = *((_QWORD *)this + 32);
    v6 = 0;
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 == v7 + 8 )
    {
      v6 = -1073741823;
    }
    else
    {
      v9 = (struct CFlipConsumerMessage *)((v8 - 48) & -(__int64)(v8 != 0));
      *a3 = v9;
      if ( a2 )
      {
        CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(v7 + 8);
        --*(_DWORD *)(v10 + 24);
        if ( (_QWORD *)*v11 == v11 )
          KeResetEvent(*(PRKEVENT *)(v10 + 32));
      }
      else
      {
        ++*((_DWORD *)v9 + 2);
      }
    }
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v6;
}
