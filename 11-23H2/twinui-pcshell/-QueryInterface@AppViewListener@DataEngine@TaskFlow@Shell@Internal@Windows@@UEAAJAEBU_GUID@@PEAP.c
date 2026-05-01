/*
 * XREFs of ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A4280
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029B9D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataL.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029B9F0 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029BA10 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029BA30 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029BA50 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCI@EAAJAEBU_GUID@@P.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIWeakReferenceSource@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804A3598 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UITaskDataListener@Dat.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::QueryInterface(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r10
  int CanCastTo; // ebx
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IWeakReferenceSource,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::CanCastTo(
                  v5,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)CanCastTo;
}
