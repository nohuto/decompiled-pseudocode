/*
 * XREFs of ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1803CDC78
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1803CE04C (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?CheckBorderWindowAttributes@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x1802D1998 (-CheckBorderWindowAttributes@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicati.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2)
{
  HWND *v2; // rbx
  HWND v5; // rcx
  HWND *v6; // rbp
  HWND *v7; // r14
  HWND v8; // rdi
  void *v9; // r8
  __int64 v11; // rcx
  HWND v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  HWND *v16; // rdx
  signed int Error; // eax
  unsigned int v18; // ebx
  int v19[4]; // [rsp+30h] [rbp-478h] BYREF
  __int128 v20; // [rsp+40h] [rbp-468h] BYREF
  WCHAR ClassName[264]; // [rsp+50h] [rbp-458h] BYREF
  WCHAR String2[264]; // [rsp+260h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4A8h] [rbp+0h]

  v2 = (HWND *)(a1 + 32);
  if ( !*(_QWORD *)(a1 + 32) )
    return 0LL;
  memset_0(ClassName, 0, 0x208uLL);
  v5 = *v2;
  v19[0] = 0;
  if ( GetClassNameW(v5, ClassName, 260) )
  {
    v6 = v2 + 4;
    v7 = v2;
    do
    {
      v8 = *v7;
      if ( !GetClassNameW(*v7, String2, 260) )
        break;
      if ( CompareStringOrdinal(ClassName, -1, String2, -1, 0) != 2 )
        break;
      v20 = *(_OWORD *)(a1 + 16);
      if ( (int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAttributes(
                  &v20,
                  v8,
                  (__int64)v9,
                  (__int64)v19) < 0 )
        break;
      ++v7;
    }
    while ( v7 != v6 );
    if ( (v19[0] & 0xF) == 0xF )
    {
      while ( v2 != v6 )
      {
        v11 = a2[1];
        v12 = *v2;
        if ( v11 != a2[3]
          || (v13 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                      (__int64)a2,
                      v11 + 1,
                      v9),
              v11 = a2[1],
              v13 >= 0) )
        {
          v14 = v11 + 1;
          v15 = *a2 - 8LL;
          a2[1] = v14;
          v16 = (HWND *)(v15 + 8 * v14);
          if ( v16 )
            *v16 = v12;
        }
        ++v2;
      }
    }
    return 0LL;
  }
  Error = ResultFromKnownLastError();
  v18 = Error;
  if ( Error < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)(unsigned int)Error);
  return v18;
}
