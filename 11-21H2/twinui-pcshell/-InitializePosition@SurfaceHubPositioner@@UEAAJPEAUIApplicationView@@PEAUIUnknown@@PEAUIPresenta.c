/*
 * XREFs of ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804ED660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180098FE0 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804EE358 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::InitializePosition(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  unsigned int DetailsForActivation; // ebx
  __int64 v7; // rdx
  bool v8; // di
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v10; // r8
  int ApplicationFromView; // eax
  __int64 v12; // rdx
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown v16; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 464) )
  {
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                             this,
                             (struct IApplicationView *)a3,
                             &v16,
                             0LL);
    if ( (DetailsForActivation & 0x80000000) != 0 )
    {
      v7 = 287LL;
      goto LABEL_3;
    }
    v8 = 1;
    if ( ((__int64)v16.lpVtbl & 1) != 0 || ((__int64)v16.lpVtbl & 2) != 0 )
      v8 = 0;
    v14[0] = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(v14);
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)AddressOf, v10);
    DetailsForActivation = ApplicationFromView;
    if ( ApplicationFromView >= 0 )
    {
      ApplicationFromView = SurfaceHubPositioner::_SetDefaultLayout(
                              (SurfaceHubPositioner *)((char *)this - 112),
                              (struct IApplicationView *)a2,
                              v8);
      DetailsForActivation = ApplicationFromView;
      if ( ApplicationFromView >= 0 )
      {
        DetailsForActivation = 0;
        goto LABEL_15;
      }
      v12 = 295LL;
    }
    else
    {
      v12 = 293LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)ApplicationFromView);
LABEL_15:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
    return DetailsForActivation;
  }
  DetailsForActivation = -2147418113;
  v7 = 285LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)DetailsForActivation);
  return DetailsForActivation;
}
