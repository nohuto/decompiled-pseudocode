/*
 * XREFs of ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180312710
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180312850 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18002D0EC (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x18022B6A0 (-IsEligibleToolWindow@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewM.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2)
{
  HWND v4; // rcx
  HWND v6; // rcx
  const char *v7; // r9
  LONG bottom; // eax
  LONG right; // ecx
  LONG top; // edx
  LONG left; // r8d
  void *v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // esi
  _QWORD *v16; // rdx
  _DWORD v17[4]; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v4 = *(HWND *)(a1 + 32);
  if ( v4 )
  {
    if ( !(unsigned int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(v4) )
      return 2147500037LL;
    v6 = *(HWND *)(a1 + 32);
    Rect = 0LL;
    if ( !GetWindowRect(v6, &Rect) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x171,
               (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
               v7);
    bottom = *(_DWORD *)(a1 + 28);
    right = *(_DWORD *)(a1 + 24);
    if ( Rect.bottom > bottom )
      bottom = Rect.bottom;
    top = *(_DWORD *)(a1 + 20);
    if ( Rect.right > right )
      right = Rect.right;
    left = *(_DWORD *)(a1 + 16);
    if ( Rect.top < top )
      top = Rect.top;
    v17[1] = top;
    if ( Rect.left < left )
      left = Rect.left;
    v17[2] = right;
    v17[0] = left;
    v17[3] = bottom;
    if ( Geometry::operator==(v17, &Rect) )
    {
      v13 = a2[1];
      if ( v13 == a2[3] )
      {
        v14 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                (__int64)a2,
                v13 + 1,
                v12);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x174,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
            (const char *)(unsigned int)v14);
          return v15;
        }
      }
      v16 = (_QWORD *)(*a2 + 8 * a2[1]++);
      if ( v16 )
        *v16 = *(_QWORD *)(a1 + 32);
    }
  }
  return 0LL;
}
