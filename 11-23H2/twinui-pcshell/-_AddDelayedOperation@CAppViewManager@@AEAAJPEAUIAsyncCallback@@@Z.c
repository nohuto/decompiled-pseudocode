/*
 * XREFs of ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1803B5374
 * Callers:
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x1803B51E0 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z.c)
 *     ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x1803B7D88 (-_ProcessNextOperation@CAppViewManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_AddDelayedOperation(CAppViewManager *this, struct IAsyncCallback *a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, struct IAsyncCallback *))(*(_QWORD *)v6 + 128LL))(v6, a2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return (unsigned int)v4;
}
