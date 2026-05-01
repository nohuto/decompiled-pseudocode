/*
 * XREFs of _lambda_d5328ea7ec057ef4b1874c63f76393bb_::operator() @ 0x1804D0AC8
 * Callers:
 *     GridLayoutFactory::_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___ @ 0x1804D0858 (GridLayoutFactory--_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x1804D0C20 (-AddRow@GridLayout@@QEAAJPEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d5328ea7ec057ef4b1874c63f76393bb_::operator()(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int *v5; // rdx
  int v6; // r9d
  int v7; // edi
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  void *v10; // r8
  __int64 v11; // rdx
  __int64 *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, *(unsigned int *)(*(_QWORD *)a1 + 4LL));
  v5 = *(int **)(a1 + 8);
  v6 = *v5;
  if ( *v5 )
  {
    v4 += *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
    if ( *v5 + v4 > **(_DWORD **)a1 )
    {
      v7 = GridLayout::AddRow(*(GridLayout **)(a1 + 24), *(unsigned __int64 **)(a1 + 32));
      if ( v7 < 0 )
      {
        v8 = 673LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v7);
        return (unsigned int)v7;
      }
      **(_DWORD **)(a1 + 8) = 0;
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
             a2,
             *(unsigned int *)(*(_QWORD *)a1 + 4LL));
      v5 = *(int **)(a1 + 8);
      v6 = *v5;
    }
  }
  *v5 = v6 + v4;
  v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL) + 56LL * **(_QWORD **)(a1 + 32));
  v15 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  v7 = 0;
  v11 = v9[4];
  if ( v11 != v9[6]
    || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)(v9 + 3),
               v11 + 1,
               v10),
        v7 >= 0) )
  {
    ++v9[4];
    v12 = (__int64 *)(v9[3] + 8LL * v9[4] - 8);
    if ( v9[3] + 8LL * v9[4] != 8 )
    {
      *v12 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  if ( v7 < 0 )
  {
    v8 = 683LL;
    goto LABEL_12;
  }
  return (unsigned int)v7;
}
