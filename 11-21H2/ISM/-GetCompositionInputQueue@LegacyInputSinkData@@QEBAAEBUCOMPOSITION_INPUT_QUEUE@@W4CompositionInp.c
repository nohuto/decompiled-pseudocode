/*
 * XREFs of ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180013850
 * Callers:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180013370 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800E6E48 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800E71A0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800F3140 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180124160 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ?GetProcessId@LegacyInputSinkData@@QEBAIXZ @ 0x180124D14 (-GetProcessId@LegacyInputSinkData@@QEBAIXZ.c)
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801A8CCC (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180097384 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800E3980 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall LegacyInputSinkData::GetCompositionInputQueue(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rbx
  bool v7; // zf
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  __int128 v14; // [rsp+20h] [rbp-49h] BYREF
  __int128 v15; // [rsp+30h] [rbp-39h]
  __int128 v16; // [rsp+40h] [rbp-29h]
  __int64 v17; // [rsp+50h] [rbp-19h]
  _BYTE v18[64]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a2 - 1;
  if ( v4 )
  {
    v11 = v4 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
            wil::details::in1diag3::FailFast_UnexpectedMsg(
              retaddr,
              (void *)0xB7,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
              "Invalid input type provided.",
              (const char *)v14);
          v5 = 296LL;
        }
        else
        {
          v5 = 232LL;
        }
      }
      else
      {
        v5 = 168LL;
      }
    }
    else
    {
      v5 = 104LL;
    }
  }
  else
  {
    v5 = 40LL;
  }
  v6 = a1 + v5;
  if ( a2 == 5 || !*(_BYTE *)(v6 + 56) )
  {
    v14 = 0LL;
    v17 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    memset_0(v18, 0, sizeof(v18));
    if ( *(_BYTE *)(a1 + 8) > 1u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputQueueAndTransform(*(_QWORD *)a1, a2, &v14, v18);
    v7 = *(_BYTE *)(v6 + 56) == 0;
    v8 = v15;
    *(_OWORD *)v6 = v14;
    v9 = v16;
    *(_OWORD *)(v6 + 16) = v8;
    *(_QWORD *)&v8 = v17;
    *(_OWORD *)(v6 + 32) = v9;
    *(_QWORD *)(v6 + 48) = v8;
    if ( v7 )
      *(_BYTE *)(v6 + 56) = 1;
  }
  return v6;
}
