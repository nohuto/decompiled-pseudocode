/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180055518
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800018A0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180026928 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  void *result; // rax

  ATL::_AtlBaseModule = 96;
  qword_1801CFB40 = 0LL;
  dword_1801CFB48 = 0;
  dword_1801CFB4C = 0;
  *(&stru_1801CFB18 + 4) = 0LL;
  qword_1801CFB00 = (__int64)&_ImageBase;
  qword_1801CFAF8 = (__int64)&_ImageBase;
  qword_1801CFB10 = (__int64)&GUID_ATLVer70;
  stru_1801CFB18 = 0LL;
  byte_1801CFB08 = 1;
  *(&stru_1801CFB18 + 1) = 0LL;
  dword_1801CFB0C = 2048;
  v1 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_1801CFB18);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
