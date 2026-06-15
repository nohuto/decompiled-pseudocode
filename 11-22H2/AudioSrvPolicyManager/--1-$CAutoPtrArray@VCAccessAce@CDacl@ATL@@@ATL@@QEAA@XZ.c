/*
 * XREFs of ??1?$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x180044408
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$7 @ 0x18004B64D (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAutoPtrArray<ATL::CDacl::CAccessAce>::~CAutoPtrArray<ATL::CDacl::CAccessAce>(__int64 a1)
{
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::~CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>(a1);
}
