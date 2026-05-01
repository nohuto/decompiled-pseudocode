/*
 * XREFs of ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1805899EC
 * Callers:
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x180588EC8 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1802D73A4 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x18056DC74 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     ??$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ$$QEAVLayoutRow@GridLayoutFactory@@PEA_K@Z @ 0x180587FCC (--$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPP.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAXXZ @ 0x180588BC4 (-RemoveAll@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayou.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAXXZ @ 0x180588C40 (-RemoveAll@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayout.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1805897BC (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x180589D30 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GridLayoutFactory::_SplitIntoRows(
        GridLayoutFactory *this,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        int *a5)
{
  unsigned int **v6; // rbx
  unsigned __int64 v8; // rsi
  int *v9; // r14
  _DWORD *v10; // r15
  _DWORD *v11; // r12
  _DWORD *v12; // r13
  int *v13; // rdx
  int v14; // ebx
  int v15; // ecx
  int v16; // r8d
  int v17; // ebx
  int v19; // eax
  void *v20; // r8
  int v21; // r14d
  unsigned __int64 v22; // r15
  int v23; // esi
  unsigned int *v24; // rbx
  unsigned __int64 v25; // r13
  __int64 v26; // r12
  _QWORD *v27; // r14
  int v28; // ebp
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r14
  int v32; // eax
  _DWORD *v33; // [rsp+20h] [rbp-78h]
  _DWORD *v34; // [rsp+28h] [rbp-70h]
  unsigned int *v35; // [rsp+28h] [rbp-70h]
  __int64 v36[4]; // [rsp+30h] [rbp-68h] BYREF
  int v37; // [rsp+50h] [rbp-48h]
  int v38; // [rsp+54h] [rbp-44h]
  int v39; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  _DWORD *v42; // [rsp+B0h] [rbp+18h]
  int v43; // [rsp+B0h] [rbp+18h]

  v6 = (unsigned int **)a2;
  *a5 = 0;
  CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAll((__int64)a4);
  v8 = 0LL;
  v9 = (int *)((char *)this + 516);
  v10 = (_DWORD *)((char *)this + 172);
  v11 = (_DWORD *)((char *)this + 168);
  v12 = (_DWORD *)((char *)this + 156);
  v42 = (_DWORD *)((char *)this + 152);
  v34 = (_DWORD *)((char *)this + 116);
  v13 = (int *)((char *)this + 48);
  v33 = (_DWORD *)((char *)this + 48);
  if ( a3 )
  {
    do
    {
      v14 = *v13;
      GridLayoutFactory::_GetMaximumRowHeight(this, a3);
      v15 = *((_DWORD *)this + 29)
          + *((_DWORD *)this + 38)
          + *v11
          + ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), *v9)
          + *v10
          + *v12;
      memset(v36, 0, sizeof(v36));
      v37 = v15;
      v38 = v16;
      v39 = v14;
      v17 = CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::_Add<GridLayoutFactory::LayoutRow &&>(
              a4,
              v36);
      CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll((__int64)v36);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BC,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v17);
        return (unsigned int)v17;
      }
      ++v8;
      v13 = (int *)((char *)this + 48);
    }
    while ( v8 < a3 );
    v6 = (unsigned int **)a2;
  }
  else
  {
    v42 = (_DWORD *)((char *)this + 152);
    v34 = (_DWORD *)((char *)this + 116);
    v33 = (_DWORD *)((char *)this + 48);
  }
  v19 = ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), *v9);
  v21 = (int)GridLayoutFactory::s_GetTotalWidthForHeight(
               v6,
               (unsigned int)*v33,
               (unsigned int)(*v10 + *v12 + *v34 + *v11 + *v42 + v19),
               0LL)
      / (int)a3;
  v43 = v21;
  v22 = 0LL;
  v23 = 0;
  v24 = *v6;
  v35 = &v24[4 * *(_QWORD *)(a2 + 8)];
  if ( v24 == v35 )
    return 0LL;
  v25 = a3 - 1;
  v26 = 0LL;
  while ( 1 )
  {
    if ( v22 < v25
      && (v23 + (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v24 + 72LL))(*(_QWORD *)v24, v24[2]) / 2 > v21
       || (int)(v23 + (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v24 + 72LL))(*(_QWORD *)v24, v24[2])) > *((_DWORD *)this + 132) - *((_DWORD *)this + 130)) )
    {
      ++v22;
      v26 += 48LL;
      v23 = 0;
    }
    v27 = (_QWORD *)(v26 + *a4);
    v28 = 0;
    v29 = v27[1];
    if ( v29 == v27[3] )
    {
      v28 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              v26 + *a4,
              v29 + 1,
              v20);
      v29 = v27[1];
      if ( v28 < 0 )
        break;
    }
    v30 = v29 + 1;
    v27[1] = v30;
    v31 = 16 * v30 + *v27 - 16LL;
    if ( v31 )
    {
      *(_QWORD *)v31 = *(_QWORD *)v24;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v31);
      *(_DWORD *)(v31 + 8) = v24[2];
      break;
    }
LABEL_18:
    v23 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v24 + 72LL))(*(_QWORD *)v24, v24[2]);
    v32 = v23;
    if ( v23 <= *a5 )
      v32 = *a5;
    *a5 = v32;
    v21 = v43;
    if ( v23 + *v33 >= v43 )
    {
      if ( v22 < v25 )
      {
        ++v22;
        v26 += 48LL;
        v23 = 0;
      }
    }
    else
    {
      v23 += *v33;
    }
    v24 += 4;
    if ( v24 == v35 )
      return 0LL;
  }
  if ( v28 >= 0 )
    goto LABEL_18;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DC,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
    (const char *)(unsigned int)v28);
  return (unsigned int)v28;
}
