/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180042904
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001CC0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180025018 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  void *result; // rax

  ATL::_AtlBaseModule = 96;
  qword_1801C2680 = 0LL;
  dword_1801C2688 = 0;
  dword_1801C268C = 0;
  *(&stru_1801C2658 + 4) = 0LL;
  qword_1801C2640 = (__int64)&_ImageBase;
  qword_1801C2638 = (__int64)&_ImageBase;
  qword_1801C2650 = (__int64)&GUID_ATLVer70;
  stru_1801C2658 = 0LL;
  byte_1801C2648 = 1;
  *(&stru_1801C2658 + 1) = 0LL;
  dword_1801C264C = 2048;
  v1 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_1801C2658);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
