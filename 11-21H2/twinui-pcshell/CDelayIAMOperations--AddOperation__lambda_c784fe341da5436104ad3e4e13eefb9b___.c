/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___ @ 0x1800EC8E0
 * Callers:
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x1800EBD40 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJ_K0@Z @ 0x18003B1E4 (-_EnsureCapacity@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___(int *a1, _OWORD *a2)
{
  __int64 v2; // rbx
  unsigned int v5; // esi
  void (__fastcall ***v6)(_QWORD, __int64); // rax
  void *v7; // r8
  void (__fastcall ***v8)(_QWORD, __int64); // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r8d
  _QWORD *v12; // rdx

  v2 = *((_QWORD *)a1 + 2);
  v5 = 0;
  SetLastError(0);
  if ( !(unsigned int)IsWindowInDestroy(v2) && GetLastError() != 1400 )
  {
    v6 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 2) = *a1;
      *((_DWORD *)v6 + 3) = 5;
      *v6 = (void (__fastcall **)(_QWORD, __int64))off_180631768;
      *((_OWORD *)v6 + 1) = *a2;
      v9 = *((_QWORD *)a1 + 4);
      if ( v9 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::_EnsureCapacity(
                  (__int64)(a1 + 6),
                  v9 + 1,
                  v7) < 0 )
      {
        (**v8)(v8, 1LL);
      }
      else
      {
        v10 = *((_QWORD *)a1 + 3);
        v11 = 1;
        v12 = (_QWORD *)(v10 + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v12 )
          *v12 = v8;
        v5 = *a1;
        if ( *a1 != -1 )
          v11 = *a1 + 1;
        *a1 = v11;
      }
    }
  }
  return v5;
}
