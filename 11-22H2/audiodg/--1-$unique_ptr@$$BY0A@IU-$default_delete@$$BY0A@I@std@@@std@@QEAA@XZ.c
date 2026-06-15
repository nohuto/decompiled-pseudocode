/*
 * XREFs of ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x14006BAAC
 * Callers:
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::dtor$7 @ 0x140036752 (_CAPOProcessingHost--RegisterAPONotifications_--_1_--dtor$7.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x1400A0510 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete[](v1);
}
