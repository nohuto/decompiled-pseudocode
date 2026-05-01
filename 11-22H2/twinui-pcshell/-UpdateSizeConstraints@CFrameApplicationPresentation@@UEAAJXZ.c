/*
 * XREFs of ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180020A90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___ @ 0x180020B94 (Windows--Internal--ComTaskPool--QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::UpdateSizeConstraints(CFrameApplicationPresentation *this)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edi
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CFrameApplicationPresentation *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 14) == 2 )
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v7[0]);
  }
  else
  {
    v9 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    v7[0] = (__int64)this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
    v2 = *((unsigned int *)this + 12);
    v7[1] = (__int64)this;
    v7[2] = (__int64)this;
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___(v4, v3, v2, v7);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
    if ( v5 >= 0 )
      ++*((_DWORD *)this + 53);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  }
  return (unsigned int)v5;
}
