/*
 * XREFs of WPP_SF_Sg @ 0x1800DB6DC
 * Callers:
 *     _lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_::operator() @ 0x180008AF0 (_lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_--operator().c)
 *     ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180010270 (-GetVolume@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x180011630 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180011920 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sg(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, a2, a4);
}
