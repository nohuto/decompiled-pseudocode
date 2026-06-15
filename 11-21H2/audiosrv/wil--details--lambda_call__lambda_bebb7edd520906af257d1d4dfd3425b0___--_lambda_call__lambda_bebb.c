/*
 * XREFs of wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___ @ 0x180065540
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     __lambda_703197410533bd8a2dcb4add4cb7fb52_::operator()_::_1_::dtor$1 @ 0x18006591B (__lambda_703197410533bd8a2dcb4add4cb7fb52_--operator()_--_1_--dtor$1.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$18 @ 0x180100007 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$18.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180101B78 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$7 @ 0x1801020A8 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$7.c)
 * Callees:
 *     ?ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z @ 0x180065CE0 (-ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z.c)
 */

unsigned __int64 *__fastcall wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___(
        __int64 a1)
{
  unsigned __int64 *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( **(_QWORD **)a1 )
    {
      CAudioResourceManager::ReleaseSaDeviceResource(
        (CAudioResourceManager *)(*(_QWORD *)(a1 + 8) + 8LL),
        *(unsigned __int64 **)a1);
      result = *(unsigned __int64 **)a1;
      **(_QWORD **)a1 = 0LL;
    }
  }
  return result;
}
