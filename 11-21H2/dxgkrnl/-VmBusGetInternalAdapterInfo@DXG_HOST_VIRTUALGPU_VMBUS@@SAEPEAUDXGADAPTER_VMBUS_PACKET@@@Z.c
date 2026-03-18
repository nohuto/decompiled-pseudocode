/*
 * XREFs of ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E290
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C0336B80 (-IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C03649C8 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rsi
  char v3; // bl
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx
  bool IsVailEnabled; // dl
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned int v15; // r8d
  DXGPUSHLOCK *v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+68h] [rbp-A0h]
  _QWORD v19[89]; // [rsp+70h] [rbp-98h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v17[1]);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v18 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    memset(v19, 0, sizeof(v19));
    DXGADAPTER::FillInternalAdapterInfo(
      *(DXGADAPTER **)(v2 + 16),
      (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v19);
    HIDWORD(v19[1]) ^= (BYTE4(v19[1]) ^ *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL)) & 1;
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL);
    v5 = *(_BYTE *)(v4 + 338);
    *(_BYTE *)(v4 + 338) = 0;
    HIDWORD(v19[1]) ^= (BYTE4(v19[1]) ^ (unsigned __int8)(2 * v5)) & 2;
    v6 = *((_QWORD *)a1 + 12);
    HIDWORD(v19[0]) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 2756LL);
    IsVailEnabled = DXGVIRTUALMACHINE::IsVailEnabled(*(DXGVIRTUALMACHINE **)(v6 + 608));
    v10 = *((_QWORD *)a1 + 12);
    v11 = HIDWORD(v19[1]) ^ (BYTE4(v19[1]) ^ (unsigned __int8)(4 * IsVailEnabled)) & 4;
    HIDWORD(v19[1]) = v11;
    v12 = *(_QWORD *)(v10 + 608);
    v13 = *(_DWORD *)(v12 + 392);
    if ( v13 >= 0x21 )
      HIDWORD(v19[1]) = v11 & 0xFFFFFFDF | (*(_QWORD *)(v12 + 272) != 0LL ? 0x20 : 0);
    if ( v13 >= 0x28 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_AsyncVmBusMessages__private_reporting,
        0x1820C68u,
        v8,
        v9,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
        1);
      v14 = *((_QWORD *)a1 + 13);
      HIDWORD(v19[1]) |= 0x40u;
      *(_BYTE *)(v14 + 339) = 1;
    }
    v19[88] = *(_QWORD *)(*((_QWORD *)a1 + 10) + 28LL);
    if ( v13 > 0x10 )
      v15 = v13 < 0x22 ? 704 : 712;
    else
      v15 = 24;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v19, v15);
    v3 = 1;
  }
  else
  {
    WdLogSingleEntry1(2LL, 5057LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5057LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v3;
}
