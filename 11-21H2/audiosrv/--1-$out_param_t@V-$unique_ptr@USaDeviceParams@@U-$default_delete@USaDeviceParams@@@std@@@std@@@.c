/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800FE4A0
 * Callers:
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$17 @ 0x1800FFFFB (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$17.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$20 @ 0x18010001F (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$20.c)
 *     _CBtAudioResourceManager::CreateA2dpRenderSaDeviceWithDefaultParameters_::_1_::dtor$1 @ 0x180113CE0 (_CBtAudioResourceManager--CreateA2dpRenderSaDeviceWithDefaultParameters_--_1_--dtor$1.c)
 *     _CBtAudioResourceManager::CreateHfpRenderSaDeviceWithDefaultParameters_::_1_::dtor$2 @ 0x1801142A3 (_CBtAudioResourceManager--CreateHfpRenderSaDeviceWithDefaultParameters_--_1_--dtor$2.c)
 *     _CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$7 @ 0x18011595B (_CBtAudioResourceManager--FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_--_1_--dtor$7.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

SaDeviceParams *__fastcall wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(
        __int64 a1)
{
  SaDeviceParams *result; // rax
  SaDeviceParams *v2; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(SaDeviceParams **)(a1 + 8);
    v2 = **(SaDeviceParams ***)a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
      return SaDeviceParams::`scalar deleting destructor'(v2);
  }
  return result;
}
