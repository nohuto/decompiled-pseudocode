/*
 * XREFs of ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x18005EDB8
 * Callers:
 *     ?ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z @ 0x18005ED10 (-ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z.c)
 *     ?ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x1805A1910 (-ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationView.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::GetMonitorForDpi(
        WindowSizeConverter *this,
        int a2,
        struct IImmersiveMonitor **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int i; // esi
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **); // rdi
  int v14; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-20h]
  struct IImmersiveMonitor *v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v22; // [rsp+70h] [rbp+30h] BYREF
  int v23; // [rsp+80h] [rbp+40h] BYREF
  char v24; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  v20 = 0LL;
  v6 = *((_QWORD *)this + 14);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 112LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  v8 = v7(v6, &v20);
  v9 = v8;
  if ( v8 < 0 )
  {
    v16 = (unsigned int)v8;
    v17 = 548LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)v16,
      v18);
    goto LABEL_10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 24LL))(
          *((_QWORD *)this + 14),
          &v22);
  v9 = v10;
  if ( v10 < 0 )
  {
    v16 = (unsigned int)v10;
    v17 = 551LL;
    goto LABEL_17;
  }
  for ( i = 0; i < v22; ++i )
  {
    v19 = 0LL;
    v12 = v20;
    v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v20 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
    if ( v13(v12, i, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v19) >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *, char *))(*(_QWORD *)v19 + 112LL))(
              v19,
              &v23,
              &v24);
      v9 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x230,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
          (const char *)(unsigned int)v14,
          v18);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
        goto LABEL_10;
      }
      if ( a2 == v23 )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
        *a3 = v19;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
        break;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  }
  if ( !*a3 )
  {
    v9 = -2147023728;
    v16 = 2147943568LL;
    v17 = 571LL;
    goto LABEL_17;
  }
  v9 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  return v9;
}
