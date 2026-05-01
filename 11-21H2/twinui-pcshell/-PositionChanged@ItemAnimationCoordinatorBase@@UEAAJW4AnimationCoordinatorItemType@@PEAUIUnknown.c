/*
 * XREFs of ?PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1804DD120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardCompareHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardMergeHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@@@QEAAJ_K0@Z @ 0x1804D1B04 (-_EnsureCapacity@-$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____ @ 0x1804DBA20 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArrayStandardCompare.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ItemAnimationCoordinatorBase::PositionChanged(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _OWORD *a4,
        _BYTE *a5)
{
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  bool v13; // bl
  _QWORD *v14; // rdi
  __int64 v16; // r14
  void *v17; // r8
  int v18; // r12d
  __int128 v19; // xmm6
  __int128 v20; // xmm7
  __int64 v21; // rdx
  __int64 v22; // rcx
  _BYTE v23[8]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v24; // [rsp+40h] [rbp-69h] BYREF
  int v25; // [rsp+48h] [rbp-61h] BYREF
  _OWORD v26[3]; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp-29h] BYREF
  __int128 v28; // [rsp+88h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+57h]

  v25 = a2;
  *a5 = 1;
  if ( *(_BYTE *)(a1 + 232) )
  {
    v23[0] = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 112LL))(a1, a2, v23) )
    {
      v24 = 0LL;
      v8 = **a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      v9 = v8(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v24);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = (unsigned int)v9;
        v12 = 77LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
          (const char *)v11);
        goto LABEL_8;
      }
      memset(v26, 0, 44);
      *(_QWORD *)&v28 = &v25;
      *((_QWORD *)&v28 + 1) = &v24;
      v13 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____(
                   (_QWORD *)(a1 + 152),
                   (__int64)&v28,
                   (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v26,
                   &v27) >= 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v26);
      v14 = (_QWORD *)(a1 + 152);
      if ( v13 )
      {
        *(_OWORD *)(*v14 + 48 * v27 + 28) = *a4;
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 88LL))(v24, &v28);
        v16 = v24;
        *(_QWORD *)&v26[0] = v24;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v26);
        v18 = v25;
        DWORD2(v26[0]) = v25;
        v19 = v28;
        *(_OWORD *)((char *)v26 + 12) = v28;
        v20 = *a4;
        *(_OWORD *)((char *)&v26[1] + 12) = *a4;
        v10 = 0;
        v21 = v14[1];
        if ( v21 != v14[3]
          || (v10 = CTSimpleArray<ItemAnimationCoordinatorBase::PositionChangedInfo,4294967294,CTPolicyCoTaskMem<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardCompareHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardMergeHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>>::_EnsureCapacity(
                      (__int64)v14,
                      v21 + 1,
                      v17),
              v10 >= 0) )
        {
          v22 = *v14 + 48 * v14[1]++;
          if ( v22 )
          {
            *(_QWORD *)v22 = 0LL;
            if ( (_OWORD *)v22 != v26 )
            {
              *(_QWORD *)v22 = v16;
              *(_QWORD *)&v26[0] = 0LL;
            }
            *(_DWORD *)(v22 + 8) = v18;
            *(_OWORD *)(v22 + 12) = v19;
            *(_OWORD *)(v22 + 28) = v20;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v26);
        if ( v10 < 0 )
        {
          v11 = (unsigned int)v10;
          v12 = 91LL;
          goto LABEL_17;
        }
      }
      *a5 = v23[0];
      v10 = 0;
LABEL_8:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      return (unsigned int)v10;
    }
  }
  return 0LL;
}
