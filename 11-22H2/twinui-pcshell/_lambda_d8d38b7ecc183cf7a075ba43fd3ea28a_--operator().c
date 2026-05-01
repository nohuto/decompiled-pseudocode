/*
 * XREFs of _lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator() @ 0x180588470
 * Callers:
 *     GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___ @ 0x1805881C4 (GridLayoutFactory--_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1802D73A4 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z @ 0x1802E5A6C (-SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator()(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v3; // ebx
  void *v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD **)a1;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL);
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
  GridLayoutFactory::LayoutItem::SetHeight((GridLayoutFactory::LayoutItem *)&v10, v3);
  v5 = 0;
  v6 = v2[1];
  if ( v6 != v2[3]
    || (v5 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               (__int64)v2,
               v6 + 1,
               v4),
        v5 >= 0) )
  {
    v7 = v2[1];
    v2[1] = v7 + 1;
    v8 = *v2 + 16 * v7;
    if ( v8 )
    {
      *(_QWORD *)v8 = 0LL;
      if ( (__int64 *)v8 != &v10 )
      {
        *(_QWORD *)v8 = v10;
        v10 = 0LL;
      }
      *(_DWORD *)(v8 + 8) = v11;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return (unsigned int)v5;
}
