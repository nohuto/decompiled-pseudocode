/*
 * XREFs of ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___ @ 0x1804B75AC
 * Callers:
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x1802348DA (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____lambda_2c2119f3dd10f8dbad56a05ca320bbc2__&_void___&_ @ 0x1804B7870 (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 *ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____lambda_2c2119f3dd10f8dbad56a05ca320bbc2____void; // rax
  void *v6; // r8
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r8
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = a3;
  v16 = 0LL;
  v4 = (_QWORD *)(a1 + 8);
  ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____lambda_2c2119f3dd10f8dbad56a05ca320bbc2____void = (__int64 *)Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____lambda_2c2119f3dd10f8dbad56a05ca320bbc2____void_____(&v15, a2, &v16);
  v7 = *ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____lambda_2c2119f3dd10f8dbad56a05ca320bbc2____void;
  v16 = *ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____lambda_2c2119f3dd10f8dbad56a05ca320bbc2____void;
  *ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____lambda_2c2119f3dd10f8dbad56a05ca320bbc2____void = 0LL;
  v8 = 0;
  v9 = v4[1];
  if ( v9 != v4[3]
    || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)v4,
               v9 + 1,
               v6),
        v10 = v7,
        v8 >= 0) )
  {
    v11 = (__int64 *)(*v4 + 8 * v4[1]++);
    v10 = v7;
    if ( v11 )
    {
      *v11 = 0LL;
      if ( v11 != &v16 )
      {
        *v11 = v7;
        v7 = 0LL;
        v10 = 0LL;
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ObservableProperty.h",
      (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return (unsigned int)v8;
}
