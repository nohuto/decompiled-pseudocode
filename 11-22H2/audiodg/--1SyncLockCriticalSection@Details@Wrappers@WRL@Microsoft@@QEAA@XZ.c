/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140070BA0
 * Callers:
 *     ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x14000AD30 (-ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z.c)
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E770 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E910 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x140010C00 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14001FED0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$1 @ 0x140034FA2 (_CAudioProcessor--ActivateAPO_--_1_--dtor$1.c)
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$3 @ 0x14003537D (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$3.c)
 *     _CAudioProcessor::CommitGraphChanges_::_1_::dtor$1 @ 0x1400355AA (_CAudioProcessor--CommitGraphChanges_--_1_--dtor$1.c)
 *     __lambda_89f25345d625e50d879fcb99a1803143_::operator()_::_1_::dtor$7 @ 0x14003571E (__lambda_89f25345d625e50d879fcb99a1803143_--operator()_--_1_--dtor$7.c)
 *     _CAudioProcessor::DeactivateAPO_::_1_::dtor$1 @ 0x1400363C8 (_CAudioProcessor--DeactivateAPO_--_1_--dtor$1.c)
 *     _CAudioProcessor::CancelGraphChanges_::_1_::dtor$0 @ 0x14008F307 (_CAudioProcessor--CancelGraphChanges_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CheckResourceLimits_::_1_::dtor$0 @ 0x14009D18B (_CSpatialCrossProcessBaseEndpoint--CheckResourceLimits_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
