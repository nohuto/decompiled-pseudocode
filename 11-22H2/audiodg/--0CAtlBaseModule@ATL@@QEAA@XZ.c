/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x1400273CC
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140002070 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  void *result; // rax

  ATL::_AtlBaseModule = 96;
  qword_1400CF490 = 0LL;
  dword_1400CF498 = 0;
  dword_1400CF49C = 0;
  *(&stru_1400CF468 + 4) = 0LL;
  qword_1400CF450 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_1400CF460 = (__int64)&GUID_ATLVer70;
  stru_1400CF468 = 0LL;
  byte_1400CF458 = 1;
  *(&stru_1400CF468 + 1) = 0LL;
  dword_1400CF45C = 2048;
  v1 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_1400CF468);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
