/*
 * XREFs of ?InsertAt@CGlomCollection@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18000FFD8
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000E8D0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivationBasedAppAndGlomCollection::CGlomCollection::InsertAt(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  int v3; // edi
  unsigned __int64 v4; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  _QWORD *v10; // rcx
  unsigned int v11; // eax

  v3 = 0;
  v4 = a3;
  if ( a3 < *(_QWORD *)(a1 + 8) )
    v4 = *(_QWORD *)(a1 + 8);
  v8 = v4 + 1;
  if ( v8 <= *(_QWORD *)(a1 + 24)
    || (v3 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
               a1,
               v8),
        v3 >= 0) )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( a3 < v9 )
      memmove_0((void *)(*(_QWORD *)a1 + 8 * a3 + 8), (const void *)(*(_QWORD *)a1 + 8 * a3), 8 * (v9 - a3));
    *(_QWORD *)(a1 + 8) = v8;
  }
  if ( v3 >= 0 )
  {
    v10 = (_QWORD *)(*(_QWORD *)a1 + 8 * a3);
    if ( v10 )
    {
      *v10 = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 160LL))(*a2);
    if ( v11 >= *(_DWORD *)(a1 + 32) )
      *(_DWORD *)(a1 + 32) = v11 + 1;
  }
  return (unsigned int)v3;
}
