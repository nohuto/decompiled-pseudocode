/*
 * XREFs of ?FindPoolBufferInternal@CFlipBufferPool@Flip@@AEAAXPEAXPEAPEBUPoolBufferEntry@12@PEAI@Z @ 0x1800B835E
 * Callers:
 *     ?FindPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXPEA_K@Z @ 0x1800B830A (-FindPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXPEA_K@Z.c)
 *     ?RemovePoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAX@Z @ 0x1801AC720 (-RemovePoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Flip::CFlipBufferPool::FindPoolBufferInternal(
        Flip::CFlipBufferPool *this,
        void *a2,
        const struct Flip::CFlipBufferPool::PoolBufferEntry **a3,
        unsigned int *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r10d
  __int64 v6; // r11
  const struct Flip::CFlipBufferPool::PoolBufferEntry *v7; // rcx

  *a3 = 0LL;
  v4 = 0;
  v5 = *((_DWORD *)this + 8);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 1);
    while ( 1 )
    {
      v7 = (const struct Flip::CFlipBufferPool::PoolBufferEntry *)(v6 + 16LL * v4);
      if ( a2 == *(void **)v7 )
        break;
      if ( ++v4 >= v5 )
        return;
    }
    *a3 = v7;
    if ( a4 )
      *a4 = v4;
  }
}
