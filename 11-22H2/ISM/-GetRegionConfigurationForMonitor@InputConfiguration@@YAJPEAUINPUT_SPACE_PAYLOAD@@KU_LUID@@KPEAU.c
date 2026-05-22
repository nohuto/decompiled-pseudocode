/*
 * XREFs of ?GetRegionConfigurationForMonitor@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KU_LUID@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x180123698
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z @ 0x1801E7610 (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputConfiguration::GetRegionConfigurationForMonitor(
        InputConfiguration *this,
        struct INPUT_SPACE_PAYLOAD *a2,
        __int64 a3,
        struct _LUID a4,
        __int64 a5)
{
  _OWORD *v5; // r10
  _QWORD *v6; // r11
  __int64 v7; // rbx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  _OWORD *v17; // r10
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0LL;
  if ( !(_DWORD)a2 )
    goto LABEL_12;
  v6 = (_QWORD *)((char *)this + 16);
  v7 = (unsigned int)a2;
  do
  {
    v8 = 0;
    if ( *((_DWORD *)v6 - 1) )
    {
      while ( 1 )
      {
        v9 = *v6 + 200LL * v8;
        if ( *(_DWORD *)(v9 + 44) == a4.LowPart && *(_QWORD *)(v9 + 36) == a3 )
          break;
        if ( ++v8 >= *((_DWORD *)v6 - 1) )
          goto LABEL_9;
      }
      v5 = (_OWORD *)(*v6 + 200LL * v8);
    }
LABEL_9:
    v6 += 3;
    --v7;
  }
  while ( v7 );
  if ( v5 )
  {
    v10 = v5[1];
    *(_OWORD *)a5 = *v5;
    v11 = v5[2];
    *(_OWORD *)(a5 + 16) = v10;
    v12 = v5[3];
    *(_OWORD *)(a5 + 32) = v11;
    v13 = v5[4];
    *(_OWORD *)(a5 + 48) = v12;
    v14 = v5[5];
    *(_OWORD *)(a5 + 64) = v13;
    v15 = v5[6];
    *(_OWORD *)(a5 + 80) = v14;
    *(_OWORD *)(a5 + 96) = v15;
    v16 = v5[7];
    v17 = v5 + 8;
    *(_OWORD *)(a5 + 112) = v16;
    v18 = *((_QWORD *)v17 + 8);
    v19 = v17[1];
    *(_OWORD *)(a5 + 128) = *v17;
    v20 = v17[2];
    *(_OWORD *)(a5 + 144) = v19;
    v21 = v17[3];
    *(_OWORD *)(a5 + 160) = v20;
    *(_OWORD *)(a5 + 176) = v21;
    *(_QWORD *)(a5 + 192) = v18;
    return 0LL;
  }
  else
  {
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
