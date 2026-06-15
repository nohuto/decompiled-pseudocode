/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x18003E144
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18003DAEC (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18003DF30 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$3 @ 0x18006D083 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$3.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180117B84 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x180117DC0 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  *(_QWORD *)this = &ATL::CSid::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 13) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 12) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 11) - 24LL));
}
