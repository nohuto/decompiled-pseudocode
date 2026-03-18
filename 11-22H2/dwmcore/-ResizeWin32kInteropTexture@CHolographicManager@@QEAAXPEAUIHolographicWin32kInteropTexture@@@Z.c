/*
 * XREFs of ?ResizeWin32kInteropTexture@CHolographicManager@@QEAAXPEAUIHolographicWin32kInteropTexture@@@Z @ 0x1802A64C4
 * Callers:
 *     ?SetSize@CHolographicFrameProcessor@@UEAAJII@Z @ 0x1802AF210 (-SetSize@CHolographicFrameProcessor@@UEAAJII@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802AC48C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ResizeWin32kInteropTexture(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  CHolographicInteropTaskQueue *Ptr; // rcx

  AcquireSRWLockExclusive(this + 13);
  Ptr = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( Ptr && LOBYTE(this[30].Ptr) )
    CHolographicInteropTaskQueue::PostMessageW(Ptr, 0x21u, a2, 0LL, 0LL, 0LL, 0LL);
  ReleaseSRWLockExclusive(this + 13);
}
