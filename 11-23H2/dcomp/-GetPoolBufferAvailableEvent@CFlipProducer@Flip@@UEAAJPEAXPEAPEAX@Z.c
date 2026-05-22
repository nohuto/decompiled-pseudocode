/*
 * XREFs of ?GetPoolBufferAvailableEvent@CFlipProducer@Flip@@UEAAJPEAXPEAPEAX@Z @ 0x1801AA690
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?FindPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXPEA_K@Z @ 0x1800B830A (-FindPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXPEA_K@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::GetPoolBufferAvailableEvent(Flip::CFlipProducer *this, void *a2, void **a3)
{
  int PoolBuffer; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  PoolBuffer = Flip::CFlipBufferPool::FindPoolBuffer((Flip::CFlipProducer *)((char *)this + 40), a2, &v10);
  v6 = PoolBuffer;
  if ( PoolBuffer < 0 )
  {
    v8 = 173;
    goto LABEL_5;
  }
  v7 = NtFlipObjectQueryBufferAvailableEvent(*((_QWORD *)this + 3), &v10, a3);
  PoolBuffer = HRESULTFromNTSTATUS(v7);
  v6 = PoolBuffer;
  if ( PoolBuffer < 0 )
  {
    v8 = 179;
LABEL_5:
    DoStackCaptureDirect(PoolBuffer, v8);
  }
  return v6;
}
