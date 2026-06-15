/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140050100
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140027190 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x140050E10 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  HRESULT v0; // eax
  ATL::CAtlComModule *v1; // rcx

  xmmword_1400CF368 = 0LL;
  xmmword_1400CF378 = 0LL;
  qword_1400CF388 = 0LL;
  dword_1400CF358 = 0;
  *(__int64 *)((char *)&qword_1400CF35C + 4) = 0LL;
  qword_1400CF35C = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  qword_1400CF390 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400CF368) >= 0 )
    dword_1400CF358 = 56;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  dword_1400CF398 = GetCurrentThreadId();
  qword_1400CF3A0 = 0LL;
  dword_1400CF3A8 = 5000;
  dword_1400CF3AC = 1000;
  byte_1400CF3B0 = 1;
  byte_1400CF3B2 = 0;
  v0 = CoInitializeEx(0LL, 0);
  if ( v0 >= 0 )
  {
    byte_1400CF3B2 = 1;
LABEL_9:
    ATL::CAtlComModule::ExecuteObjectMain(v1, 1);
    return &_AtlModule;
  }
  if ( v0 == -2147417850 && GetModuleHandleW(L"Mscoree.dll") )
    goto LABEL_9;
  ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &_AtlModule;
}
