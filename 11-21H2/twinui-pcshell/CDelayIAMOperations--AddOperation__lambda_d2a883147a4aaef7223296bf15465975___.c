/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x180058134
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180057F20 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJ_K0@Z @ 0x18003B1E4 (-_EnsureCapacity@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800EA0F8 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x1800EA148 (-_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___(
        int *a1,
        __int64 a2,
        int a3)
{
  int v5; // r14d
  LPARAM v6; // r15
  int v7; // ebp
  bool v8; // r12
  HWND v9; // rdx
  char *v10; // rax
  void *v11; // r8
  void (__fastcall ***v12)(_QWORD, __int64); // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread((CDelayIAMOperations *)a1, (enum DELAY_OPERATION_TYPE *)&v18);
  v5 = v18;
  LODWORD(v6) = 0;
  v7 = 1;
  v8 = (unsigned int)(v18 - 2) <= 1;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), v9)
    || v8 && *((_QWORD *)a1 + 1) )
  {
    v10 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = (void (__fastcall ***)(_QWORD, __int64))v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 2) = *a1;
      *((_DWORD *)v10 + 3) = v5;
      *(_QWORD *)v10 = &off_180639F08;
      *((_QWORD *)v10 + 2) = *(_QWORD *)a2;
      v13 = (_QWORD *)(a2 + 8);
      *((_QWORD *)v10 + 3) = 0LL;
      if ( v10 + 24 != (char *)(a2 + 8) )
      {
        *((_QWORD *)v10 + 3) = *v13;
        *v13 = 0LL;
      }
      v10[32] = *(_BYTE *)(a2 + 16);
      v14 = (_QWORD *)(a2 + 24);
      *((_QWORD *)v10 + 5) = 0LL;
      if ( v10 + 40 != (char *)(a2 + 24) )
      {
        *((_QWORD *)v10 + 5) = *v14;
        *v14 = 0LL;
      }
      *((_DWORD *)v10 + 12) = *(_DWORD *)(a2 + 32);
      v15 = *((_QWORD *)a1 + 4);
      if ( v15 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::_EnsureCapacity(
                  (__int64)(a1 + 6),
                  v15 + 1,
                  v11) < 0 )
      {
        (**v12)(v12, 1LL);
      }
      else
      {
        v16 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v16 )
          *v16 = v12;
        v6 = (unsigned int)*a1;
        if ( v5 != 5 )
        {
          ++a1[14];
          if ( v8 )
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 56LL))(
              *((_QWORD *)a1 + 1),
              0xFFFFLL - (v5 != 2),
              (unsigned int)v6);
          else
            PostMessageW(*((HWND *)a1 + 2), (v5 != 0) + 1025, 0LL, v6);
        }
        if ( *a1 != -1 )
          v7 = *a1 + 1;
        *a1 = v7;
      }
    }
  }
  return (unsigned int)v6;
}
