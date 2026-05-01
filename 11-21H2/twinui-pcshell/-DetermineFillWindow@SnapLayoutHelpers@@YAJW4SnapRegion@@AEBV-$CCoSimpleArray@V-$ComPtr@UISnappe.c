/*
 * XREFs of ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegion@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@PEAPEAUISnappedWindow@@PEAW4FillRule@1@4@Z @ 0x1805A2EC0
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@_NPEAUtagRECT@@6PEAUSMART_FILL_OUTPUT@1@@Z @ 0x1805A568C (-GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z @ 0x1805A6A20 (-HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z.c)
 *     ?IsBetterFillCandidate@SnapLayoutHelpers@@YA_NPEAUISnappedWindow@@W4FillRule@1@W4Edge@1@012@Z @ 0x1805A6CAC (-IsBetterFillCandidate@SnapLayoutHelpers@@YA_NPEAUISnappedWindow@@W4FillRule@1@W4Edge@1@012@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 SnapLayoutHelpers::DetermineFillWindow(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(_QWORD),
        unsigned __int8 (__fastcall *a4)(_QWORD, _QWORD, unsigned int *),
        ...)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  unsigned int v6; // r12d
  int v7; // r14d
  __int64 *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r13
  unsigned int v11; // r13d
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]
  unsigned int v17; // [rsp+A8h] [rbp+50h] BYREF
  unsigned __int8 (__fastcall *v18)(_QWORD); // [rsp+B0h] [rbp+58h]
  unsigned __int8 (__fastcall *v19)(_QWORD, _QWORD, unsigned int *); // [rsp+B8h] [rbp+60h]
  __int64 v20; // [rsp+C0h] [rbp+68h] BYREF
  va_list va; // [rsp+C0h] [rbp+68h]
  __int64 *v22; // [rsp+C8h] [rbp+70h]
  int *v23; // [rsp+D0h] [rbp+78h]
  unsigned int *v24; // [rsp+D8h] [rbp+80h]
  va_list va1; // [rsp+E0h] [rbp+88h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  va_arg(va1, _QWORD);
  v22 = va_arg(va1, __int64 *);
  v23 = va_arg(va1, int *);
  v24 = va_arg(va1, unsigned int *);
  v19 = a4;
  v18 = a3;
  v4 = 0;
  *v22 = 0LL;
  *v23 = 0;
  *v24 = 0;
  v5 = 0LL;
  v20 = 0LL;
  v6 = 0;
  v7 = 4;
  v8 = *(__int64 **)a2;
  v15 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  if ( v8 == (__int64 *)v15 )
    goto LABEL_20;
  v14 = 11LL * (int)a1;
  do
  {
    v13 = *v8;
    v9 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v17 = 0;
    v10 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v9 + 72LL))(v9);
    if ( byte_1806EF1E0[v14 + v10] )
    {
      if ( v19(a1, (unsigned int)v10, &v17)
        && v18(v17)
        && (unsigned __int8)SnapLayoutHelpers::IsBetterFillCandidate(v9, 1LL, v17, v5, v7) )
      {
        v7 = 1;
        goto LABEL_16;
      }
      if ( (unsigned __int8)SnapLayoutHelpers::HasNonComplementaryEdge(a1, (unsigned int)v10, &v17) && v18(v17) )
      {
        v11 = 2;
        goto LABEL_14;
      }
    }
    else if ( v19(a1, (unsigned int)v10, &v17) && v18(v17) )
    {
      v11 = 3;
LABEL_14:
      if ( !(unsigned __int8)SnapLayoutHelpers::IsBetterFillCandidate(v9, v11, v17, v5, v7) )
        goto LABEL_17;
      v7 = v11;
LABEL_16:
      v6 = v17;
      Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)va, &v13);
      v5 = v20;
    }
LABEL_17:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    ++v8;
  }
  while ( v8 != (__int64 *)v15 );
  if ( !v5 )
  {
LABEL_20:
    v4 = -2147467259;
    goto LABEL_21;
  }
  *v23 = v7;
  *v24 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  *v22 = v5;
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
  return v4;
}
