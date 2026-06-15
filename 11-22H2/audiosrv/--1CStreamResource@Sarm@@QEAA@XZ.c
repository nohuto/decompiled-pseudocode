/*
 * XREFs of ??1CStreamResource@Sarm@@QEAA@XZ @ 0x18013384C
 * Callers:
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::dtor$1 @ 0x180133C7B (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Add_--_1_--dtor$1.c)
 * Callees:
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1801396AC (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 */

void __fastcall Sarm::CStreamResource::~CStreamResource(Sarm::CStreamResource *this)
{
  Sarm::CStreamResource::Reclaim(this);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this);
}
