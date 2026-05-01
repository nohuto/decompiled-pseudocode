/*
 * XREFs of ?GetSnappedWindowsOnMonitor@CSnappedWindowModel@@UEAAJPEAUIImmersiveMonitor@@PEAV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180667200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnappedWindowModel::GetSnappedWindowsOnMonitor(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  _QWORD *v7; // rax
  int v8; // esi
  void *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v5 = *(_QWORD **)(a1 + 40);
  v6 = &v5[*(_QWORD *)(a1 + 48)];
  while ( 1 )
  {
    if ( v5 == v6 )
      return 0LL;
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v5 + 64LL))(*v5, &v18);
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v7 + 96LL))(*v7, a2, &v17);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    if ( v8 < 0 )
      break;
    if ( !v17 )
      goto LABEL_10;
    v8 = 0;
    v10 = a3[1];
    if ( v10 != a3[3]
      || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)a3,
                 v10 + 1,
                 v9),
          v8 >= 0) )
    {
      v11 = a3[1];
      a3[1] = v11 + 1;
      v12 = (_QWORD *)(*a3 + 8 * v11);
      if ( !v12 )
        goto LABEL_10;
      v13 = *v5;
      *v12 = *v5;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
    if ( v8 < 0 )
    {
      v15 = 87LL;
      goto LABEL_15;
    }
LABEL_10:
    ++v5;
  }
  v15 = 84LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
