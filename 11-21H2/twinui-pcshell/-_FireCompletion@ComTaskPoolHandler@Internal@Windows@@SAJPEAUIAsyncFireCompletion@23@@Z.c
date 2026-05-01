/*
 * XREFs of ?_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z @ 0x1803C7F50
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1803C3E20 (-FireCompletion@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGetCurrentActivityForV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$QueueTask@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@Z @ 0x1803C0FE8 (--$QueueTask@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPoolHandler::_FireCompletion(
        struct Windows::Internal::IAsyncFireCompletion *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rcx
  bool v5; // bp
  struct Windows::Internal::IAsyncFireCompletion *v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( *(int *)(v3 + 304) <= 4 )
    goto LABEL_7;
  v7 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v7 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v5 = (int)Windows::Internal::ComTaskPool::QueueTask<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>(v4, &v7) >= 0;
  if ( v7 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( a1 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !v5 )
  {
LABEL_7:
    ++*(_DWORD *)(v3 + 304);
    v2 = (*(__int64 (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a1 + 24LL))(a1);
    --*(_DWORD *)(v3 + 304);
  }
  return v2;
}
