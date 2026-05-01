/*
 * XREFs of _lambda_24ec9e02e088ddd9b3320f3956162b55_::operator() @ 0x180591F90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___::Run @ 0x180595A20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowSnappingEvents@@V?$ComPtr@UIWindowSnappingEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180591854 (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowSnappingEvents@@V-$ComPtr@UIWindowSnappingEvents@@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowSnappingEvents@@V?$ComPtr@UIWindowSnappingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1805933C0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowSnappingEvents@@V-$ComPtr@UIWindowSn.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_24ec9e02e088ddd9b3320f3956162b55_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+28h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9[2]; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v13; // [rsp+70h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v2 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v3);
  details::ObjectArrayAdapterImpl<IWindowSnappingEvents,Microsoft::WRL::ComPtr<IWindowSnappingEvents>>::Iterator::Iterator(
    (__int64)&v8,
    (__int64)&v6,
    0);
  details::ObjectArrayAdapterImpl<IWindowSnappingEvents,Microsoft::WRL::ComPtr<IWindowSnappingEvents>>::Iterator::Iterator(
    (__int64)&v10,
    (__int64)&v6,
    v7);
  while ( v8 != v10 || v9[1] != v11[1] )
  {
    v4 = v9[0];
    v13 = v9[0];
    if ( v9[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9[0] + 8LL))(v9[0]);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(
      v4,
      *(_QWORD *)a1,
      *(unsigned int *)(a1 + 16));
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    ++v8;
    details::ObjectArrayAdapterImpl<IWindowSnappingEvents,Microsoft::WRL::ComPtr<IWindowSnappingEvents>>::Iterator::GetCurrentObject(&v8);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
}
