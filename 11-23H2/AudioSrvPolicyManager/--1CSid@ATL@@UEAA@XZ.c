/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x1800430D0
 * Callers:
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180043014 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x1800432F0 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180043890 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180043E00 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x18004A0C1 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x18004A187 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18003E730 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  *(_QWORD *)this = &ATL::CSid::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 13) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 12) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 11) - 24LL));
}
