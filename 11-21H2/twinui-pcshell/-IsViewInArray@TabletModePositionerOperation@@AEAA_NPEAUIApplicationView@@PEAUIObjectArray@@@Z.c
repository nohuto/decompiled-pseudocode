/*
 * XREFs of ?IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z @ 0x1805132C4
 * Callers:
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x180512960 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall TabletModePositionerOperation::IsViewInArray(
        struct IUnknown *this,
        struct IUnknown *a2,
        struct IObjectArray *a3)
{
  struct IUnknown *v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-38h]
  unsigned int v8; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v9; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-20h]
  unsigned int v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v13; // [rsp+58h] [rbp-8h]
  struct IUnknown *v14; // [rsp+70h] [rbp+10h] BYREF

  v14 = this;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v6,
    (__int64)a3);
  v8 = 0;
  v9 = 0LL;
  v10 = &v6;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v8);
  v11 = v7;
  v12 = 0LL;
  v13 = &v6;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v11);
  while ( 1 )
  {
    if ( v8 == v11 && v10 == v13 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
      return 0;
    }
    v4 = v9;
    v14 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    if ( (unsigned int)SHIsSameObject(a2, v4) )
      break;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
    ++v8;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v8);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return 1;
}
