/*
 * XREFs of _lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator() @ 0x180237552
 * Callers:
 *     GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___ @ 0x1804D0984 (GridLayoutFactory--_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z @ 0x1802376BC (-SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1803D98E0 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator()(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v3; // ebx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD **)a1;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL);
  v8 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  GridLayoutFactory::LayoutItem::SetHeight((GridLayoutFactory::LayoutItem *)&v8, v3);
  v4 = 0;
  v5 = v2[1];
  if ( v5 != v2[3]
    || (v4 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               v2,
               v5 + 1),
        v4 >= 0) )
  {
    v6 = *v2 + 16 * v2[1]++;
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      if ( (__int64 *)v6 != &v8 )
      {
        *(_QWORD *)v6 = v8;
        v8 = 0LL;
      }
      *(_DWORD *)(v6 + 8) = v9;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  return (unsigned int)v4;
}
