/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x180011824
 * Callers:
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180173FF8 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x18001195C (-_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800119A0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(int *a1, _OWORD *a2)
{
  int v4; // r14d
  LPARAM v5; // r15
  int v6; // ebp
  bool v7; // r12
  HWND v8; // rdx
  void (__fastcall ***v9)(_QWORD, __int64); // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 3;
  CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread((CDelayIAMOperations *)a1, (enum DELAY_OPERATION_TYPE *)&v14);
  v4 = v14;
  LODWORD(v5) = 0;
  v6 = 1;
  v7 = (unsigned int)(v14 - 2) <= 1;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), v8)
    || v7 && *((_QWORD *)a1 + 1) )
  {
    v9 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = *a1;
      *((_DWORD *)v9 + 3) = v4;
      *v9 = (void (__fastcall **)(_QWORD, __int64))off_18079C328;
      *((_OWORD *)v9 + 1) = *a2;
      v11 = *((_QWORD *)a1 + 4);
      if ( v11 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  a1 + 6,
                  v11 + 1) < 0 )
      {
        (**v10)(v10, 1LL);
      }
      else
      {
        v12 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v12 )
          *v12 = v10;
        v5 = (unsigned int)*a1;
        if ( v4 != 5 )
        {
          ++a1[14];
          if ( v7 )
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 56LL))(
              *((_QWORD *)a1 + 1),
              0xFFFFLL - (v4 != 2),
              (unsigned int)v5);
          else
            PostMessageW(*((HWND *)a1 + 2), (v4 != 0) + 1025, 0LL, v5);
        }
        if ( *a1 != -1 )
          v6 = *a1 + 1;
        *a1 = v6;
      }
    }
  }
  return (unsigned int)v5;
}
