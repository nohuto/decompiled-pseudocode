/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C01D5E50
 * Callers:
 *     DxgkGetPathsModality @ 0x1C01AE940 (DxgkGetPathsModality.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C01B72F8 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C01D3DA0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D5B10 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01D5D78 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01D751C (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01D3BBC (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, int *a2)
{
  int AdapterDefaultScaling; // edi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  struct DXGADAPTER *v7; // rbx
  __int64 v8; // rcx
  char v9[8]; // [rsp+50h] [rbp-28h] BYREF
  struct DXGADAPTER *v10; // [rsp+58h] [rbp-20h]
  char v11; // [rsp+60h] [rbp-18h]
  unsigned __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  AdapterDefaultScaling = 3;
  Global = DXGGLOBAL_GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v12);
  v7 = v6;
  if ( v6 && *((_QWORD *)v6 + 349) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      WdLogSingleEntry1(1LL, 8254LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Potentinal Deadlock code path, Please contact basevid",
        8254LL,
        0LL,
        0LL,
        0LL,
        0LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
        (__int64 *)&v12,
        *(_QWORD *)(*((_QWORD *)v7 + 349) + 104LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v7 + 349) + 104LL));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    }
    else
    {
      v10 = v7;
      v11 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
      if ( *((_DWORD *)v7 + 50) == 1 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64 *)&v12,
          *(_QWORD *)(*((_QWORD *)v7 + 349) + 104LL));
        v8 = *((_QWORD *)v7 + 349);
        if ( *(_BYTE *)(v8 + 289) )
          AdapterDefaultScaling = 4;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v8 + 104));
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
      }
      else
      {
        WdLogSingleEntry3(3LL, v7, *((int *)v7 + 102), *((unsigned int *)v7 + 101));
      }
      if ( v11 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
    }
    DXGADAPTER::ReleaseReference(v7);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1->HighPart, a1->LowPart);
  }
  *a2 = AdapterDefaultScaling;
}
