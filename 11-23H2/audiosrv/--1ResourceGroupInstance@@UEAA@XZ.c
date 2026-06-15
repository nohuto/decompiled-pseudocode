/*
 * XREFs of ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800FEAA0
 * Callers:
 *     ??_GResourceGroupInstance@@UEAAPEAXI@Z @ 0x1800FEC90 (--_GResourceGroupInstance@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1801021CC (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 */

void __fastcall ResourceGroupInstance::~ResourceGroupInstance(ResourceGroupInstance *this)
{
  *(_QWORD *)this = &ResourceGroupInstance::`vftable';
  RmReleaseResources(*((_QWORD *)this + 3));
  ResourceGroupInstance::SetAssignedResourceGroup(this, 0);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 68);
  *((_DWORD *)this + 3) = -1073741823;
}
