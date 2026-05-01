/*
 * XREFs of ??1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x1804B39C4
 * Callers:
 *     ??_GSnapAssistViewInvocationAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804B4F50 (--_GSnapAssistViewInvocationAnimationCoordinator@@UEAAPEAXI@Z.c)
 *     ??_GSnapAssistViewDismissalAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804B54C0 (--_GSnapAssistViewDismissalAnimationCoordinator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall MultitaskingViewAnimationCoordinatorBase::~MultitaskingViewAnimationCoordinatorBase(
        MultitaskingViewAnimationCoordinatorBase *this)
{
  char *v2; // rcx
  unsigned int i; // esi
  __int64 *v4; // rbx
  __int64 v5; // rax

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 12);
  v2 = (char *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    {
      v2 = (char *)*((_QWORD *)this + 11);
      v4 = (__int64 *)&v2[32 * i];
      if ( *(_DWORD *)v4 == 1 )
      {
        *(_DWORD *)v4 = 2;
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v4 + 3);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4 + 2);
        ++*((_DWORD *)this + 20);
        --*((_DWORD *)this + 18);
        v2 = (char *)*((_QWORD *)this + 11);
      }
    }
    LocalFree(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 4);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    *(_QWORD *)(v5 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
}
