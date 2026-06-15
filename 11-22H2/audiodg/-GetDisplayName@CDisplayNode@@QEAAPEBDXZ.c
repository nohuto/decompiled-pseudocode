/*
 * XREFs of ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x1400624EC
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140063094 (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     sprintf_s @ 0x1400285B0 (sprintf_s.c)
 */

const char *__fastcall CDisplayNode::GetDisplayName(CDisplayNode *this)
{
  __int64 v1; // rdx
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  const char *v5; // rax
  const struct _GUID *v7; // r9
  const struct _GUID *v8; // r9
  const struct _GUID *v9; // r9
  const struct _GUID *v10; // r9
  const struct _GUID *v11; // r9
  const struct _GUID *v12; // r9
  const struct _GUID *v13; // r9
  const struct _GUID *v14; // r9
  const struct _GUID *v15; // r9
  const struct _GUID *v16; // r9
  const struct _GUID *v17; // r9
  const struct _GUID *v18; // r9
  const struct _GUID *v19; // r9
  const struct _GUID *v20; // r9
  const struct _GUID *v21; // r9
  const struct _GUID *v22; // r9
  const struct _GUID *v23; // r9
  const struct _GUID *v24; // r9
  const struct _GUID *v25; // r9
  const struct _GUID *v26; // r9
  const struct _GUID *v27; // r9
  const struct _GUID *v28; // r9
  const struct _GUID *v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  switch ( v2 )
  {
    case 3:
      v3 = *(_DWORD *)(v1 + 60);
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
            v5 = "Loopback";
          else
            v5 = "Unknown";
        }
        else
        {
          v5 = "Capture";
        }
      }
      else
      {
        v5 = "Render";
      }
      sprintf_s(ScratchSpace, 0x4EuLL, "PID: %d (%s)", *(_DWORD *)(v1 + 56), v5);
      return ScratchSpace;
    case 1:
      return "Device";
    case 5:
      sprintf_s(ScratchSpace, 0x4EuLL, "Bridge Source #%I64d", *(_QWORD *)(v1 + 64));
      return ScratchSpace;
    case 6:
      sprintf_s(ScratchSpace, 0x4EuLL, "Streaming from bridge source #%I64d", *(_QWORD *)(v1 + 64));
      return ScratchSpace;
  }
  if ( IsEqualGUID((const struct _GUID *)(*(_QWORD *)(v1 + 32) + 8LL), &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac) )
    return "Limiter";
  if ( IsEqualGUID(v7, &GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba) )
    return "Meter";
  if ( IsEqualGUID(v8, &GUID_06587e71_f043_403a_bf49_cb591ba6e103) )
    return "Volume";
  if ( IsEqualGUID(v9, &GUID_27c98999_2895_4829_b080_5a8b65bd3db0) )
    return "SRC";
  if ( IsEqualGUID(v10, &GUID_c58bd103_e87f_4b78_a0fa_7a5c95970ee2) )
    return "SRC-old";
  if ( IsEqualGUID(v11, &GUID_07252659_bb6b_4b79_b78b_623f6699a579) )
    return "Constrictor";
  if ( IsEqualGUID(v12, &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a) )
    return "Mixer";
  if ( IsEqualGUID(v13, &GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b) )
    return "Matrix";
  if ( IsEqualGUID(v14, &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e) )
    return "Copy";
  if ( IsEqualGUID(v15, &GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec) )
    return "Cleanup";
  if ( IsEqualGUID(v16, &GUID_693badea_1eb1_4013_b799_285f624a55bd) )
    return "SilenceMonitor";
  if ( IsEqualGUID(v17, &GUID_0fa53099_5317_46af_9376_9a04a4b550f9) )
    return "Accessibility";
  if ( IsEqualGUID(v18, &GUID_3fd7f233_a716_472e_8f2f_c25954f34e96) )
    return "Format Converter";
  if ( IsEqualGUID(v19, &GUID_fed4acc3_87c9_45e9_a026_5b59a855e687) )
    return "SASP";
  if ( IsEqualGUID(v20, &GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5) )
    return "ASAR";
  if ( IsEqualGUID(v21, &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f) )
    return "AEC";
  if ( IsEqualGUID(v22, &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3) )
    return "AGC";
  if ( IsEqualGUID(v23, &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669) )
    return "NS";
  if ( IsEqualGUID(v24, &GUID_62dc1a93_ae24_464c_a43e_452f824c4250) )
    return "Wmalfx";
  if ( IsEqualGUID(v25, &GUID_637c490d_eee3_4c0a_973f_371958802da2) )
    return "Wmagfx";
  if ( IsEqualGUID(v26, &GUID_e3eff23b_5360_40a1_8e7b_506b6283b5d4) )
    return "Spatializer";
  if ( IsEqualGUID(v27, &GUID_4be8a061_c73b_4f23_8114_317aae3e8698) )
    return "VSS";
  if ( IsEqualGUID(v28, &GUID_c9453e73_8c5c_4463_9984_af8bab2f5447) )
    return "Wmacapxlfx";
  if ( IsEqualGUID(v29, &GUID_13ab3ebd_137e_4903_9d89_60be8277fd17) )
    return "Wmacapxgfx";
  if ( *(_DWORD *)(v30 + 4) )
  {
    sprintf_s(
      ScratchSpace,
      0x4EuLL,
      "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      *(_DWORD *)v31,
      *(unsigned __int16 *)(v31 + 4),
      *(unsigned __int16 *)(v31 + 6),
      *(unsigned __int8 *)(v31 + 8),
      *(unsigned __int8 *)(v31 + 9),
      *(unsigned __int8 *)(v31 + 10),
      *(unsigned __int8 *)(v31 + 11),
      *(unsigned __int8 *)(v31 + 12),
      *(unsigned __int8 *)(v31 + 13),
      *(unsigned __int8 *)(v31 + 14),
      *(unsigned __int8 *)(v31 + 15));
    return ScratchSpace;
  }
  return "Unknown";
}
