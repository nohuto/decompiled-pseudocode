/*
 * XREFs of ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1804D20C8
 * Callers:
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1804D15B4 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1803D98E0 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1804B12C4 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     ??$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ$$QEAVLayoutRow@GridLayoutFactory@@PEA_K@Z @ 0x1804D078C (--$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPP.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804D12B8 (-RemoveAll@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayou.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804D1328 (-RemoveAll@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayout.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1804D1E98 (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1804D23AC (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GridLayoutFactory::_SplitIntoRows(
        GridLayoutFactory *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5)
{
  _QWORD *v5; // r12
  int v9; // ebp
  unsigned __int64 i; // rdi
  int v11; // ebx
  int v12; // ecx
  int v13; // r8d
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  void *v17; // r8
  unsigned __int64 v18; // rsi
  unsigned int *v19; // rdi
  unsigned __int64 v20; // r13
  __int64 v21; // r14
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // r12d
  __int64 v26; // rbx
  int v27; // eax
  int v29[2]; // [rsp+20h] [rbp-78h]
  __int64 v30[4]; // [rsp+28h] [rbp-70h] BYREF
  int v31; // [rsp+48h] [rbp-50h]
  int v32; // [rsp+4Ch] [rbp-4Ch]
  int v33; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v35; // [rsp+B0h] [rbp+18h]

  v5 = (_QWORD *)a4;
  v9 = 0;
  *a5 = 0;
  CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAll(a4);
  for ( i = 0LL; i < a3; ++i )
  {
    v11 = *((_DWORD *)this + 12);
    GridLayoutFactory::_GetMaximumRowHeight(this, a3);
    v12 = *((_DWORD *)this + 38)
        + ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), *((_DWORD *)this + 129))
        + *((_DWORD *)this + 29)
        + *((_DWORD *)this + 39)
        + *((_DWORD *)this + 42)
        + *((_DWORD *)this + 43);
    memset(v30, 0, sizeof(v30));
    v31 = v12;
    v32 = v13;
    v33 = v11;
    v14 = CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::_Add<GridLayoutFactory::LayoutRow &&>(
            v5,
            v30);
    CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll((__int64)v30);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BC,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
  }
  v15 = ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), *((_DWORD *)this + 129));
  v16 = (int)GridLayoutFactory::s_GetTotalWidthForHeight(
               a2,
               *((unsigned int *)this + 12),
               (unsigned int)(*((_DWORD *)this + 29)
                            + *((_DWORD *)this + 38)
                            + *((_DWORD *)this + 39)
                            + *((_DWORD *)this + 42)
                            + *((_DWORD *)this + 43)
                            + v15),
               0LL)
      / (int)a3;
  v35 = v16;
  v18 = 0LL;
  v19 = *(unsigned int **)a2;
  *(_QWORD *)v29 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 == *(_QWORD *)v29 )
    return 0LL;
  v20 = a3 - 1;
  v21 = 0LL;
  while ( 1 )
  {
    if ( v18 < v20
      && (v9 + (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v19 + 72LL))(*(_QWORD *)v19, v19[2]) / 2 > v16
       || (int)(v9 + (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v19 + 72LL))(*(_QWORD *)v19, v19[2])) > *((_DWORD *)this + 132) - *((_DWORD *)this + 130)) )
    {
      ++v18;
      v21 += 48LL;
      v9 = 0;
    }
    v22 = (_QWORD *)(v21 + *v5);
    v23 = v22[1];
    if ( v23 != v22[3] )
      goto LABEL_13;
    v24 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
            v21 + *v5,
            v23 + 1,
            v17);
    v25 = v24;
    if ( v24 < 0 )
      break;
    v5 = (_QWORD *)a4;
LABEL_13:
    ++v22[1];
    v26 = 16LL * v22[1] + *v22 - 16LL;
    if ( v26 )
    {
      *(_QWORD *)v26 = *(_QWORD *)v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v26);
      *(_DWORD *)(v26 + 8) = v19[2];
    }
    v9 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v19 + 72LL))(*(_QWORD *)v19, v19[2]);
    v27 = v9;
    if ( v9 <= *a5 )
      v27 = *a5;
    *a5 = v27;
    v16 = v35;
    if ( v9 + *((_DWORD *)this + 12) >= v35 )
    {
      if ( v18 < v20 )
      {
        ++v18;
        v21 += 48LL;
        v9 = 0;
      }
    }
    else
    {
      v9 += *((_DWORD *)this + 12);
    }
    v19 += 4;
    if ( v19 == *(unsigned int **)v29 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DC,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
    (const char *)(unsigned int)v24);
  return v25;
}
