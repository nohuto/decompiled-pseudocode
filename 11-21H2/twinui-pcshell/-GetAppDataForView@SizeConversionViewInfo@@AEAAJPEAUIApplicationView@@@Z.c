/*
 * XREFs of ?GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z @ 0x180056E74
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180056E00 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1804E9CCC (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SizeConversionViewInfo::GetAppDataForView(
        SizeConversionViewInfo *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 *); // rdi
  int ScaleFactorForWindow; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v26; // [rsp+88h] [rbp+38h] BYREF
  int v27; // [rsp+90h] [rbp+40h] BYREF
  int v28; // [rsp+98h] [rbp+48h] BYREF

  v23 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  v5 = v4((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v23);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v5,
      v20);
    goto LABEL_15;
  }
  v22 = 0LL;
  v7 = v23;
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 24LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v22);
  v10 = v8(v7, AddressOf);
  v6 = v10;
  if ( v10 < 0 )
  {
    v16 = 82LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v10,
      v20);
    goto LABEL_14;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 368LL))(v22, &v26);
  v6 = v10;
  if ( v10 < 0 )
  {
    v16 = 86LL;
    goto LABEL_20;
  }
  v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), int *))(*a2)[51])(
          a2,
          &v27);
  v6 = v10;
  if ( v10 < 0 )
  {
    v16 = 92LL;
    goto LABEL_20;
  }
  v11 = v26;
  if ( v27 )
    v11 = 0;
  v26 = v11;
  if ( v11 )
    *((_DWORD *)this + 6) |= 2u;
  v21 = 0LL;
  v12 = v22;
  v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v22 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  if ( v13(v12, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v21) < 0
    || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 32LL))(v21, &v24) < 0 )
  {
    v17 = v22;
    v18 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v22 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    ScaleFactorForWindow = v18(v17, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v21);
    v6 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow >= 0 )
    {
      ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 32LL))(v21, &v24);
      v6 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow >= 0 )
        goto LABEL_11;
      v19 = 113LL;
    }
    else
    {
      v19 = 112LL;
    }
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)ScaleFactorForWindow,
      v20);
    goto LABEL_13;
  }
LABEL_11:
  ScaleFactorForWindow = GetScaleFactorForWindow(v24, &v28);
  v6 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow < 0 )
  {
    v19 = 119LL;
    goto LABEL_26;
  }
  *((_DWORD *)this + 10) = v28;
  v6 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  return v6;
}
