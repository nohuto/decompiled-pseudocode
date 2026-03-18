/*
 * XREFs of ?Remove@CHolographicFrameProcessor@@UEAAXXZ @ 0x1802AEBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveWin32kInteropTexture@CHolographicManager@@QEAAXPEAUIHolographicWin32kInteropTexture@@@Z @ 0x1802A5E58 (-RemoveWin32kInteropTexture@CHolographicManager@@QEAAXPEAUIHolographicWin32kInteropTexture@@@Z.c)
 */

void __fastcall CHolographicFrameProcessor::Remove(CHolographicFrameProcessor *this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  if ( v2 )
    CHolographicManager::RemoveWin32kInteropTexture(
      v2,
      (struct IUnknown *)(((unsigned __int64)this + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  if ( *((_QWORD *)this + 16) )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
}
