/*
 * XREFs of ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180044610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1CAccessObjectAce@CDacl@ATL@@UEAA@XZ @ 0x180044450 (--1CAccessObjectAce@CDacl@ATL@@UEAA@XZ.c)
 */

void **__fastcall ATL::CDacl::CAccessObjectAce::`vector deleting destructor'(void **this, char a2)
{
  ATL::CDacl::CAccessObjectAce::~CAccessObjectAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
