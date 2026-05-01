/*
 * XREFs of _lambda_ea9241ebdeba2d86efd1d019ab7a7d43_::operator() @ 0x1803D4E38
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ea9241ebdeba2d86efd1d019ab7a7d43___::Run @ 0x1803DB6F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ea9241ebdeba2d86efd1d019ab7a7d43___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1803D4328 (--0Iterator@-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Micros.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803D7F6C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEven.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_ea9241ebdeba2d86efd1d019ab7a7d43_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10[2]; // [rsp+38h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v14; // [rsp+70h] [rbp+10h] BYREF

  v7 = *(_QWORD *)a1;
  v2 = v7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
  v8 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v3);
  details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::Iterator::Iterator(
    (__int64)&v9,
    (__int64)&v7,
    0);
  details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::Iterator::Iterator(
    (__int64)&v11,
    (__int64)&v7,
    v8);
  while ( v9 != v11 || v10[1] != v12[1] )
  {
    v5 = v10[0];
    v14 = v10[0];
    if ( v10[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10[0] + 8LL))(v10[0]);
    LOBYTE(v4) = *(_BYTE *)(a1 + 8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    ++v9;
    details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::Iterator::GetCurrentObject(&v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
}
