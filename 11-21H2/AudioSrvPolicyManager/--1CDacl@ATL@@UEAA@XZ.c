/*
 * XREFs of ??1CDacl@ATL@@UEAA@XZ @ 0x18003DDF0
 * Callers:
 *     ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x18003E200 (--_ECDacl@ATL@@UEAAPEAXI@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$1 @ 0x180046A10 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$1.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$2 @ 0x180046A22 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA@XZ @ 0x18003DD10 (--1-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x18003E484 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CDacl::~CDacl(ATL::CDacl *this)
{
  char *v2; // rbx
  __int64 v3; // rcx

  *(_QWORD *)this = &ATL::CDacl::`vftable';
  v2 = (char *)this + 24;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
      v3,
      *((_QWORD *)v2 + 1));
    free(*(void **)v2);
    *(_QWORD *)v2 = 0LL;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  free(*((void **)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::~CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>((__int64)v2);
  *(_QWORD *)this = &ATL::CAcl::`vftable';
  free(*((void **)this + 1));
}
