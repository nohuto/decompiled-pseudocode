/*
 * XREFs of WPP_SF_Sg @ 0x1800E3C8C
 * Callers:
 *     _lambda_b08f66900c5e6cc9009fb22e38011b96_::operator() @ 0x180070D74 (_lambda_b08f66900c5e6cc9009fb22e38011b96_--operator().c)
 *     ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x1800E08D0 (-GetVolume@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800E32B0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x1800E3430 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, a2, a4);
}
