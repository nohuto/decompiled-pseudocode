/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1C01D5F70
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D5B10 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01D5D78 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C01D6044 (_EnforceDriverModelScalingPolicy.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(struct _LUID *a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A8h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v12);
  v6 = (__int64)v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      WdLogSingleEntry1(1LL, 8382LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Potentinal Deadlock code path, Please contact basevid",
        8382LL,
        0LL,
        0LL,
        0LL,
        0LL);
      EnforceDriverModelScalingPolicy(v6, a2, v9);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, (struct DXGADAPTER *const)v6, 0LL);
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
      if ( v7 < 0 )
      {
        v10 = *(int *)(v6 + 408);
        v11 = v7;
        if ( v7 == -1073741130 )
        {
          WdLogSingleEntry4(3LL, -1073741130LL, v6, v10, *(unsigned int *)(v6 + 404));
        }
        else
        {
          WdLogSingleEntry4(2LL, v7, v6, v10, *(unsigned int *)(v6 + 404));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire shared access on adapter - will not enforce scaling policy. (Status = 0x%I64x, pA"
                      "dapter = 0x%I64x, pAdapter->GetLuid() = 0x%I64x%08I64x)",
            v11,
            v6,
            *(int *)(v6 + 408),
            *(unsigned int *)(v6 + 404),
            0LL);
        }
      }
      else
      {
        EnforceDriverModelScalingPolicy(v6, a2, v8);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v13);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
    }
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1->HighPart, a1->LowPart);
  }
}
