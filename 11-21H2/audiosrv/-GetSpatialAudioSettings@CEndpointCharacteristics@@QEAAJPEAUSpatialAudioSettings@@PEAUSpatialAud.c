/*
 * XREFs of ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x180149920
 * Callers:
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18003EB14 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004EB08 (Create_SpatialAudioDevicePropertyReader.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetSpatialAudioSettings(
        struct IPropertyStore **this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned __int64 a4,
        unsigned int *a5)
{
  unsigned int v8; // esi
  unsigned int *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int SpatialAudioDevicePropertyReader; // eax
  unsigned __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v17[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF

  v17[0] = 0LL;
  v8 = 0;
  v9 = a5;
  if ( a3 && !a5 )
  {
    v10 = -2147024809;
    v11 = 6523LL;
LABEL_11:
    v13 = v10;
    goto LABEL_12;
  }
  v17[0] = 0LL;
  SpatialAudioDevicePropertyReader = Create_SpatialAudioDevicePropertyReader(0LL, this[5], v17, a4);
  v10 = SpatialAudioDevicePropertyReader;
  if ( SpatialAudioDevicePropertyReader < 0 )
  {
    v13 = (unsigned int)SpatialAudioDevicePropertyReader;
    v11 = 6525LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v13);
    goto LABEL_17;
  }
  if ( v9 )
  {
    v19 = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17[0] + 96LL))(v17[0], &v19);
    v15 = v19;
    *v9 = v19;
    if ( v14 >= 0 )
    {
      if ( a3 )
      {
        v8 = 834 * v15;
        if ( a4 < 834 * v15 )
        {
          v10 = -2147024774;
          v11 = 6536LL;
          goto LABEL_11;
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
  v10 = 0;
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v17);
  return v10;
}
