/*
 * XREFs of ?Remove@CHolographicFrameProcessor@@UEAAXXZ @ 0x18029FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveWin32kInteropTexture@CHolographicManager@@QEAAXPEAUIHolographicWin32kInteropTexture@@@Z @ 0x180296B94 (-RemoveWin32kInteropTexture@CHolographicManager@@QEAAXPEAUIHolographicWin32kInteropTexture@@@Z.c)
 */

void __fastcall CHolographicFrameProcessor::Remove(CHolographicFrameProcessor *this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  if ( v2 )
    CHolographicManager::RemoveWin32kInteropTexture(v2, (struct IUnknown *)this + 5);
  if ( *((_QWORD *)this + 16) )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
}
