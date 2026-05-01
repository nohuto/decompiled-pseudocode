/*
 * XREFs of ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x1805DC33C
 * Callers:
 *     ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x1805D8BCC (-UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x1805DC6F4 (TabletModeDragPattern--GenerateStringWithMap.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModeDragPattern::GenerateAppResizeDropEffect(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // r15d
  __int64 (__fastcall *v11)(__int64, int *); // rbx
  int v12; // eax
  int v13; // ebx
  int v14; // r14d
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, GUID *, int *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, GUID *, __int64 *); // rdi
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64, __int64, GUID *, int *); // rdi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, GUID *, __int64 *); // rdi
  int StringWithMap; // eax
  int v31[2]; // [rsp+40h] [rbp-20h] BYREF
  int v32[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h] BYREF
  __int64 v34; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v36; // [rsp+A8h] [rbp+48h]
  __int64 v38; // [rsp+B8h] [rbp+58h] BYREF

  v6 = 0;
  *a4 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( !a2 || (v7 = a2 - 1) == 0 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 )
  {
    v10 = 2;
    v14 = 2004;
    v38 = 0LL;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
    v16 = v15(a1, &v38);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v16);
LABEL_26:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
      goto LABEL_31;
    }
    v36 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 80LL))(v38, 1LL);
    *(_QWORD *)v32 = 0LL;
    v17 = v38;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v38 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v32);
    v19 = v18(v17, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v32);
    v13 = v19;
    if ( v19 < 0 )
    {
      v20 = 239LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v19);
LABEL_25:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v32);
      goto LABEL_26;
    }
    v21 = *(_QWORD *)v32;
    v22 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v32 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
    v19 = v22(v21, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v33);
    v13 = v19;
    if ( v19 < 0 )
    {
      v20 = 240LL;
      goto LABEL_18;
    }
    if ( v36 == 2 )
    {
      *(_QWORD *)v31 = 0LL;
      v23 = v38;
      v24 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v38 + 104LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v31);
      v25 = v24(v23, 1LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v31);
      v13 = v25;
      if ( v25 < 0 )
      {
        v26 = 244LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
          (const char *)(unsigned int)v25);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v31);
        goto LABEL_25;
      }
      v27 = *(_QWORD *)v31;
      v28 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v31 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
      v25 = v28(v27, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v34);
      v13 = v25;
      if ( v25 < 0 )
      {
        v26 = 245LL;
        goto LABEL_24;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v31);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v32);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
    goto LABEL_29;
  }
  if ( (unsigned int)(v9 - 1) <= 1 )
  {
    v10 = 1;
    *(_QWORD *)v31 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 112LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v31);
    v12 = v11(a1, v31);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v31);
LABEL_31:
      v6 = v13;
      goto LABEL_32;
    }
    if ( *(_QWORD *)v31 )
    {
      v14 = 2003;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v33, (__int64 *)v31);
    }
    else
    {
      v14 = 2002;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v31);
LABEL_29:
    StringWithMap = TabletModeDragPattern::GenerateStringWithMap(v10, v33, v34, a3, v14, 0, a4);
    v13 = StringWithMap;
    if ( StringWithMap < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFD,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)StringWithMap);
    goto LABEL_31;
  }
LABEL_32:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
  return v6;
}
