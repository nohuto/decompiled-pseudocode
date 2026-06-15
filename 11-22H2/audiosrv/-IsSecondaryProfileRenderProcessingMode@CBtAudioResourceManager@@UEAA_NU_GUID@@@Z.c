/*
 * XREFs of ?IsSecondaryProfileRenderProcessingMode@CBtAudioResourceManager@@UEAA_NU_GUID@@@Z @ 0x1800F47F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtAudioResourceManager::IsSecondaryProfileRenderProcessingMode(
        CBtAudioResourceManager *this,
        struct _GUID *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)&a2->Data1 - 0x48B1B9CD98951333LL;
  if ( *(_QWORD *)&a2->Data1 == 0x48B1B9CD98951333LL )
    v2 = *(_QWORD *)a2->Data4 + 0x88CD297BF005C60LL;
  return v2 == 0;
}
