/*
 * XREFs of ??1CWindowList@@UEAA@XZ @ 0x180101700
 * Callers:
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800AFC20 (--_ECWindowList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001EFD0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?IsEmpty@?$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ @ 0x18001F250 (-IsEmpty@-$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004207C (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?StopRotation@?$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x1800422F0 (-StopRotation@-$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransition.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18005439C (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180101D68 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x180101E28 (--_GCWindowArrangementTransition@@QEAAPEAXI@Z.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18010241C (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CWindowList::~CWindowList(CWindowList *this)
{
  CWindowList *v1; // rdi
  __int64 v2; // r9
  unsigned int v3; // edx
  const char *v4; // r9
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CLoginTransition *v8; // rcx
  struct CWindowData *v9; // rdx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  PVOID v17; // rax
  unsigned int v18; // edx
  _QWORD *v19; // rsi
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CWindowArrangementTransition *v22; // rcx
  struct wil::details::wnf_subscription_state_base *v23; // rdx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  PVOID v26; // rax
  PVOID v27; // rax
  PVOID v28; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID v30; // [rsp+50h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+58h] [rbp+10h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+18h] BYREF
  PVOID v33; // [rsp+68h] [rbp+20h] BYREF

  v30 = this;
  v1 = this;
  *(_QWORD *)this = &CWindowList::`vftable';
  v33 = 0LL;
  CWindowList::CommitAndCloseResizeCompSyncObject(this);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v2);
  try
  {
    winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v32);
    winrt::impl::as<winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &RestartKey,
      v32);
    winrt::impl::consume_Udwm_Transitions_Private_IRotationTransitionManager<winrt::Udwm::Transitions::Private::IRotationTransitionManager>::StopRotation(&RestartKey);
    if ( RestartKey )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&RestartKey);
    if ( v32 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v32);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x5D,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v4);
    v1 = (CWindowList *)v30;
  }
  v5 = (CBaseObject *)*((_QWORD *)v1 + 67);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)v1 + 72);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)v1 + 69);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CLoginTransition *)*((_QWORD *)v1 + 71);
  if ( v8 )
  {
    CLoginTransition::`scalar deleting destructor'(v8, v3);
    *((_QWORD *)v1 + 71) = 0LL;
  }
  while ( !CGenericSet<CWindowData *>::IsEmpty((struct _RTL_GENERIC_TABLE *)((char *)v1 + 312)) )
  {
    RestartKey = 0LL;
    v9 = *(struct CWindowData **)RtlEnumerateGenericTableWithoutSplaying(
                                   (PRTL_GENERIC_TABLE)((char *)v1 + 312),
                                   &RestartKey);
    CWindowList::ImmediateDestroySprite(v1, v9);
  }
  while ( 1 )
  {
    v17 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &v33);
    v19 = v17;
    if ( !v17 )
      break;
    v10 = (CBaseObject *)*((_QWORD *)v17 + 1);
    if ( v10 )
      CBaseObject::Release(v10);
    v11 = (CBaseObject *)v19[2];
    if ( v11 )
      CBaseObject::Release(v11);
    v12 = (CBaseObject *)v19[3];
    if ( v12 )
      CBaseObject::Release(v12);
    v13 = (CBaseObject *)v19[4];
    if ( v13 )
      CBaseObject::Release(v13);
    v14 = (CBaseObject *)v19[5];
    if ( v14 )
      CBaseObject::Release(v14);
    v15 = (CBaseObject *)v19[6];
    if ( v15 )
      CBaseObject::Release(v15);
    v16 = (CBaseObject *)v19[7];
    if ( v16 )
      CBaseObject::Release(v16);
  }
  v20 = (CBaseObject *)*((_QWORD *)v1 + 11);
  if ( v20 )
    CBaseObject::Release(v20);
  v21 = (CBaseObject *)*((_QWORD *)v1 + 10);
  if ( v21 )
    CBaseObject::Release(v21);
  v22 = (CWindowArrangementTransition *)*((_QWORD *)v1 + 68);
  if ( v22 )
  {
    CWindowArrangementTransition::`scalar deleting destructor'(v22, v18);
    *((_QWORD *)v1 + 68) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 83);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
    (wil::details **)v1 + 81,
    v23);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)v1 + 80);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 74);
  v24 = (CBaseObject *)*((_QWORD *)v1 + 73);
  if ( v24 )
    CBaseObject::Release(v24);
  v25 = (CBaseObject *)*((_QWORD *)v1 + 70);
  if ( v25 )
    CBaseObject::Release(v25);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 62);
  while ( 1 )
  {
    v30 = 0LL;
    v26 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 424), &v30);
    if ( !v26 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v1 + 424), v26);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 48);
  while ( 1 )
  {
    v30 = 0LL;
    v27 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 312), &v30);
    if ( !v27 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v1 + 312), v27);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)v1 + 35);
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)v1 + 12);
  while ( 1 )
  {
    v30 = 0LL;
    v28 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &v30);
    if ( !v28 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v1 + 8), v28);
  }
}
