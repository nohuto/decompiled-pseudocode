/*
 * XREFs of ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180043130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180043014 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 */

void **__fastcall ATL::CDacl::CAccessAce::`vector deleting destructor'(void **this, char a2)
{
  *this = &ATL::CDacl::CAccessAce::`vftable';
  ATL::CAcl::CAce::~CAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
