/*
 * XREFs of ?HandleTabletModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUtagRECT@@@Z @ 0x18066EF20
 * Callers:
 *     ?SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x18066F550 (-SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCAT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutOperation@@@?$ComPtr@UIWindowArrangementOperation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18066E7F4 (--$As@UIAppLayoutOperation@@@-$ComPtr@UIWindowArrangementOperation@@@WRL@Microsoft@@QEBAJV-$ComP.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SnapServiceProvider::HandleTabletModeSnapping(__int64 a1, GUID *a2, int a3, __int64 a4)
{
  __int64 (__fastcall *v8)(GUID *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64 *, GUID *, GUID *, int *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, GUID *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 *v23; // r8
  int v24; // eax
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64 *); // rdi
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, GUID *, __int64 *, _QWORD); // rdi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // [rsp+30h] [rbp-30h] BYREF
  int v35[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h] BYREF
  __int64 v39; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp+28h] BYREF

  v38 = 0LL;
  v8 = *(__int64 (__fastcall **)(GUID *, __int64 *))(*(_QWORD *)&a2->Data1 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v38);
  v10 = v8(a2, AddressOf);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v39 = 0LL;
    *(_QWORD *)v35 = 0LL;
    v12 = *(_QWORD *)(a1 + 32);
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *, GUID *, GUID *, int *))(*(_QWORD *)v12 + 96LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v35);
    v14 = v13(v12, &v39, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, v35);
    v11 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB4,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
        (const char *)(unsigned int)v14);
LABEL_36:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v35);
      goto LABEL_37;
    }
    v41 = 0LL;
    v15 = *(_QWORD *)v35;
    v16 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)v35 + 80LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v41);
    v17 = v16(v15, &CLSID_WindowArrangementOperation, &GUID_83266822_9e63_4b62_a1b4_75b389df3388, &v41);
    v11 = v17;
    if ( v17 < 0 )
    {
      v18 = 183LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_35;
    }
    if ( a3 == 2 )
    {
      v17 = (*v41)[5](v41, a2, (__int64 *)5);
      v11 = v17;
      if ( v17 < 0 )
      {
        v18 = 187LL;
        goto LABEL_34;
      }
      goto LABEL_20;
    }
    v34 = 0LL;
    v19 = *(_QWORD *)v35;
    v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v35 + 72LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
    v21 = v20(v19, &v34);
    v11 = v21;
    if ( v21 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 80LL))(v34, 1LL) != 2
        || (*(unsigned int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v34 + 184LL))(v34, a2) )
      {
        v23 = (__int64 *)((unsigned int)(a3 != 0) + 1);
      }
      else
      {
        v23 = (__int64 *)((unsigned int)(a3 != 0) + 3);
      }
      v21 = (*v41)[5](v41, a2, v23);
      v11 = v21;
      if ( v21 >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
LABEL_20:
        if ( a4 )
        {
          v34 = 0LL;
          v24 = Microsoft::WRL::ComPtr<IWindowArrangementOperation>::As<IAppLayoutOperation>(&v41, &v34);
          v11 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD2,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
              (const char *)(unsigned int)v24);
            goto LABEL_28;
          }
          v37 = 0LL;
          v25 = v34;
          v26 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 48LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
          v27 = v26(v25, &v37);
          v11 = v27;
          if ( v27 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD5,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
              (const char *)(unsigned int)v27);
LABEL_27:
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
LABEL_28:
            v31 = v34;
            if ( v34 )
            {
              v34 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
            }
            goto LABEL_35;
          }
          v36 = 0LL;
          v28 = v37;
          v29 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *, _QWORD))(*(_QWORD *)v37 + 152LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
          v30 = v29(v28, a2, &v36, 0LL);
          v11 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD8,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
              (const char *)(unsigned int)v30);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
            goto LABEL_27;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v36 + 56LL))(v36, 0LL, a4);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
          v32 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)v35 + 88LL))(
                *(_QWORD *)v35,
                v41);
        v11 = v17;
        if ( v17 < 0 )
        {
          v18 = 221LL;
          goto LABEL_34;
        }
LABEL_35:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v41);
        goto LABEL_36;
      }
      v22 = 204LL;
    }
    else
    {
      v22 = 192LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
      (const char *)(unsigned int)v21);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB0,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
    (const char *)(unsigned int)v10);
LABEL_37:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
  return v11;
}
