/*
 * XREFs of ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18003E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18003DE98 (--1CSid@ATL@@UEAA@XZ.c)
 */

void **__fastcall ATL::CDacl::CAccessObjectAce::`vector deleting destructor'(void **this, char a2)
{
  void *v4; // rcx

  *this = &ATL::CDacl::CAccessObjectAce::`vftable';
  operator delete(this[19]);
  operator delete(this[20]);
  v4 = this[17];
  *this = &ATL::CAcl::CAce::`vftable';
  free(v4);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
