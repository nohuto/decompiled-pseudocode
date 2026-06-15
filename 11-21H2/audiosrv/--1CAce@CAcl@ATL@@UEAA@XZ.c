/*
 * XREFs of ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180117B84
 * Callers:
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x180117C90 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::CAce::~CAce(void **this)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
}
