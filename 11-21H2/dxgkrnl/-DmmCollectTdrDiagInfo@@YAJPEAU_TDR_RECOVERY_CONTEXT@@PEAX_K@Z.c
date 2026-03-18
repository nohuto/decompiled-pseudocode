/*
 * XREFs of ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C039A594
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0305DE0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectTdrDiagInfo(struct _TDR_RECOVERY_CONTEXT *a1, void *a2, size_t a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  struct VIDPN_MGR *v9; // rcx
  int v10; // eax
  size_t v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  memset(a2, 0, 0x2000uLL);
  v7 = *((_QWORD *)a1 + 4);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 2792);
    if ( !v8 )
    {
      WdLogSingleEntry0(1LL);
      v8 = *(_QWORD *)(v7 + 2792);
    }
    v9 = *(struct VIDPN_MGR **)(v8 + 104);
    if ( v9 )
    {
      v11 = 0LL;
      v10 = VIDPN_MGR::AcquireDiagInfo(v9, a2, 0x2000uLL, 1, 0LL, &v11);
      if ( v10 == -2147483643 )
      {
        WdLogSingleEntry2(3LL, 0x2000LL, v11);
        return 2147483653LL;
      }
      else
      {
        if ( v10 < 0 )
          return (unsigned int)v10;
        return v3;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v7);
      return 3223192373LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
}
