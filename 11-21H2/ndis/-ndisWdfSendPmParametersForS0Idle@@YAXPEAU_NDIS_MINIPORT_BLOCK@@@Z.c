/*
 * XREFs of ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0087DC0
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C005B440 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001D894 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     wil::details::lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___::_lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___ @ 0x1C00353C8 (wil--details--lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___--_lambda_call__lambda_c18e.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0jqqqqqqqqqq_EtwWriteTransfer @ 0x1C00558FC (McTemplateK0jqqqqqqqqqq_EtwWriteTransfer.c)
 */

void __fastcall ndisWdfSendPmParametersForS0Idle(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // al
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // [rsp+48h] [rbp-11h]
  char v8[8]; // [rsp+70h] [rbp+17h] BYREF
  char *v9; // [rsp+78h] [rbp+1Fh] BYREF
  char v10; // [rsp+80h] [rbp+27h]
  __int128 v11; // [rsp+88h] [rbp+2Fh] BYREF
  int v12; // [rsp+98h] [rbp+3Fh]

  *(_QWORD *)v8 = a1;
  v1 = ndisReferenceMiniportByHandle(a1, 1, 0xEu);
  v3 = 0LL;
  if ( v1 )
  {
    v4 = *(_QWORD *)v8;
    v9 = v8;
    v10 = 1;
    v11 = *(_OWORD *)(*(_QWORD *)v8 + 1120LL);
    v5 = *(_DWORD *)(*(_QWORD *)v8 + 1136LL);
    v12 = v5;
    HIDWORD(v11) = 0;
    if ( (ndisAoAcCapable || ndisAoAcTest)
      && (v2 = (unsigned int)ndisIdleCondition, (unsigned int)ndisIdleCondition > NdisIdleConditionAny) )
    {
      if ( (unsigned int)(ndisIdleCondition - 2) > 1 )
        NT_ASSERT(
          "ndisIdleCondition == NdisIdleConditionAnyLowLatency || ndisIdleCondition == NdisIdleConditionAny || ndisIdleCo"
          "ndition == NdisIdleConditionUnicastOnly || ndisIdleCondition == NdisIdleConditionL2ConnectedOnly");
      v6 = DWORD1(v11);
      v2 = 2LL;
      if ( ndisIdleCondition == NdisIdleConditionL2ConnectedOnly )
        v6 = 0LL;
      DWORD1(v11) = v6;
      if ( (*(_BYTE *)(*(_QWORD *)v8 + 1112LL) & 2) != 0 )
        v3 = 2LL;
      HIDWORD(v11) = v3;
      if ( (*(_DWORD *)(*(_QWORD *)v8 + 1112LL) & 1) != 0 )
      {
        v3 = (unsigned int)v3 | 1;
        HIDWORD(v11) = v3;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v8 + 1112LL) & 2) != 0 )
      {
        v6 = (unsigned int)v6 | 2;
        DWORD1(v11) = v6;
      }
    }
    else
    {
      v6 = DWORD1(v11);
      v3 = 16LL;
      HIDWORD(v11) = 16;
    }
    if ( (byte_1C00EE583 & 4) != 0 )
    {
      McTemplateK0jqqqqqqqqqq_EtwWriteTransfer(
        v3,
        v6,
        (const GUID *)(*(_QWORD *)v8 + 4008LL),
        *(_QWORD *)v8 + 4008LL,
        *(_DWORD *)(*(_QWORD *)v8 + 1064LL),
        *(_DWORD *)(*(_QWORD *)v8 + 1068LL),
        *(_DWORD *)(*(_QWORD *)v8 + 1088LL),
        *(_DWORD *)(*(_QWORD *)v8 + 1112LL),
        *(_DWORD *)(*(_QWORD *)v8 + 1116LL),
        v7,
        v6,
        SBYTE8(v11),
        v3,
        v5);
      v4 = *(_QWORD *)v8;
    }
    (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(*(_QWORD *)(*(_QWORD *)(v4 + 3760) + 360LL) + 96LL))(
      *(_QWORD *)(v4 + 24),
      &v11,
      v2);
    wil::details::lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___::_lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___((__int64)&v9);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xEu,
      0xCu,
      (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
      *(_QWORD *)v8);
  }
}
