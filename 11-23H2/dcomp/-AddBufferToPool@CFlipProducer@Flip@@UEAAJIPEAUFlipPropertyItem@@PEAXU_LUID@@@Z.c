/*
 * XREFs of ?AddBufferToPool@CFlipProducer@Flip@@UEAAJIPEAUFlipPropertyItem@@PEAXU_LUID@@@Z @ 0x1801AA2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InsertPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXU_LUID@@IPEAUFlipPropertyItem@@@Z @ 0x1801AC5FC (-InsertPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXU_LUID@@IPEAUFlipPropertyItem@@@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::AddBufferToPool(
        Flip::CFlipProducer *this,
        unsigned int a2,
        struct FlipPropertyItem *a3,
        void *a4,
        struct _LUID a5)
{
  int inserted; // eax
  unsigned int v6; // ebx

  inserted = Flip::CFlipBufferPool::InsertPoolBuffer((Flip::CFlipProducer *)((char *)this + 40), a4, a5, a2, a3);
  v6 = inserted;
  if ( inserted < 0 )
    DoStackCaptureDirect(inserted, 0x92u);
  return v6;
}
