/*
 * XREFs of ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x1800446F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x180044500 (--1CDacl@ATL@@UEAA@XZ.c)
 */

ATL::CDacl *__fastcall ATL::CDacl::`vector deleting destructor'(ATL::CDacl *this, char a2)
{
  ATL::CDacl::~CDacl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
