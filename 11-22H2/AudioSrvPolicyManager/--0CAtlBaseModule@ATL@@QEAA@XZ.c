/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x1800148B4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180002210 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180014940 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  *(&stru_1800637C8 + 4) = 0LL;
  qword_1800637F0 = 0LL;
  qword_1800637F8 = 0LL;
  qword_1800637B0 = (__int64)&_ImageBase;
  qword_1800637A8 = (__int64)&_ImageBase;
  qword_1800637C0 = (__int64)&GUID_ATLVer70;
  stru_1800637C8 = 0LL;
  byte_1800637B8 = 1;
  *(&stru_1800637C8 + 1) = 0LL;
  dword_1800637BC = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_1800637C8);
  return &ATL::_AtlBaseModule;
}
