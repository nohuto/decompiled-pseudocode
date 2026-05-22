/*
 * XREFs of ?UpdateBufferAndProperties@CFlipContent@Flip@@UEAAJPEAXIPEAUFlipPropertyItem@@@Z @ 0x1801AC1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?FindPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXPEA_K@Z @ 0x1800B830A (-FindPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXPEA_K@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipContent::UpdateBufferAndProperties(
        Flip::CFlipContent *this,
        void *a2,
        unsigned int a3,
        struct FlipPropertyItem *a4)
{
  int PoolBuffer; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // edx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  PoolBuffer = Flip::CFlipBufferPool::FindPoolBuffer((Flip::CFlipBufferPool *)(*((_QWORD *)this + 3) + 40LL), a2, &v12);
  v8 = PoolBuffer;
  if ( PoolBuffer < 0 )
  {
    v10 = 77;
    goto LABEL_5;
  }
  v9 = NtFlipObjectSetContent(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL), (char *)this + 16, &v12, a3, a4);
  PoolBuffer = HRESULTFromNTSTATUS(v9);
  v8 = PoolBuffer;
  if ( PoolBuffer < 0 )
  {
    v10 = 84;
LABEL_5:
    DoStackCaptureDirect(PoolBuffer, v10);
  }
  return v8;
}
