/*
 * XREFs of ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1805159A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutBuilder@@@?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180514634 (--$As@UIAppLayoutBuilder@@@-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIA.c)
 *     ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1805164B0 (-_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIAp.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x180516A00 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PPIWin32VtcLayoutOperation::ShouldHandleOperation(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 *v8; // rdi
  int (__fastcall *v9)(__int64 *, __int64 *, __int64); // rbx
  __int64 *AddressOf; // rax
  __int64 *v11; // rax
  int AppOnLayoutByActivationTime; // eax
  PPIWin32VtcLayoutOperation *v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int128 v19; // [rsp+30h] [rbp-29h]
  __int64 (__fastcall **v20)(); // [rsp+50h] [rbp-9h] BYREF
  __int128 v21; // [rsp+58h] [rbp-1h]
  _DWORD *v22; // [rsp+68h] [rbp+Fh]
  __int64 (__fastcall ***v23)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct IApplicationView *v25; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  *a4 = 0;
  v26 = 0LL;
  v8 = (__int64 *)(a1 - 176);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 176) + 168LL))(a1 - 176)
    || (v9 = *(int (__fastcall **)(__int64 *, __int64 *, __int64))(*v8 + 160),
        AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v26),
        v9(v8, AddressOf, 1LL) >= 0) )
  {
    *a4 = 1;
    goto LABEL_15;
  }
  if ( a3 )
  {
    v25 = 0LL;
    v15 = Microsoft::WRL::ComPtr<IAppLayout>::As<IAppLayoutBuilder>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 - 120),
            (__int64 *)&v25);
    v14 = v15;
    if ( v15 >= 0 )
    {
      v17 = *v8;
      *(_QWORD *)&v19 = v8;
      *((_QWORD *)&v19 + 1) = a2;
      v20 = off_180663B28;
      v21 = v19;
      v22 = a4;
      v23 = &v20;
      v15 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, __int64 (__fastcall ***)()))(v17 + 176))(
              v8,
              v25,
              &v20);
      v14 = v15;
      if ( v15 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
        goto LABEL_15;
      }
      v16 = 266LL;
    }
    else
    {
      v16 = 257LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
    goto LABEL_16;
  }
  if ( (*(unsigned int (__fastcall **)(__int64 *, __int64, __int64))(*v8 + 88))(v8, 1LL, 1LL) != 2 )
  {
LABEL_15:
    v14 = 0;
    goto LABEL_16;
  }
  v25 = 0LL;
  v11 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v25);
  AppOnLayoutByActivationTime = PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(v8, 1LL, v11, 1LL);
  v14 = AppOnLayoutByActivationTime;
  if ( AppOnLayoutByActivationTime >= 0 )
  {
    *a4 = PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(v13, v25);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF8,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)AppOnLayoutByActivationTime);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
LABEL_16:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
  return v14;
}
