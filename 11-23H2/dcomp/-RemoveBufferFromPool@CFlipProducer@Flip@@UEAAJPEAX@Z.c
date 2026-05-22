/*
 * XREFs of ?RemoveBufferFromPool@CFlipProducer@Flip@@UEAAJPEAX@Z @ 0x1801AAB00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?RemovePoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAX@Z @ 0x1801AC720 (-RemovePoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::RemoveBufferFromPool(Flip::CFlipProducer *this, void *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = Flip::CFlipBufferPool::RemovePoolBuffer((Flip::CFlipProducer *)((char *)this + 40), a2);
  v3 = v2;
  if ( v2 < 0 )
    DoStackCaptureDirect(v2, 0x9Eu);
  return v3;
}
