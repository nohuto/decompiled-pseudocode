/*
 * XREFs of ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z @ 0x1801E7610
 * Callers:
 *     ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801E6F00 (-OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnSystemContextNotification@GazeProcessor@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801E7310 (-OnSystemContextNotification@GazeProcessor@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigConte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultRegionConfiguration@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x180123494 (-GetDefaultRegionConfiguration@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KPEAUINPUT_SPACE_.c)
 *     ?GetRegionConfigurationForMonitor@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KU_LUID@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x180123698 (-GetRegionConfigurationForMonitor@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KU_LUID@@KPEAU.c)
 *     ?GetTransfromToOutputSpace@InputConfiguration@@YA?AUfloat3x2@Numerics@Foundation@Windows@@UINPUT_SPACE_REGION@@UtagRECT@@@Z @ 0x1801237B8 (-GetTransfromToOutputSpace@InputConfiguration@@YA-AUfloat3x2@Numerics@Foundation@Windows@@UINPUT.c)
 */

__int64 __fastcall GazeProcessor::UpdateDeviceTransformsFromInputConfig(GazeProcessor *this, InputConfiguration **a2)
{
  __int64 v2; // rsi
  struct INPUT_SPACE_REGION *v5; // r9
  int DefaultRegionConfiguration; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 TransfromToOutputSpace; // rax
  __int128 v20; // [rsp+30h] [rbp-1D8h] BYREF
  _BYTE v21[32]; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-1A8h] BYREF
  __int128 v23; // [rsp+70h] [rbp-198h]
  __int128 v24; // [rsp+80h] [rbp-188h]
  __int128 v25; // [rsp+90h] [rbp-178h]
  __int128 v26; // [rsp+A0h] [rbp-168h]
  __int128 v27; // [rsp+B0h] [rbp-158h]
  __int128 v28; // [rsp+C0h] [rbp-148h]
  __int128 v29; // [rsp+D0h] [rbp-138h]
  __int128 v30; // [rsp+E0h] [rbp-128h]
  __int128 v31; // [rsp+F0h] [rbp-118h]
  __int128 v32; // [rsp+100h] [rbp-108h]
  __int128 v33; // [rsp+110h] [rbp-F8h]
  __int64 v34; // [rsp+120h] [rbp-E8h]
  _OWORD v35[12]; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+1F0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v2 = *((_QWORD *)this + 8);
  *((_BYTE *)this + 96) = 0;
  if ( (int)InputConfiguration::GetRegionConfigurationForMonitor(
              a2[1],
              (struct INPUT_SPACE_PAYLOAD *)*(unsigned int *)a2,
              *(_QWORD *)(v2 + 1572),
              (struct _LUID)*(unsigned int *)(v2 + 1580),
              (__int64)&v22) >= 0
    || (DefaultRegionConfiguration = InputConfiguration::GetDefaultRegionConfiguration(
                                       a2[1],
                                       (struct INPUT_SPACE_PAYLOAD *)*(unsigned int *)a2,
                                       &v22,
                                       v5),
        v7 = DefaultRegionConfiguration,
        DefaultRegionConfiguration >= 0) )
  {
    *((_BYTE *)this + 96) = 1;
    v9 = v23;
    *(_OWORD *)((char *)this + 124) = v22;
    v10 = v24;
    *(_OWORD *)((char *)this + 140) = v9;
    v11 = v25;
    *(_OWORD *)((char *)this + 156) = v10;
    v12 = v26;
    *(_OWORD *)((char *)this + 172) = v11;
    v13 = v27;
    *(_OWORD *)((char *)this + 188) = v12;
    v14 = v28;
    *(_OWORD *)((char *)this + 204) = v13;
    *(_OWORD *)((char *)this + 220) = v14;
    *(_OWORD *)((char *)this + 236) = v29;
    v15 = v31;
    *(_OWORD *)((char *)this + 252) = v30;
    v16 = v32;
    *(_OWORD *)((char *)this + 268) = v15;
    v17 = v33;
    v18 = v34;
    *(_OWORD *)((char *)this + 284) = v16;
    *(_OWORD *)((char *)this + 300) = v17;
    *(_QWORD *)((char *)this + 316) = v18;
    v20 = *(_OWORD *)(v2 + 1552);
    v35[0] = v22;
    v35[1] = v23;
    v35[2] = v24;
    v35[3] = v25;
    v35[4] = v26;
    v35[5] = v27;
    v35[6] = v28;
    v35[7] = v29;
    v35[8] = v30;
    v35[9] = v31;
    v35[10] = v32;
    v35[11] = v33;
    v36 = v34;
    TransfromToOutputSpace = InputConfiguration::GetTransfromToOutputSpace((__int64)v21, (__int64)v35, (int *)&v20);
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)TransfromToOutputSpace;
    *(_QWORD *)&v16 = *(_QWORD *)(TransfromToOutputSpace + 16);
    result = 0LL;
    *(_QWORD *)((char *)this + 116) = v16;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)DefaultRegionConfiguration);
    return v7;
  }
  return result;
}
