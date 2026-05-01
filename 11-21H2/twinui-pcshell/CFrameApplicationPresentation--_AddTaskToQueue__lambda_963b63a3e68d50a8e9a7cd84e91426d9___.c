/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___ @ 0x18006D004
 * Callers:
 *     ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x18006CE10 (-SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___ @ 0x18006D354 (Windows--Internal--ComTaskPool--QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___(
        unsigned int *a1,
        __int128 *a2)
{
  __int64 v4; // r8
  __int64 v5; // xmm1_8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int *v14; // [rsp+60h] [rbp+8h] BYREF

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x821,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v10[0]);
    return 2147947423LL;
  }
  else
  {
    v14 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v10[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v4 = a1[12];
    v5 = *((_QWORD *)a2 + 2);
    v11 = *a2;
    v10[1] = (__int64)a1;
    v12 = v5;
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___(v7, v6, v4, v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
    if ( v8 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
    return (unsigned int)v8;
  }
}
