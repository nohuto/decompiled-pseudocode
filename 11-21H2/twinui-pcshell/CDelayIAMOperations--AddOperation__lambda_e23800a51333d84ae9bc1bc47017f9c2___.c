/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x1800E9F90
 * Callers:
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1800E9F14 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJ_K0@Z @ 0x18003B1E4 (-_EnsureCapacity@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800EA0F8 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x1800EA148 (-_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___(int *a1, _QWORD *a2)
{
  int v4; // r14d
  LPARAM v5; // r15
  int v6; // ebp
  bool v7; // r12
  HWND v8; // rdx
  char *v9; // rax
  void *v10; // r8
  void (__fastcall ***v11)(_QWORD, __int64); // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 3;
  CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread((CDelayIAMOperations *)a1, (enum DELAY_OPERATION_TYPE *)&v16);
  v4 = v16;
  LODWORD(v5) = 0;
  v6 = 1;
  v7 = (unsigned int)(v16 - 2) <= 1;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), v8)
    || v7 && *((_QWORD *)a1 + 1) )
  {
    v9 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = (void (__fastcall ***)(_QWORD, __int64))v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = *a1;
      *((_DWORD *)v9 + 3) = v4;
      *(_QWORD *)v9 = &off_1806316E0;
      *((_QWORD *)v9 + 2) = *a2;
      v12 = a2 + 1;
      *((_QWORD *)v9 + 3) = 0LL;
      if ( v9 + 24 != (char *)(a2 + 1) )
      {
        *((_QWORD *)v9 + 3) = *v12;
        *v12 = 0LL;
      }
      v13 = *((_QWORD *)a1 + 4);
      if ( v13 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::_EnsureCapacity(
                  (__int64)(a1 + 6),
                  v13 + 1,
                  v10) < 0 )
      {
        (**v11)(v11, 1LL);
      }
      else
      {
        v14 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v14 )
          *v14 = v11;
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
