/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18004B4B0
 * Callers:
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$16 @ 0x1800DA90E (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$16.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$19 @ 0x1800DA932 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$19.c)
 *     _CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$1 @ 0x1800F60BA (_CBtAudioResourceManagerBase--CreatePrimaryProfileRenderSaDeviceWithDefaultParamete_ea_1800F60BA.c)
 *     _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$2 @ 0x1800F71F3 (_CBtAudioResourceManagerBase--CreateSecondaryProfileRenderSaDeviceWithDefaultParame_ea_1800F71F3.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$7 @ 0x1800F7E2F (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_1800F7E2F.c)
 *     _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$7 @ 0x1800FCFD2 (_CBtLeAudioResourceManager--ReleaseSaDevices_--_1_--dtor$7.c)
 * Callees:
 *     <none>
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
