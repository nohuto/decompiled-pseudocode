/*
 * XREFs of ?GetAppId@CDragVisual@@UEAAJPEAPEAG@Z @ 0x1805ECC50
 * Callers:
 *     <none>
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x1805ECF90 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CDragVisual::GetAppId(AppLayoutHelpers **this, unsigned __int16 **a2)
{
  __int64 *v4; // rbx
  struct IApplicationView **v5; // r8
  int SingleViewFromLayout; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v11, &v12);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v4);
  SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(this[8], (struct IAppLayout *)v4, v5);
  v7 = SingleViewFromLayout;
  if ( SingleViewFromLayout < 0 )
  {
    v8 = 907LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)SingleViewFromLayout);
    goto LABEL_6;
  }
  SingleViewFromLayout = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v11 + 136LL))(v11, a2);
  v7 = SingleViewFromLayout;
  if ( SingleViewFromLayout < 0 )
  {
    v8 = 908LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  return v7;
}
