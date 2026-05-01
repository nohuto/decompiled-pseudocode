/*
 * XREFs of ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180312850
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800ECBD0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x180312A70 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18002D0EC (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180167DF4 (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?EnumThreadWindows@AssociatedWindowWin32Calls@ApplicationViewManagement@@SAHKP6AHPEAUHWND__@@_J@Z1@Z @ 0x1803121FC (-EnumThreadWindows@AssociatedWindowWin32Calls@ApplicationViewManagement@@SAHKP6AHPEAUHWND__@@_J@.c)
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180312494 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     ?Finalize@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180312634 (-Finalize@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@App.c)
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180312710 (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        _QWORD *a1,
        HWND a2)
{
  DWORD WindowThreadProcessId; // r14d
  void *v6; // r8
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  struct tagRECT v10; // xmm6
  void *v11; // r8
  int v12[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  LPARAM lParam[3]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct tagRECT v18; // [rsp+70h] [rbp-98h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  struct tagRECT Rect; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v21[8]; // [rsp+98h] [rbp-70h] BYREF
  HWND v22; // [rsp+A0h] [rbp-68h]
  struct tagRECT v23; // [rsp+A8h] [rbp-60h]
  __int128 v24; // [rsp+B8h] [rbp-50h]
  __int128 v25; // [rsp+C8h] [rbp-40h]
  int v26; // [rsp+D8h] [rbp-30h]
  _BYTE v27[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v28; // [rsp+ECh] [rbp-1Ch]
  HWND v29; // [rsp+F0h] [rbp-18h]
  struct tagRECT v30; // [rsp+F8h] [rbp-10h]
  _BYTE v31[552]; // [rsp+108h] [rbp+0h] BYREF
  int v32; // [rsp+330h] [rbp+228h]
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)a1);
  WindowThreadProcessId = GetWindowThreadProcessId(a2, 0LL);
  if ( !WindowThreadProcessId )
    return 2147943800LL;
  if ( !GetWindowRect(a2, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x18A,
             (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v7);
  *(_QWORD *)v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v8 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
         (__int64)v12,
         4uLL,
         v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v27[0] = 0;
    v28 = -1;
    v29 = a2;
    v10 = Rect;
    v30 = Rect;
    memset_0(v31, 0, sizeof(v31));
    v32 = 0;
    v21[0] = 0;
    v22 = a2;
    v23 = v10;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0;
    LOBYTE(v17[0]) = 0;
    v17[1] = a2;
    v18 = v10;
    v19 = 0LL;
    lParam[0] = (LPARAM)v27;
    lParam[1] = (LPARAM)v21;
    lParam[2] = (LPARAM)v17;
    ApplicationViewManagement::AssociatedWindowWin32Calls::EnumThreadWindows(
      WindowThreadProcessId,
      (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_df7356024bf744f3615be68a3ea90a6d_>,
      (LPARAM)lParam);
    ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::QuadShadowWindowGatherer::Finalize(
      (__int64)v27,
      v12,
      v11);
    ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
      (__int64)v21,
      v12);
    ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
      (__int64)v17,
      v12);
    *a1 = *(_QWORD *)v12;
    a1[2] = v14;
    a1[1] = v13;
    a1[3] = v15;
    *(_QWORD *)v12 = 0LL;
    v14 = 0LL;
    v13 = 0LL;
    v15 = 0LL;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18E,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)(unsigned int)v8);
  }
  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)v12);
  return v9;
}
