/*
 * XREFs of ?GetPrimaryProfileRenderProcessingModeForDevice@CBtLeAudioResourceManager@@UEAA?AU_GUID@@XZ @ 0x18004D860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CBtLeAudioResourceManager::GetPrimaryProfileRenderProcessingModeForDevice(
        CBtLeAudioResourceManager *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  return result;
}
