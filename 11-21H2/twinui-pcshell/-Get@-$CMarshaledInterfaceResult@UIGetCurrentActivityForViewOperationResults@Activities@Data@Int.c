/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1803C4238
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1803C5390 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Ac.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF16C (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::Get(
        __int64 a1,
        void **a2)
{
  unsigned int v4; // edi
  RTL_SRWLOCK *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 32);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 32));
  Microsoft::WRL::ComPtr<ISnappedWindow>::operator=(&v9, (__int64 *)(a1 + 24));
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0LL;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = v6;
    v11 = 0LL;
    v10 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  }
  ReleaseSRWLockShared(v5);
  *a2 = 0LL;
  if ( v7 )
  {
    v4 = Microsoft::WRL::AgileRef::InternalResolve(
           (Microsoft::WRL::AgileRef *)&v10,
           &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc,
           a2);
  }
  else if ( v9 )
  {
    v4 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)&v9, &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc, a2, 0);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return v4;
}
