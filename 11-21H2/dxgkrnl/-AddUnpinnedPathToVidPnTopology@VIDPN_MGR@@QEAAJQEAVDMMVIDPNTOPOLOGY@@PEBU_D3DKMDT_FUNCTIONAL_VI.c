/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0399D00
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00114FC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0011528 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C01A9F94 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C03A53AC (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        struct _KTHREAD **this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  __int64 VidPnSourceId; // rbp
  __int64 VidPnTargetId; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  struct DMMVIDPNPRESENTPATH *v14; // rdx
  int v15; // eax
  int v16; // esi
  struct DMMVIDPNPRESENTPATH *v18; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v19; // [rsp+68h] [rbp+10h] BYREF

  if ( this[8] != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v18 = 0LL;
  v19 = 0LL;
  v9 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v19);
  v12 = v9;
  if ( v9 >= 0 )
  {
    v14 = v19;
    *((_WORD *)v19 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[52];
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v18,
      (__int64 (__fastcall ***)(_QWORD, __int64))v14);
    v15 = VIDPN_MGR::_AddPathToVidPnTopology((VIDPN_MGR *)this, a2, v18, 2LL, 1);
    v16 = v15;
    LODWORD(v12) = -1071774957;
    if ( v15 == -1071774957
      || (LODWORD(v12) = -1071774920, v15 == -1071774920)
      || (LODWORD(v12) = -1071774975, v15 == -1071774975) )
    {
      WdLogSingleEntry3(7LL, VidPnSourceId, VidPnTargetId, a2);
    }
    else if ( v15 >= 0 )
    {
      v18 = 0LL;
      LODWORD(v12) = 0;
    }
    else
    {
      WdLogSingleEntry4(2LL, VidPnSourceId, VidPnTargetId, a2, v15);
      LODWORD(v12) = v16;
    }
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
    v13[3] = VidPnSourceId;
    v13[4] = VidPnTargetId;
    v13[5] = v12;
  }
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v18);
  return (unsigned int)v12;
}
