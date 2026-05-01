/*
 * XREFs of ?GetSnappedWindowsOnMonitor@CSnappedWindowModel@@UEAAJPEAUIImmersiveMonitor@@W4SnappedWindowFlags@@PEAV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180598CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnappedWindowModel::GetSnappedWindowsOnMonitor(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  _QWORD *v7; // rsi
  _QWORD *v8; // r12
  int v9; // r14d
  __int64 v10; // rbx
  bool v11; // al
  _QWORD *v12; // rax
  int v13; // ebp
  void *v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  __int64 *v17; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  int v21[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v24; // [rsp+60h] [rbp+8h] BYREF

  v7 = *(_QWORD **)(a1 + 40);
  v8 = &v7[*(_QWORD *)(a1 + 48)];
  if ( v7 == v8 )
    return 0LL;
  v9 = a3 & 1;
  while ( 1 )
  {
    *(_QWORD *)v21 = *v7;
    v10 = *(_QWORD *)v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v21);
    v11 = (((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10) - 1) & 0xFFFFFFF9) == 0;
    if ( !v9 && ((a3 & 2) == 0 || v11) )
      goto LABEL_12;
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 64LL))(v10, v22);
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v12 + 96LL))(*v12, a2, &v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v22);
    if ( v13 < 0 )
      break;
    if ( v24 )
    {
      v15 = a4[1];
      if ( v15 == a4[3] )
      {
        v16 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)a4,
                v15 + 1,
                v14);
        v13 = v16;
        if ( v16 < 0 )
        {
          v19 = (unsigned int)v16;
          v20 = 83LL;
          goto LABEL_16;
        }
      }
      v17 = (__int64 *)(*a4 + 8 * a4[1]++);
      if ( v17 )
      {
        *v17 = v10;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v17);
      }
    }
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v21);
    if ( ++v7 == v8 )
      return 0LL;
  }
  v19 = (unsigned int)v13;
  v20 = 80LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
    (const char *)v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v21);
  return (unsigned int)v13;
}
