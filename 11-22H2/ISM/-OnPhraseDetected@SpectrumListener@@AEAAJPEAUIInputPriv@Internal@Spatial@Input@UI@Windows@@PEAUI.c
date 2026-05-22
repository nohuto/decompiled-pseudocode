/*
 * XREFs of ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800DF780
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Populate@MPCInputInfoHelper@@SAJPEAUIPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@AEAUMPCInputInfo@@@Z @ 0x1800DCE50 (-Populate@MPCInputInfoHelper@@SAJPEAUIPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@AEAU.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800DD14C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800DEB1C (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 */

__int64 __fastcall SpectrumListener::OnPhraseDetected(
        SpectrumListener *this,
        struct Windows::UI::Input::Spatial::Internal::IInputPriv *a2,
        struct Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *a3)
{
  int v5; // r9d
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-BE8h]
  int v11[16]; // [rsp+30h] [rbp-BD8h] BYREF
  _BYTE v12[2944]; // [rsp+70h] [rbp-B98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C08h] [rbp+0h]

  memset_0(v11, 0, 0xBC0uLL);
  v5 = *((_DWORD *)this + 20);
  v11[6] = 3008;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 0x40000, v5, (__int64)v11);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v6,
      v10);
  v7 = MPCInputInfoHelper::Populate(a3, (struct MPCInputInfo *)v12);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v7,
      v10);
  v8 = MPCRawInputProvider::QueueInput(*((MPCRawInputProvider **)this + 2), (struct LegacyInputInfo *)v11);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v8,
      v10);
  return 0LL;
}
