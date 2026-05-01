/*
 * XREFs of ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_12603dae6e80c2220100b0c8836f21bd_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_12603dae6e80c2220100b0c8836f21bd_@@@Z @ 0x1800A454C
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800A46A0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1805F0764 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$QueueTask@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@Z @ 0x1800A45FC (--$QueueTask@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF16C (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_12603dae6e80c2220100b0c8836f21bd_>(
        APTTYPE a1,
        int a2,
        void **a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ebx
  _QWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  APTTYPE pAptType; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = a2;
  pAptType = a1;
  *a3 = 0LL;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && (pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA) )
    v8 = 65LL;
  else
    v8 = 33LL;
  v13 = 0;
  v15 = 0LL;
  v11[0] = a4;
  v11[1] = &v15;
  v11[2] = &v13;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))Windows::Internal::ComTaskPool::QueueTask<_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_>)(
         v6,
         v8,
         v7,
         v11);
  if ( v9 >= 0 )
  {
    v9 = v13;
    if ( v13 >= 0 )
      v9 = Microsoft::WRL::AgileRef::InternalResolve(
             (Microsoft::WRL::AgileRef *)&v15,
             &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e,
             a3);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  return (unsigned int)v9;
}
