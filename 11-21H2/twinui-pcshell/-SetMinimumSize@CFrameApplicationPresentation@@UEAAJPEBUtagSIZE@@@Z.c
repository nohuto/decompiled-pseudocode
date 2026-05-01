/*
 * XREFs of ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x18006CD80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d59b2ed99ba916e2db13f1aaa48dcee4___ @ 0x18006D2C8 (Windows--Internal--ComTaskPool--QueueTask__lambda_d59b2ed99ba916e2db13f1aaa48dcee4___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetMinimumSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  bool v2; // zf
  __int64 cx; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct tagSIZE *v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = this[7].cx == 2;
  this[19] = *a2;
  if ( v2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x821,
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
    cx = (unsigned int)this[6].cx;
    v9[1] = (__int64)this;
    v9[2] = (__int64)this;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d59b2ed99ba916e2db13f1aaa48dcee4___(v6, v5, cx, v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
    if ( v7 >= 0 )
      ++this[26].cy;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  }
  return (unsigned int)v7;
}
