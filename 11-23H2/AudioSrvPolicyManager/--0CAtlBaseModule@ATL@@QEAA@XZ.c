/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x1800146C4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180002200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180014750 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  *(&stru_180061748 + 4) = 0LL;
  qword_180061770 = 0LL;
  qword_180061778 = 0LL;
  qword_180061730 = (__int64)&_ImageBase;
  qword_180061728 = (__int64)&_ImageBase;
  qword_180061740 = (__int64)&GUID_ATLVer70;
  stru_180061748 = 0LL;
  byte_180061738 = 1;
  *(&stru_180061748 + 1) = 0LL;
  dword_18006173C = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_180061748);
  return &ATL::_AtlBaseModule;
}
