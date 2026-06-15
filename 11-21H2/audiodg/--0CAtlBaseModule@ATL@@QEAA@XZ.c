/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x14002DC34
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1400013F0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  void *result; // rax

  ATL::_AtlBaseModule = 96;
  qword_1400C13C0 = 0LL;
  dword_1400C13C8 = 0;
  dword_1400C13CC = 0;
  *(&stru_1400C1398 + 4) = 0LL;
  qword_1400C1380 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_1400C1390 = (__int64)&GUID_ATLVer70;
  stru_1400C1398 = 0LL;
  byte_1400C1388 = 1;
  *(&stru_1400C1398 + 1) = 0LL;
  dword_1400C138C = 2048;
  v1 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_1400C1398);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
