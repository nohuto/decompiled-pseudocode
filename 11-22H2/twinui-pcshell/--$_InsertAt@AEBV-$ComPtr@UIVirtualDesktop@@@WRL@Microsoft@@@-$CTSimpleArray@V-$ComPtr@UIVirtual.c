/*
 * XREFs of ??$_InsertAt@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@_K@Z @ 0x1805FB9D8
 * Callers:
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z @ 0x1805FC0E0 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::_InsertAt<Microsoft::WRL::ComPtr<IVirtualDesktop> const &>(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  int v3; // edi
  unsigned __int64 v4; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  __int64 *v10; // rcx

  v3 = 0;
  v4 = a3;
  if ( a3 < a1[1] )
    v4 = a1[1];
  v8 = v4 + 1;
  if ( v8 <= a1[3]
    || (v3 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
               (__int64)a1,
               v8,
               (void *)a3),
        v3 >= 0) )
  {
    v9 = a1[1];
    if ( a3 < v9 )
      memmove_0((void *)(*a1 + 8 * a3 + 8), (const void *)(*a1 + 8 * a3), 8 * (v9 - a3));
    a1[1] = v8;
  }
  if ( v3 >= 0 )
  {
    v10 = (__int64 *)(*a1 + 8 * a3);
    if ( v10 )
    {
      *v10 = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    }
  }
  return (unsigned int)v3;
}
