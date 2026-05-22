/*
 * XREFs of ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18005F944
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18005EFB0 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18005F4BC (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?GetProcessId@LegacyInputSinkData@@QEBAIXZ @ 0x18005FACC (-GetProcessId@LegacyInputSinkData@@QEBAIXZ.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800FFBCC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180100080 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x18010CBA8 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1801B8DB4 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801C7060 (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x18005FB44 (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800FCEB8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

char *__fastcall LegacyInputSinkData::GetCompositionInputQueue(LegacyInputSinkData *a1, unsigned int a2)
{
  __int64 v4; // rax
  char *v5; // rbx
  void *WeakInputSinkHandle; // rax
  bool v7; // zf
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v11; // [rsp+20h] [rbp-49h] BYREF
  __int128 v12; // [rsp+30h] [rbp-39h]
  __int128 v13; // [rsp+40h] [rbp-29h]
  __int64 v14; // [rsp+50h] [rbp-19h]
  _BYTE v15[64]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  switch ( a2 )
  {
    case 1u:
      v4 = 40LL;
      break;
    case 2u:
      v4 = 104LL;
      break;
    case 3u:
      v4 = 168LL;
      break;
    case 4u:
      v4 = 232LL;
      break;
    case 5u:
      v4 = 296LL;
      break;
    default:
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
        "Invalid input type provided.",
        (const char *)v11);
  }
  v5 = (char *)a1 + v4;
  if ( a2 == 5 || !v5[56] )
  {
    v11 = 0LL;
    v14 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    memset_0(v15, 0, sizeof(v15));
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(a1);
    NtQueryCompositionInputQueueAndTransform(WeakInputSinkHandle, a2, &v11, v15);
    v7 = v5[56] == 0;
    v8 = v12;
    *(_OWORD *)v5 = v11;
    v9 = v13;
    *((_OWORD *)v5 + 1) = v8;
    *(_QWORD *)&v8 = v14;
    *((_OWORD *)v5 + 2) = v9;
    *((_QWORD *)v5 + 6) = v8;
    if ( v7 )
      v5[56] = 1;
  }
  return v5;
}
