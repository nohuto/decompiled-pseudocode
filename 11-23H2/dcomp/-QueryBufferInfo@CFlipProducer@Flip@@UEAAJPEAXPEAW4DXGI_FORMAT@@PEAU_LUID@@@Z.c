/*
 * XREFs of ?QueryBufferInfo@CFlipProducer@Flip@@UEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z @ 0x1801AA9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?QueryBufferInfo@CSynchronizationContext@Flip@@QEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z @ 0x1801AC4F0 (-QueryBufferInfo@CSynchronizationContext@Flip@@QEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::QueryBufferInfo(
        Flip::CSynchronizationContext **this,
        void *a2,
        enum DXGI_FORMAT *a3,
        struct _LUID *a4)
{
  int BufferInfo; // eax
  unsigned int v5; // ebx

  BufferInfo = Flip::CSynchronizationContext::QueryBufferInfo(this[11], a2, a3, a4);
  v5 = BufferInfo;
  if ( BufferInfo < 0 )
    DoStackCaptureDirect(BufferInfo, 0x121u);
  return v5;
}
