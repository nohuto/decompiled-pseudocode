/*
 * XREFs of _lambda_5dc897b16d2ec62a0cb4f80858627a7d_::operator() @ 0x18002A810
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5dc897b16d2ec62a0cb4f80858627a7d___::Run @ 0x18002A800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5dc897b16d2ec62a0cb4f80858627a7d___--Run.c)
 * Callees:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V?$ComPtr@UIMultitaskingViewVisibilityNotification@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18002A950 (--0Iterator@-$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V-$ComPtr@UIMulti.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V?$ComPtr@UIMultitaskingViewVisibilityNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18002A980 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V-.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_5dc897b16d2ec62a0cb4f80858627a7d_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v13[8]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v16; // [rsp+70h] [rbp+10h] BYREF

  v8 = *a1;
  v2 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  v9 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 24LL))(v2, &v9);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v3,
      v8);
  details::ObjectArrayAdapterImpl<IMultitaskingViewVisibilityNotification,Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityNotification>>::Iterator::Iterator(
    &v10,
    &v8,
    0LL);
  details::ObjectArrayAdapterImpl<IMultitaskingViewVisibilityNotification,Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityNotification>>::Iterator::Iterator(
    &v12,
    &v8,
    v9);
  while ( v10 != v12 || v11[1] != v14 )
  {
    v4 = (__int64 *)v11[0];
    v16 = v11[0];
    if ( v11[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 8LL))(v11[0]);
    v5 = *((unsigned int *)a1 + 2);
    v6 = *v4;
    if ( *((_BYTE *)a1 + 12) )
      (*(void (__fastcall **)(__int64 *, __int64))(v6 + 24))(v4, v5);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v6 + 32))(v4, v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    ++v10;
    details::ObjectArrayAdapterImpl<IMultitaskingViewVisibilityNotification,Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityNotification>>::Iterator::GetCurrentObject(&v10);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
}
