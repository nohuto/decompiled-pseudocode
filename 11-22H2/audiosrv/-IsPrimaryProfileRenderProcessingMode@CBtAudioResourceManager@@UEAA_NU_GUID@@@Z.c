/*
 * XREFs of ?IsPrimaryProfileRenderProcessingMode@CBtAudioResourceManager@@UEAA_NU_GUID@@@Z @ 0x1800F47C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtAudioResourceManager::IsPrimaryProfileRenderProcessingMode(
        CBtAudioResourceManager *this,
        struct _GUID *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)&a2->Data1 - 0x4FD1B4939E90EA20LL;
  if ( *(_QWORD *)&a2->Data1 == 0x4FD1B4939E90EA20LL )
    v2 = *(_QWORD *)a2->Data4 + 0x30A9569EEC81575FLL;
  return v2 == 0;
}
