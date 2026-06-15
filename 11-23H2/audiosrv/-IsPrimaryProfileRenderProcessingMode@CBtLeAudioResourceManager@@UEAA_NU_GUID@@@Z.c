/*
 * XREFs of ?IsPrimaryProfileRenderProcessingMode@CBtLeAudioResourceManager@@UEAA_NU_GUID@@@Z @ 0x1800FB9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtLeAudioResourceManager::IsPrimaryProfileRenderProcessingMode(
        CBtLeAudioResourceManager *this,
        struct _GUID *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
    v2 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
  return v2 == 0;
}
