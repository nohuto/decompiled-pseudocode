/*
 * XREFs of ?SharedProxyDataFromIID@DirectComposition@@YAJAEBU_GUID@@PEAUSharedProxyData@1@@Z @ 0x18002B708
 * Callers:
 *     ?OpenSharedResource@CDevice@DirectComposition@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z @ 0x18006A5C0 (-OpenSharedResource@CDevice@DirectComposition@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateSharedResource@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084BE0 (-CreateSharedResource@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::SharedProxyDataFromIID(
        DirectComposition *this,
        const struct _GUID *a2,
        struct DirectComposition::SharedProxyData *a3)
{
  __int64 result; // rax
  bool v4; // zf
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 (__fastcall *v19)(); // rcx
  __int64 (__fastcall *v20)(); // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8

  result = 0LL;
  v5 = *(_QWORD *)this - *(_QWORD *)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1;
  v4 = *(_QWORD *)this == *(_QWORD *)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1;
  LOBYTE(a2->Data2) = 0;
  if ( v4 )
    v5 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data4;
  if ( !v5 )
    goto LABEL_49;
  v6 = *(_QWORD *)this - *(_QWORD *)&GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data1 )
    v6 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data4;
  if ( !v6 )
    goto LABEL_49;
  v7 = *(_QWORD *)this - *(_QWORD *)&GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data1 )
    v7 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data4;
  if ( !v7 )
  {
LABEL_49:
    *(_QWORD *)a2->Data4 = 0LL;
    v19 = (__int64 (__fastcall *)())CreateVisualProxy;
LABEL_50:
    a2->Data1 = 196;
    goto LABEL_46;
  }
  v8 = *(_QWORD *)this - *(_QWORD *)&GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data1 )
    v8 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89.Data4;
  if ( !v8 )
  {
    v19 = CreateVisualTargetProxy;
    LOBYTE(a2->Data2) = 1;
    *(_QWORD *)a2->Data4 = CreateVisualTargetProxy;
    goto LABEL_50;
  }
  v9 = *(_QWORD *)this - *(_QWORD *)&GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55.Data1 )
    v9 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55.Data4;
  if ( !v9 )
  {
    a2->Data1 = 186;
    v20 = CreateSharedTransformProxy;
    goto LABEL_48;
  }
  v10 = *(_QWORD *)this - *(_QWORD *)&GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data1 )
    v10 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data4;
  if ( !v10 )
  {
    a2->Data1 = 187;
    v20 = CreateSharedTransform3DProxy;
    goto LABEL_48;
  }
  v11 = *(_QWORD *)this - *(_QWORD *)&GUID_16cdff07_c503_419c_83f2_0965c7af1fa6.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_16cdff07_c503_419c_83f2_0965c7af1fa6.Data1 )
    v11 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_16cdff07_c503_419c_83f2_0965c7af1fa6.Data4;
  if ( !v11 )
  {
    a2->Data1 = 109;
    v19 = CreateMatrixTransformProxy;
    *(_QWORD *)a2->Data4 = 0LL;
    goto LABEL_46;
  }
  v12 = *(_QWORD *)this - *(_QWORD *)&GUID_4b3363f0_643b_41b7_b6e0_ccf22d34467c.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_4b3363f0_643b_41b7_b6e0_ccf22d34467c.Data1 )
    v12 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_4b3363f0_643b_41b7_b6e0_ccf22d34467c.Data4;
  if ( !v12 )
  {
    a2->Data1 = 110;
    v19 = CreateMatrixTransform3DProxy;
    *(_QWORD *)a2->Data4 = 0LL;
    goto LABEL_46;
  }
  v13 = *(_QWORD *)this - *(_QWORD *)&GUID_fc882465_a93e_489d_8dec_e3d953eb8a69.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_fc882465_a93e_489d_8dec_e3d953eb8a69.Data1 )
    v13 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_fc882465_a93e_489d_8dec_e3d953eb8a69.Data4;
  if ( !v13 )
  {
    a2->Data1 = 106;
    v19 = CreateManipulationTransformProxy;
    *(_QWORD *)a2->Data4 = 0LL;
    goto LABEL_46;
  }
  v14 = *(_QWORD *)this - *(_QWORD *)&GUID_a06cd146_3f2c_4975_bd5c_7db1ec71f2dd.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_a06cd146_3f2c_4975_bd5c_7db1ec71f2dd.Data1 )
    v14 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_a06cd146_3f2c_4975_bd5c_7db1ec71f2dd.Data4;
  if ( !v14 )
  {
    a2->Data1 = 106;
    v20 = CreateSharedManipulationTransformProxy;
LABEL_48:
    *(_QWORD *)a2->Data4 = v20;
    *(_QWORD *)&a2[1].Data1 = 0LL;
    return result;
  }
  v15 = *(_QWORD *)this - *(_QWORD *)&GUID_2cf87a2b_23f5_46f9_90b8_3580bd62c44e.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_2cf87a2b_23f5_46f9_90b8_3580bd62c44e.Data1 )
    v15 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_2cf87a2b_23f5_46f9_90b8_3580bd62c44e.Data4;
  if ( !v15 )
  {
    a2->Data1 = 128;
    v19 = CreatePrimitiveColorProxy;
    goto LABEL_44;
  }
  v16 = *(_QWORD *)this - *(_QWORD *)&GUID_64217f82_b1ca_430c_8a88_6cedec74c860.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_64217f82_b1ca_430c_8a88_6cedec74c860.Data1 )
    v16 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_64217f82_b1ca_430c_8a88_6cedec74c860.Data4;
  if ( !v16 )
  {
    a2->Data1 = 94;
    v19 = CreateLegacyAnimationTrigger;
    goto LABEL_44;
  }
  v17 = *(_QWORD *)this - *(_QWORD *)&GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b.Data1 )
    v17 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b.Data4;
  if ( !v17 )
  {
    a2->Data1 = 143;
    v19 = CreateRemoteAppRenderTargetProxy;
    goto LABEL_44;
  }
  v18 = *(_QWORD *)this - *(_QWORD *)&GUID_6a432e05_ee3e_45fb_845c_35306c04605d.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_6a432e05_ee3e_45fb_845c_35306c04605d.Data1 )
    v18 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_6a432e05_ee3e_45fb_845c_35306c04605d.Data4;
  if ( !v18 )
  {
    a2->Data1 = 89;
    v19 = CreateInteractionProxy;
LABEL_44:
    *(_QWORD *)a2->Data4 = v19;
LABEL_46:
    *(_QWORD *)&a2[1].Data1 = v19;
    return result;
  }
  v21 = *(_QWORD *)this - *(_QWORD *)&GUID_adbab0af_769d_40da_a180_540472cbcc34.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_adbab0af_769d_40da_a180_540472cbcc34.Data1 )
    v21 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_adbab0af_769d_40da_a180_540472cbcc34.Data4;
  if ( !v21 )
  {
    a2->Data1 = 80;
    v19 = CreateHolographicInteropTextureProxy;
    goto LABEL_44;
  }
  v22 = *(_QWORD *)this - *(_QWORD *)&GUID_89c99ebb_edec_405b_a4f3_f908639fe524.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_89c99ebb_edec_405b_a4f3_f908639fe524.Data1 )
    v22 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_89c99ebb_edec_405b_a4f3_f908639fe524.Data4;
  if ( !v22 )
  {
    a2->Data1 = 19;
    v20 = CreateReadCaptureControllerProxy;
    goto LABEL_48;
  }
  v23 = *(_QWORD *)this - *(_QWORD *)&GUID_2889a24c_9ed2_4363_bf49_07972d56fa10.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_2889a24c_9ed2_4363_bf49_07972d56fa10.Data1 )
    v23 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_2889a24c_9ed2_4363_bf49_07972d56fa10.Data4;
  if ( !v23 )
  {
    a2->Data1 = 19;
    v19 = CreateWriteCaptureControllerProxy;
    *(_QWORD *)a2->Data4 = 0LL;
    goto LABEL_46;
  }
  v24 = *(_QWORD *)this - *(_QWORD *)&GUID_5bad5172_74e2_4f57_8e5b_8fad63e1d1b6.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_5bad5172_74e2_4f57_8e5b_8fad63e1d1b6.Data1 )
    v24 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_5bad5172_74e2_4f57_8e5b_8fad63e1d1b6.Data4;
  if ( !v24 )
  {
    a2->Data1 = 200;
    v20 = CreateVisualReferenceProxy;
    goto LABEL_48;
  }
  v25 = *(_QWORD *)this - *(_QWORD *)&GUID_2f251908_7203_4e2a_b764_159606784992.Data1;
  if ( *(_QWORD *)this == *(_QWORD *)&GUID_2f251908_7203_4e2a_b764_159606784992.Data1 )
    v25 = *((_QWORD *)this + 1) - *(_QWORD *)GUID_2f251908_7203_4e2a_b764_159606784992.Data4;
  if ( !v25 )
  {
    a2->Data1 = 201;
    v19 = CreateVisualReferenceControllerProxy;
    *(_QWORD *)a2->Data4 = 0LL;
    goto LABEL_46;
  }
  return 2147942487LL;
}
