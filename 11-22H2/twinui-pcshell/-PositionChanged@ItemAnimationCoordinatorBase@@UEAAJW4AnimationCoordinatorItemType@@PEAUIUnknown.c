/*
 * XREFs of ?PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x180594F00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardCompareHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardMergeHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@@@QEAAJ_K0@Z @ 0x180589418 (-_EnsureCapacity@-$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____ @ 0x180593810 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArrayStandardCompare.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ItemAnimationCoordinatorBase::PositionChanged(
        _BYTE *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _OWORD *a4,
        _BYTE *a5)
{
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  int v10; // edi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  bool v14; // bl
  __int64 v16; // rbx
  void *v17; // r8
  int v18; // r12d
  __int128 v19; // xmm6
  __int128 v20; // xmm7
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v25; // [rsp+40h] [rbp-69h] BYREF
  int v26; // [rsp+48h] [rbp-61h] BYREF
  _OWORD v27[3]; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-29h] BYREF
  __int128 v29; // [rsp+88h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+57h]

  v26 = a2;
  *a5 = 1;
  if ( a1[232] )
  {
    v24[0] = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, _BYTE *))(*(_QWORD *)a1 + 112LL))(a1, a2, v24) )
    {
      v25 = 0LL;
      v8 = **a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      v9 = v8(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v25);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = (unsigned int)v9;
        v12 = 77LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
          (const char *)v11);
        goto LABEL_8;
      }
      memset(v27, 0, 44);
      v13 = a1 + 152;
      *(_QWORD *)&v29 = &v26;
      *((_QWORD *)&v29 + 1) = &v25;
      v14 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____(
                   v13,
                   (__int64)&v29,
                   (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v27,
                   &v28) >= 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v27);
      if ( v14 )
      {
        *(_OWORD *)(*v13 + 48 * v28 + 28) = *a4;
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 88LL))(v25, &v29);
        v16 = v25;
        *(_QWORD *)&v27[0] = v25;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v27);
        v18 = v26;
        DWORD2(v27[0]) = v26;
        v19 = v29;
        *(_OWORD *)((char *)v27 + 12) = v29;
        v20 = *a4;
        *(_OWORD *)((char *)&v27[1] + 12) = *a4;
        v10 = 0;
        v21 = v13[1];
        if ( v21 != v13[3]
          || (v10 = CTSimpleArray<ItemAnimationCoordinatorBase::PositionChangedInfo,4294967294,CTPolicyCoTaskMem<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardCompareHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardMergeHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>>::_EnsureCapacity(
                      (__int64)v13,
                      v21 + 1,
                      v17),
              v10 >= 0) )
        {
          v22 = v13[1];
          v13[1] = v22 + 1;
          v23 = *v13 + 48 * v22;
          if ( v23 )
          {
            *(_QWORD *)v23 = 0LL;
            if ( (_OWORD *)v23 != v27 )
            {
              *(_QWORD *)v23 = v16;
              *(_QWORD *)&v27[0] = 0LL;
            }
            *(_DWORD *)(v23 + 8) = v18;
            *(_OWORD *)(v23 + 12) = v19;
            *(_OWORD *)(v23 + 28) = v20;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v27);
        if ( v10 < 0 )
        {
          v11 = (unsigned int)v10;
          v12 = 91LL;
          goto LABEL_17;
        }
      }
      *a5 = v24[0];
      v10 = 0;
LABEL_8:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      return (unsigned int)v10;
    }
  }
  return 0LL;
}
