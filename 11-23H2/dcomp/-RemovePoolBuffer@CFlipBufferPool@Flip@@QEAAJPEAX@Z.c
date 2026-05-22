/*
 * XREFs of ?RemovePoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAX@Z @ 0x1801AC720
 * Callers:
 *     ?RemoveBufferFromPool@CFlipProducer@Flip@@UEAAJPEAX@Z @ 0x1801AAB00 (-RemoveBufferFromPool@CFlipProducer@Flip@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?FindPoolBufferInternal@CFlipBufferPool@Flip@@AEAAXPEAXPEAPEBUPoolBufferEntry@12@PEAI@Z @ 0x1800B835E (-FindPoolBufferInternal@CFlipBufferPool@Flip@@AEAAXPEAXPEAPEBUPoolBufferEntry@12@PEAI@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipBufferPool::RemovePoolBuffer(Flip::CFlipBufferPool *this, void *a2)
{
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rcx
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF
  struct Flip::CFlipBufferPool::PoolBufferEntry *v12; // [rsp+48h] [rbp+20h] BYREF

  Flip::CFlipBufferPool::FindPoolBufferInternal(this, a2, &v12, &v11);
  if ( !v12 )
  {
    v3 = -2147024809;
    v4 = 65;
    v5 = -2147024809;
LABEL_10:
    DoStackCaptureDirect(v3, v4);
    return v5;
  }
  v6 = NtFlipObjectRemovePoolBuffer(*(_QWORD *)(*(_QWORD *)this + 24LL), (char *)v12 + 8);
  v7 = HRESULTFromNTSTATUS(v6);
  v5 = v7;
  if ( v7 < 0 )
  {
    v4 = 70;
    v3 = v7;
    goto LABEL_10;
  }
  v8 = *((_DWORD *)this + 8);
  if ( v11 >= v8 )
  {
    v4 = 543;
    v3 = -2147024809;
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( v11 < (unsigned int)v9 )
    *(_OWORD *)(*((_QWORD *)this + 1) + 16LL * v11) = *(_OWORD *)(*((_QWORD *)this + 1) + 16 * v9);
  --*((_DWORD *)this + 8);
  return v5;
}
