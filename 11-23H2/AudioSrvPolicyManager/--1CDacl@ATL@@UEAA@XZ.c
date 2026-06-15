/*
 * XREFs of ??1CDacl@ATL@@UEAA@XZ @ 0x180043070
 * Callers:
 *     ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x180043260 (--_ECDacl@ATL@@UEAAPEAXI@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180043E00 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$1 @ 0x18004A163 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$1.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$2 @ 0x18004A175 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA@XZ @ 0x180042F40 (--1-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180044AE0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 */

void __fastcall ATL::CDacl::~CDacl(ATL::CDacl *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &ATL::CDacl::`vftable';
  ATL::CDacl::RemoveAllAces(this);
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::~CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>((__int64)this + 24);
  v2 = (void *)*((_QWORD *)this + 1);
  *(_QWORD *)this = &ATL::CAcl::`vftable';
  free(v2);
}
