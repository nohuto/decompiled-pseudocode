/*
 * XREFs of ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1805CEB40
 * Callers:
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805CD6F0 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1805CDFF0 (-ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CF740 (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutBuilder@@@?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805CCB24 (--$As@UIAppLayoutBuilder@@@-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(
        __int64 *a1,
        int a2,
        __int64 *a3,
        int a4)
{
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-29h] BYREF
  __int128 v15; // [rsp+30h] [rbp-19h]
  __int128 v16; // [rsp+40h] [rbp-9h]
  __int64 (__fastcall **v17)(); // [rsp+50h] [rbp+7h] BYREF
  __int128 v18; // [rsp+58h] [rbp+Fh]
  __int128 v19; // [rsp+68h] [rbp+1Fh]
  __int64 (__fastcall ***v20)(); // [rsp+88h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v22; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+77h] BYREF

  *a3 = 0LL;
  v7 = a1[8];
  if ( a4 == 1 )
  {
    v22 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IAppLayout>::As<IAppLayoutBuilder>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1 + 7,
           &v22);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25F,
        (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      return v9;
    }
    v7 = v22;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  }
  v14 = 0LL;
  v23 = 0LL;
  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
  *(_QWORD *)&v15 = a1;
  DWORD2(v15) = a2;
  *(_QWORD *)&v16 = &v14;
  *((_QWORD *)&v16 + 1) = &v23;
  v17 = off_1807EBA68;
  v18 = v15;
  v19 = v16;
  v20 = &v17;
  v11 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64 (__fastcall ***)()))v10[22])(a1, v7, &v17);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v12 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      *a3 = v12;
    }
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27B,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
  return v9;
}
