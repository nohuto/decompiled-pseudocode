/*
 * XREFs of ?s_DiscoverOwnedWindowsProc@CReportWindowVisibilityChange@@CAHPEAUHWND__@@_J@Z @ 0x180020C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18002D0EC (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 */

__int64 __fastcall CReportWindowVisibilityChange::s_DiscoverOwnedWindowsProc(HWND a1, __int64 a2)
{
  unsigned int v4; // edi
  HWND v6; // rbp
  HWND i; // rcx
  HWND Window; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 1;
  if ( IsWindowVisible(a1) && (unsigned int)GetWindowBand(a1, &v11) )
  {
    if ( v11 == *(_DWORD *)(a2 + 8) )
    {
      v6 = *(HWND *)a2;
      for ( i = a1; ; i = Window )
      {
        Window = GetWindow(i, 4u);
        if ( !Window )
          break;
        if ( Window == v6 )
        {
          v9 = *(_QWORD *)(a2 + 24);
          if ( v9 != *(_QWORD *)(a2 + 40)
            || (int)CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                      a2 + 16,
                      v9 + 1) >= 0 )
          {
            v10 = (_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * (*(_QWORD *)(a2 + 24))++);
            if ( v10 )
              *v10 = a1;
          }
          return v4;
        }
      }
    }
    if ( a1 == *(HWND *)a2 )
      return 0;
  }
  return v4;
}
