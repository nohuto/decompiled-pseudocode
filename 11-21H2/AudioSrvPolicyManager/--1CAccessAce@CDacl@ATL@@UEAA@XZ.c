/*
 * XREFs of ??1CAccessAce@CDacl@ATL@@UEAA@XZ @ 0x18003DD94
 * Callers:
 *     _ATL::CDacl::CAccessObjectAce::CAccessObjectAce_::_1_::dtor$0 @ 0x1800468AA (_ATL--CDacl--CAccessObjectAce--CAccessObjectAce_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CDacl::CAccessAce::~CAccessAce(void **this)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
}
