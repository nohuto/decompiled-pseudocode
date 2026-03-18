/*
 * XREFs of ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0225DE6
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1C01CC2D0 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011D9C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01A0394 (-GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C01BAD80 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C0225F54 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  ADAPTER_DISPLAY *v11; // rcx
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225473LL;
  }
  if ( !a1[349] )
    WdLogSingleEntry0(1LL);
  if ( a1[350] )
  {
    v7 = a1[349];
    v8 = *(_QWORD *)(v7 + 104);
    if ( !v8 )
    {
      WdLogSingleEntry1(2LL, a1);
      return 3221225473LL;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, *(_QWORD *)(v7 + 104));
    v9 = *(_QWORD *)(v8 + 128);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 32));
      v10 = *(_QWORD *)(v8 + 128);
    }
    else
    {
      v10 = 0LL;
    }
    v11 = (ADAPTER_DISPLAY *)a1[349];
    v13 = v10;
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(v11, a2) )
    {
      if ( v10 )
      {
        if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v10 + 96), a2) )
        {
          MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                          (DMMVIDPNTOPOLOGY *)(v10 + 96),
                                          a2);
          if ( MostImportantPathFromSource )
          {
            if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(
                                 *(_QWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 96LL),
                                 0LL) == 14
              && !DMMVIDPN::IsPathFromSourcePoweredOff((DMMVIDPN *)v10, a2) )
            {
              *a3 = 1;
            }
          }
        }
      }
    }
    auto_rc<DMMVIDPN const>::reset(&v13, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
  }
  return 0LL;
}
