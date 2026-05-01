/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___ @ 0x18013BBA4
 * Callers:
 *     ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x18013BA70 (-SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9051cf98f0ba0655adca5ac41533fb86___ @ 0x18013BC58 (Windows--Internal--ComTaskPool--QueueTask__lambda_9051cf98f0ba0655adca5ac41533fb86___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___(
        unsigned int *a1,
        __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int *v12; // [rsp+60h] [rbp+8h] BYREF

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
    v12 = a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v8[0] = (__int64)a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v8[1] = (__int64)a1;
    v9 = *a2;
    v10 = *((_QWORD *)a2 + 2);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_9051cf98f0ba0655adca5ac41533fb86___(v5, v4, a1[12], v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
    if ( v6 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    return (unsigned int)v6;
  }
}
