/*
 * XREFs of ?IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x180044468
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800441C0 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x1800443D0 (-IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004AC60 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall Sarm::CSpatialAudioResourceManager::IsHolographicSpaceAvailable(
        Sarm::CSpatialAudioResourceManager *this)
{
  bool v1; // bl
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v5; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER v6; // [rsp+40h] [rbp-40h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 *v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]

  v1 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    v5 = 0LL;
    v7 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v6,
      L"Windows.Graphics.Holographic.HolographicDisplay",
      0x30u,
      0x2Fu);
    if ( (int)RoGetActivationFactory(v7, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v5) >= 0 )
    {
      v4 = 0LL;
      v2 = *v5;
      v4 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v2 + 64))(v5, &v4) >= 0 )
        v1 = v4 != 0;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v4);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v5);
  }
  if ( (unsigned int)dword_1801CD178 > 4 )
  {
    LODWORD(v4) = v1;
    v8 = &v4;
    v9 = 4;
    v10 = 0;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801CD178,
      (unsigned __int8 *)dword_18019487A,
      0LL,
      0LL,
      3u,
      (PEVENT_DATA_DESCRIPTOR)&v6);
  }
  return v1;
}
