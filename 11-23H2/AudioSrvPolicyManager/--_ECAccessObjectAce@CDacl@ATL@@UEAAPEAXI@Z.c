/*
 * XREFs of ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180043180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CAccessObjectAce@CDacl@ATL@@UEAA@XZ @ 0x180042FC0 (--1CAccessObjectAce@CDacl@ATL@@UEAA@XZ.c)
 */

void **__fastcall ATL::CDacl::CAccessObjectAce::`vector deleting destructor'(void **this, char a2)
{
  ATL::CDacl::CAccessObjectAce::~CAccessObjectAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
