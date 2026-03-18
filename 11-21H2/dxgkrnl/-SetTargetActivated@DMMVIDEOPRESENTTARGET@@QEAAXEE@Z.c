/*
 * XREFs of ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C01C8FF4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03A4D40 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0014AB4 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetTargetActivated(DMMVIDEOPRESENTTARGET *this, char a2, unsigned __int8 a3)
{
  __int64 v3; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx

  v3 = *((_QWORD *)this + 5);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *((_QWORD *)this + 5);
  }
  v7 = *(_QWORD *)(v3 + 88);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    v8 = *(_QWORD *)(v7 + 8);
  }
  DMMVIDEOPRESENTTARGET::SetPowerState(this, *(struct DXGADAPTER **)(v8 + 16), a3);
  if ( *((_BYTE *)this + 418) != a2 )
  {
    if ( a2 )
      *((_QWORD *)this + 53) = MEMORY[0xFFFFF78000000014];
    else
      *((_QWORD *)this + 54) = MEMORY[0xFFFFF78000000014];
  }
  *((_BYTE *)this + 418) = a2;
}
