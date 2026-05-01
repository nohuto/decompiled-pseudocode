/*
 * XREFs of ?SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z @ 0x1800266B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___ @ 0x180025D68 (Windows--Internal--ComTaskPool--QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetPreferredAspectRatioHint(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CFrameApplicationPresentation *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 14) == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v9[0]);
  }
  else
  {
    v11 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v9[0] = (__int64)this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v4 = *((_DWORD *)this + 12);
    v9[1] = (__int64)this;
    v9[2] = (__int64)this;
    v9[3] = (__int64)a2;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___(v6, v5, v4, v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
    if ( v7 >= 0 )
      ++*((_DWORD *)this + 53);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  }
  return (unsigned int)v7;
}
