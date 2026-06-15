/*
 * XREFs of ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x18005EB44
 * Callers:
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18005ECB0 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x1800CE640 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::CAce::~CAce(void **this)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
}
