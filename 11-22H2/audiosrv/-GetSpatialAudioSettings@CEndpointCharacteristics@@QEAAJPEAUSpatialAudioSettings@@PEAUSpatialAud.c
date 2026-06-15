/*
 * XREFs of ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x180064F28
 * Callers:
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002EC58 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18002D72C (Create_SpatialAudioDevicePropertyReader.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetSpatialAudioSettings(
        CEndpointCharacteristics *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned __int64 a4,
        unsigned int *a5)
{
  unsigned int v8; // esi
  unsigned int *v9; // rdi
  int SpatialAudioDevicePropertyReader; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF

  v17[0] = 0LL;
  v8 = 0;
  v9 = a5;
  if ( a3 && !a5 )
  {
    v11 = -2147024809;
    v15 = 2147942487LL;
    v16 = 6976LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v15);
    goto LABEL_8;
  }
  v17[0] = 0LL;
  SpatialAudioDevicePropertyReader = Create_SpatialAudioDevicePropertyReader(0LL, *((_QWORD *)this + 9), v17, a4);
  v11 = SpatialAudioDevicePropertyReader;
  if ( SpatialAudioDevicePropertyReader < 0 )
  {
    v15 = (unsigned int)SpatialAudioDevicePropertyReader;
    v16 = 6978LL;
    goto LABEL_12;
  }
  if ( v9 )
  {
    v19 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17[0] + 96LL))(v17[0], &v19);
    v13 = v19;
    *v9 = v19;
    if ( v12 >= 0 )
    {
      if ( a3 )
      {
        v8 = 834 * v13;
        if ( a4 < 834 * v13 )
        {
          v11 = -2147024774;
          v15 = 2147942522LL;
          v16 = 6989LL;
          goto LABEL_12;
        }
      }
    }
  }
  if ( (*(int (__fastcall **)(__int64, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, _QWORD))(*(_QWORD *)v17[0] + 104LL))(
         v17[0],
         a2,
         a3,
         v8) < 0 )
  {
    memset_0(a2, 0, 0x48uLL);
    if ( v9 )
      *v9 = 0;
  }
  v11 = 0;
LABEL_8:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v17);
  return v11;
}
