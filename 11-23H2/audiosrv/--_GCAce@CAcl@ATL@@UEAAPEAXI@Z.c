/*
 * XREFs of ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x1800CE5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x18005EB54 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall ATL::CAcl::CAce::`scalar deleting destructor'(void **this, char a2)
{
  ATL::CAcl::CAce::~CAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
