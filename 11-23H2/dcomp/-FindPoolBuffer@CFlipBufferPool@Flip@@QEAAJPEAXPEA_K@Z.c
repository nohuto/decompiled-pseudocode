/*
 * XREFs of ?FindPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXPEA_K@Z @ 0x1800B830A
 * Callers:
 *     ?GetPoolBufferAvailableEvent@CFlipProducer@Flip@@UEAAJPEAXPEAPEAX@Z @ 0x1801AA690 (-GetPoolBufferAvailableEvent@CFlipProducer@Flip@@UEAAJPEAXPEAPEAX@Z.c)
 *     ?UpdateBufferAndProperties@CFlipContent@Flip@@UEAAJPEAXIPEAUFlipPropertyItem@@@Z @ 0x1801AC1A0 (-UpdateBufferAndProperties@CFlipContent@Flip@@UEAAJPEAXIPEAUFlipPropertyItem@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?FindPoolBufferInternal@CFlipBufferPool@Flip@@AEAAXPEAXPEAPEBUPoolBufferEntry@12@PEAI@Z @ 0x1800B835E (-FindPoolBufferInternal@CFlipBufferPool@Flip@@AEAAXPEAXPEAPEBUPoolBufferEntry@12@PEAI@Z.c)
 */

__int64 __fastcall Flip::CFlipBufferPool::FindPoolBuffer(Flip::CFlipBufferPool *this, void *a2, unsigned __int64 *a3)
{
  unsigned int v4; // ebx
  int v5; // r9d
  struct Flip::CFlipBufferPool::PoolBufferEntry *v7; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  Flip::CFlipBufferPool::FindPoolBufferInternal(this, a2, &v7, 0LL);
  if ( v7 )
  {
    *a3 = *((_QWORD *)v7 + 1);
  }
  else
  {
    v4 = -2147024809;
    DoStackCaptureDirect(-2147024809, v5 + 91);
  }
  return v4;
}
