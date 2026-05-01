/*
 * XREFs of ?GetAppId@CDragVisual@@UEAAJPEAPEAG@Z @ 0x180531F00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180532230 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CDragVisual::GetAppId(AppLayoutHelpers **this, unsigned __int16 **a2)
{
  __int64 **v4; // rax
  __int64 *AddressOf; // rax
  struct IApplicationView **v6; // r8
  int SingleViewFromLayout; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v4 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v12, &v13);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(*v4);
  SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(this[8], (struct IAppLayout *)AddressOf, v6);
  v8 = SingleViewFromLayout;
  if ( SingleViewFromLayout < 0 )
  {
    v9 = 913LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)SingleViewFromLayout);
    goto LABEL_6;
  }
  SingleViewFromLayout = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v12 + 136LL))(v12, a2);
  v8 = SingleViewFromLayout;
  if ( SingleViewFromLayout < 0 )
  {
    v9 = 914LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  return v8;
}
