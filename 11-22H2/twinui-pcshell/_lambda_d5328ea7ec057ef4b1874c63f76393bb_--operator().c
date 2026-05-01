/*
 * XREFs of _lambda_d5328ea7ec057ef4b1874c63f76393bb_::operator() @ 0x180588308
 * Callers:
 *     GridLayoutFactory::_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___ @ 0x180588098 (GridLayoutFactory--_ForEachGridItem__lambda_d5328ea7ec057ef4b1874c63f76393bb___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x18058852C (-AddRow@GridLayout@@QEAAJPEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d5328ea7ec057ef4b1874c63f76393bb_::operator()(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  _QWORD *v9; // rdi
  void *v10; // r8
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, *(unsigned int *)(*(_QWORD *)a1 + 4LL));
  v5 = **(_DWORD **)(a1 + 8);
  if ( v5 )
  {
    v4 += *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
    if ( v5 + v4 > **(_DWORD **)a1 )
    {
      v6 = GridLayout::AddRow(*(GridLayout **)(a1 + 24), *(unsigned __int64 **)(a1 + 32));
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A1,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
      **(_DWORD **)(a1 + 8) = 0;
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
             a2,
             *(unsigned int *)(*(_QWORD *)a1 + 4LL));
    }
  }
  **(_DWORD **)(a1 + 8) += v4;
  v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL) + 56LL * **(_QWORD **)(a1 + 32));
  v16 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  v11 = 0;
  v12 = v9[4];
  if ( v12 != v9[6]
    || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)(v9 + 3),
                v12 + 1,
                v10),
        v11 >= 0) )
  {
    v13 = v9[4];
    v9[4] = v13 + 1;
    v14 = (__int64 *)(v9[3] + 8 * v13);
    if ( v14 )
    {
      *v14 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
