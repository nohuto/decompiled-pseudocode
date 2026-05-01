/*
 * XREFs of ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18000B6DC
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18000D7F4 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d2fa7908b891c12cbb1669318d2d4613__&_ @ 0x18000B778 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_d2fa7908b891c12cbb1669318d2d4613__-_.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(
        CFrameApplicationPresentation *this)
{
  int DWORD; // eax
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  CFrameApplicationPresentation *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( dword_18098BB44 == -1 )
  {
    DWORD = SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
              L"SuppressedSplashScreenTimeout",
              &dword_18098BB44);
    v3 = dword_18098BB44;
    if ( DWORD < 0 )
      v3 = 400;
    dword_18098BB44 = v3;
  }
  v10 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
  v9[0] = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  v9[1] = this;
  v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d2fa7908b891c12cbb1669318d2d4613____(v5, v4, v6, v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v7;
}
