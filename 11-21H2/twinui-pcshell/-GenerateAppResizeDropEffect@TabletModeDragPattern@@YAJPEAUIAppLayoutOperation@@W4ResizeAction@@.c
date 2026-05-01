/*
 * XREFs of ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x180523970
 * Callers:
 *     ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x180520204 (-UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002E638 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180523D1C (TabletModeDragPattern--GenerateStringWithMap.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModeDragPattern::GenerateAppResizeDropEffect(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // r14d
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // esi
  __int64 (__fastcall *v13)(__int64, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64, GUID *, int *); // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, GUID *, __int64 *); // rdi
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64, __int64, GUID *, int *); // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, GUID *, __int64 *); // rdi
  int StringWithMap; // eax
  int v29[2]; // [rsp+40h] [rbp-20h] BYREF
  int v30[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v34; // [rsp+98h] [rbp+38h]
  __int64 v35; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( a2 < 0 )
    goto LABEL_29;
  if ( a2 <= 3 )
  {
    v12 = 2004;
    v7 = 2;
    v35 = 0LL;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
    v14 = v13(a1, &v35);
    v11 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v14);
LABEL_24:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
      goto LABEL_30;
    }
    v34 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 80LL))(v35, 1LL);
    *(_QWORD *)v30 = 0LL;
    v15 = v35;
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v35 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v30);
    v17 = v16(v15, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v30);
    v11 = v17;
    if ( v17 < 0 )
    {
      v18 = 239LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v17);
LABEL_23:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v30);
      goto LABEL_24;
    }
    v19 = *(_QWORD *)v30;
    v20 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v30 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v31);
    v17 = v20(v19, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v31);
    v11 = v17;
    if ( v17 < 0 )
    {
      v18 = 240LL;
      goto LABEL_16;
    }
    if ( v34 == 2 )
    {
      *(_QWORD *)v29 = 0LL;
      v21 = v35;
      v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v35 + 104LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v29);
      v23 = v22(v21, 1LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v29);
      v11 = v23;
      if ( v23 < 0 )
      {
        v24 = 244LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
          (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v29);
        goto LABEL_23;
      }
      v25 = *(_QWORD *)v29;
      v26 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v29 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v32);
      v23 = v26(v25, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v32);
      v11 = v23;
      if ( v23 < 0 )
      {
        v24 = 245LL;
        goto LABEL_22;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v29);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v30);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
    goto LABEL_27;
  }
  if ( a2 > 5 )
  {
LABEL_29:
    v11 = 0;
    goto LABEL_30;
  }
  v7 = 1;
  *(_QWORD *)v29 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 112LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)v29);
  v10 = v8(a1, AddressOf);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v29);
    goto LABEL_30;
  }
  if ( *(_QWORD *)v29 )
  {
    v12 = 2003;
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v31, (__int64 *)v29);
  }
  else
  {
    v12 = 2002;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v29);
LABEL_27:
  StringWithMap = TabletModeDragPattern::GenerateStringWithMap(v7, v31, v32, a3, v12, 0, a4);
  v11 = StringWithMap;
  if ( StringWithMap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)StringWithMap);
LABEL_30:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v31);
  return v11;
}
