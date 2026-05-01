/*
 * XREFs of ?Add@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K@Z @ 0x1805FBB4C
 * Callers:
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18013EBD0 (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::Add(
        _QWORD *a1,
        _QWORD *a2,
        void *a3)
{
  int v4; // r9d
  __int64 v5; // rdx
  _QWORD *v7; // r8

  v4 = 0;
  v5 = a1[1];
  if ( v5 != a1[3]
    || (v4 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
               (__int64)a1,
               v5 + 1,
               a3),
        v4 >= 0) )
  {
    v7 = (_QWORD *)(*a1 + 8 * a1[1]++);
    if ( v7 )
    {
      *v7 = 0LL;
      if ( v7 != a2 )
      {
        *v7 = *a2;
        *a2 = 0LL;
      }
    }
  }
  return (unsigned int)v4;
}
