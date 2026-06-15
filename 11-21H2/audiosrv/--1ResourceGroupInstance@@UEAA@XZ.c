/*
 * XREFs of ??1ResourceGroupInstance@@UEAA@XZ @ 0x180109CF8
 * Callers:
 *     ??_GResourceGroupInstance@@UEAAPEAXI@Z @ 0x180109F00 (--_GResourceGroupInstance@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x18010DE0C (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 */

void __fastcall ResourceGroupInstance::~ResourceGroupInstance(ResourceGroupInstance *this)
{
  *(_QWORD *)this = &ResourceGroupInstance::`vftable';
  RmReleaseResources(*((_QWORD *)this + 3));
  ResourceGroupInstance::SetAssignedResourceGroup(this, 0);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 68);
  *((_DWORD *)this + 3) = -1073741823;
}
