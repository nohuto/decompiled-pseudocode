/*
 * XREFs of ??1CAccessObjectAce@CDacl@ATL@@UEAA@XZ @ 0x180044450
 * Callers:
 *     ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180044610 (--_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CDacl::CAccessObjectAce::~CAccessObjectAce(void **this)
{
  *this = &ATL::CDacl::CAccessObjectAce::`vftable';
  operator delete(this[19]);
  operator delete(this[20]);
  *this = &ATL::CDacl::CAccessAce::`vftable';
  ATL::CAcl::CAce::~CAce((ATL::CAcl::CAce *)this);
}
