/*
 * XREFs of ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x14005E3F0
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14005EF78 (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 * Callees:
 *     sprintf_s @ 0x14002FD30 (sprintf_s.c)
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x1400552AC (--8@YA_NAEBU_GUID@@0@Z.c)
 */

const char *__fastcall CDisplayNode::GetDisplayName(CDisplayNode *this)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // ecx
  const char *v4; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9

  v1 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 40LL) == 3 )
  {
    v2 = *(_DWORD *)(v1 + 60);
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          v4 = "Loopback";
        else
          v4 = "Unknown";
      }
      else
      {
        v4 = "Capture";
      }
    }
    else
    {
      v4 = "Render";
    }
    sprintf_s(ScratchSpace, 0x4EuLL, "PID: %d (%s)", *(_DWORD *)(v1 + 56), v4);
    return ScratchSpace;
  }
  if ( *(_DWORD *)(v1 + 40) == 1 )
    return "Device";
  if ( *(_DWORD *)(v1 + 40) == 5 )
    return "Bridge";
  if ( operator==((_QWORD *)(*(_QWORD *)(v1 + 32) + 8LL), &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac) )
    return "Limiter";
  if ( operator==(v6, &GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba) )
    return "Meter";
  if ( operator==(v7, &GUID_06587e71_f043_403a_bf49_cb591ba6e103) )
    return "Volume";
  if ( operator==(v8, &GUID_27c98999_2895_4829_b080_5a8b65bd3db0) )
    return "SRC";
  if ( operator==(v9, &GUID_c58bd103_e87f_4b78_a0fa_7a5c95970ee2) )
    return "SRC-old";
  if ( operator==(v10, &GUID_07252659_bb6b_4b79_b78b_623f6699a579) )
    return "Constrictor";
  if ( operator==(v11, &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a) )
    return "Mixer";
  if ( operator==(v12, &GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b) )
    return "Matrix";
  if ( operator==(v13, &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e) )
    return "Copy";
  if ( operator==(v14, &GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec) )
    return "Cleanup";
  if ( operator==(v15, &GUID_693badea_1eb1_4013_b799_285f624a55bd) )
    return "SilenceMonitor";
  if ( operator==(v16, &GUID_0fa53099_5317_46af_9376_9a04a4b550f9) )
    return "Accessibility";
  if ( operator==(v17, &GUID_3fd7f233_a716_472e_8f2f_c25954f34e96) )
    return "Format Converter";
  if ( operator==(v18, &GUID_fed4acc3_87c9_45e9_a026_5b59a855e687) )
    return "SASP";
  if ( operator==(v19, &GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5) )
    return "ASAR";
  if ( operator==(v20, &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f) )
    return "AEC";
  if ( operator==(v21, &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3) )
    return "AGC";
  if ( operator==(v22, &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669) )
    return "NS";
  if ( operator==(v23, &GUID_62dc1a93_ae24_464c_a43e_452f824c4250) )
    return "Wmalfx";
  if ( operator==(v24, &GUID_637c490d_eee3_4c0a_973f_371958802da2) )
    return "Wmagfx";
  if ( operator==(v25, &GUID_122595e5_20a2_47d3_8604_4a613ff6cca7) )
    return "Spatializer";
  if ( operator==(v26, &GUID_4be8a061_c73b_4f23_8114_317aae3e8698) )
    return "VSS";
  if ( operator==(v27, &GUID_c9453e73_8c5c_4463_9984_af8bab2f5447) )
    return "Wmacapxlfx";
  if ( operator==(v28, &GUID_13ab3ebd_137e_4903_9d89_60be8277fd17) )
    return "Wmacapxgfx";
  if ( *(_DWORD *)(v29 + 4) )
  {
    sprintf_s(
      ScratchSpace,
      0x4EuLL,
      "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      *(_DWORD *)v30,
      *(unsigned __int16 *)(v30 + 4),
      *(unsigned __int16 *)(v30 + 6),
      *(unsigned __int8 *)(v30 + 8),
      *(unsigned __int8 *)(v30 + 9),
      *(unsigned __int8 *)(v30 + 10),
      *(unsigned __int8 *)(v30 + 11),
      *(unsigned __int8 *)(v30 + 12),
      *(unsigned __int8 *)(v30 + 13),
      *(unsigned __int8 *)(v30 + 14),
      *(unsigned __int8 *)(v30 + 15));
    return ScratchSpace;
  }
  return "Unknown";
}
