/*
 * XREFs of ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x1800CE4A4
 * Callers:
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$0 @ 0x18007D6E3 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::~CSecurityDesc(PSECURITY_DESCRIPTOR *this)
{
  *this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
}
