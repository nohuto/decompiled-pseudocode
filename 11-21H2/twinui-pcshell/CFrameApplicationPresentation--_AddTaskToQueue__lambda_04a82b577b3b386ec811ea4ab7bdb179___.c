/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___ @ 0x180142FC0
 * Callers:
 *     ?SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z @ 0x180142F90 (-SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___ @ 0x180143068 (Windows--Internal--ComTaskPool--QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___(
        unsigned int *a1,
        __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x821,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v11 = a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v8[0] = (__int64)a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v8[1] = (__int64)a1;
    v9 = *a2;
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___(v5, v4, a1[12], v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
    if ( v6 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
    return (unsigned int)v6;
  }
}
