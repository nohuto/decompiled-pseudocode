/*
 * XREFs of ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1805CDFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutBuilder@@@?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805CCB24 (--$As@UIAppLayoutBuilder@@@-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIA.c)
 *     ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1805CEB40 (-_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIAp.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805CF0D0 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PPIWin32VtcLayoutOperation::ShouldHandleOperation(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  PPIWin32VtcLayoutOperation *v8; // rdi
  int (__fastcall *v9)(PPIWin32VtcLayoutOperation *, __int64 *, __int64); // rbx
  int AppOnLayoutByActivationTime; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v16; // [rsp+30h] [rbp-29h]
  __int64 (__fastcall **v17)(); // [rsp+50h] [rbp-9h] BYREF
  __int128 v18; // [rsp+58h] [rbp-1h]
  _DWORD *v19; // [rsp+68h] [rbp+Fh]
  __int64 (__fastcall ***v20)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct IApplicationView *v22; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+7Fh] BYREF

  *a4 = 0;
  v23 = 0LL;
  v8 = (PPIWin32VtcLayoutOperation *)(a1 - 176);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 176) + 168LL))(a1 - 176)
    || (v9 = *(int (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64 *, __int64))(*(_QWORD *)v8 + 160LL),
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23),
        v9(v8, &v23, 1LL) >= 0) )
  {
    *a4 = 1;
    goto LABEL_15;
  }
  if ( a3 )
  {
    v22 = 0LL;
    v12 = Microsoft::WRL::ComPtr<IAppLayout>::As<IAppLayoutBuilder>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 - 120),
            (__int64 *)&v22);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v14 = *(_QWORD *)v8;
      *(_QWORD *)&v16 = v8;
      *((_QWORD *)&v16 + 1) = a2;
      v17 = off_1807EBA08;
      v18 = v16;
      v19 = a4;
      v20 = &v17;
      v12 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *, __int64 (__fastcall ***)()))(v14 + 176))(
              v8,
              v22,
              &v17);
      v11 = v12;
      if ( v12 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        goto LABEL_15;
      }
      v13 = 265LL;
    }
    else
    {
      v13 = 256LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    goto LABEL_16;
  }
  if ( (*(unsigned int (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64, __int64))(*(_QWORD *)v8 + 88LL))(
         v8,
         1LL,
         1LL) != 2 )
  {
LABEL_15:
    v11 = 0;
    goto LABEL_16;
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
  AppOnLayoutByActivationTime = PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(v8, 1LL, &v22, 1LL);
  v11 = AppOnLayoutByActivationTime;
  if ( AppOnLayoutByActivationTime >= 0 )
  {
    *a4 = PPIWin32VtcLayoutOperation::_IsViewMeetingWindow(v8, v22);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF7,
    (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)AppOnLayoutByActivationTime);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
LABEL_16:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
  return v11;
}
