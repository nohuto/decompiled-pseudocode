/*
 * XREFs of ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1800264D0
 * Callers:
 *     ?NewNode@?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAUIAudioAppVolumePolicyChange@@PEAV312@1@Z @ 0x180027DD0 (-NewNode@-$CAtlList@PEAUIAudioAppVolumePolicyChange@@V-$CElementTraits@PEAUIAudioAppVolumePolicy.c)
 *     ?NewNode@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCProcess@@PEAV312@1@Z @ 0x180027E78 (-NewNode@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAPEAVCNode@12@A.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180027F20 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18002D21C (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?NewNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCHostedAppInteractivity@@PEAV312@1@Z @ 0x180030418 (-NewNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x1800304C0 (-NewNode@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x180023B7C (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlPlex::Create(
        struct ATL::CAtlPlex **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  struct ATL::CAtlPlex *result; // rax
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&v5, a2, a3) < 0 )
    return 0LL;
  if ( (unsigned __int64)~v5 < 8 )
    return 0LL;
  result = (struct ATL::CAtlPlex *)malloc(v5 + 8);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = *a1;
  *a1 = result;
  return result;
}
