/*
 * XREFs of ?Finalize@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1803CDE20
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1803CE04C (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::QuadShadowWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2,
        void *a3)
{
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)a1 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 584) != 15 )
    return 2147500036LL;
  v4 = (__int64 *)(a1 + 32);
  v5 = (__int64 *)(a1 + 64);
  v6 = (_QWORD *)(a1 + 32);
  if ( a1 + 32 == a1 + 64 )
    return 0LL;
  while ( *v6 )
  {
    if ( ++v6 == v5 )
    {
      while ( 1 )
      {
        v7 = a2[1];
        v8 = 0;
        v9 = *v4;
        if ( v7 != a2[3]
          || (v10 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                      (__int64)a2,
                      v7 + 1,
                      a3),
              v7 = a2[1],
              v8 = v10,
              v10 >= 0) )
        {
          v11 = v7 + 1;
          v12 = *a2 - 8LL;
          a2[1] = v11;
          v13 = (_QWORD *)(v12 + 8 * v11);
          if ( !v13 )
            goto LABEL_11;
          *v13 = v9;
        }
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC5,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
            (const char *)(unsigned int)v8);
          return (unsigned int)v8;
        }
LABEL_11:
        if ( ++v4 == v5 )
          return 0LL;
      }
    }
  }
  return 2147500036LL;
}
