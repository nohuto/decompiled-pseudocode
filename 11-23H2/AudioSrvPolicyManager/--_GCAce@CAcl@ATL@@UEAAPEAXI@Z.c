/*
 * XREFs of ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x1800431C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180043014 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 */

void **__fastcall ATL::CAcl::CAce::`scalar deleting destructor'(void **this, char a2)
{
  ATL::CAcl::CAce::~CAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
