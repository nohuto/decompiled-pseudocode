/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x1802DC438
 * Callers:
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1802E9154 (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJ_K0@Z @ 0x18003B1E4 (-_EnsureCapacity@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800EA0F8 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x1800EA148 (-_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___(int *a1, _QWORD *a2)
{
  int v4; // r14d
  LPARAM v5; // r15
  int v6; // ebp
  bool v7; // r12
  HWND v8; // rdx
  void *v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rdi
  void *v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 2;
  CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread((CDelayIAMOperations *)a1, (enum DELAY_OPERATION_TYPE *)&v15);
  v4 = v15;
  LODWORD(v5) = 0;
  v6 = 1;
  v7 = (unsigned int)(v15 - 2) <= 1;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), v8)
    || v7 && *((_QWORD *)a1 + 1) )
  {
    v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (void (__fastcall ***)(_QWORD, __int64))v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = *a1;
      *((_DWORD *)v9 + 3) = v4;
      *(_QWORD *)v9 = &off_1806418C0;
      *((_QWORD *)v9 + 2) = *a2;
      *((_QWORD *)v9 + 3) = a2[1];
      *((_QWORD *)v9 + 4) = a2[2];
      *((_QWORD *)v9 + 5) = a2[3];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v9 + 5);
      v12 = *((_QWORD *)a1 + 4);
      if ( v12 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::_EnsureCapacity(
                  (__int64)(a1 + 6),
                  v12 + 1,
                  v11) < 0 )
      {
        (**v10)(v10, 1LL);
      }
      else
      {
        v13 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v13 )
          *v13 = v10;
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
