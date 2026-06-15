/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14002C1EC
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x14002C0D0 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14002C2D4 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  HRESULT v0; // eax
  ATL::CAtlComModule *v1; // rcx

  xmmword_1400C1298 = 0LL;
  xmmword_1400C12A8 = 0LL;
  qword_1400C12B8 = 0LL;
  dword_1400C1288 = 0;
  *(__int64 *)((char *)&qword_1400C128C + 4) = 0LL;
  qword_1400C128C = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  qword_1400C12C0 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400C1298) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_1400C1288 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  dword_1400C12C8 = GetCurrentThreadId();
  qword_1400C12D0 = 0LL;
  dword_1400C12D8 = 5000;
  dword_1400C12DC = 1000;
  byte_1400C12E0 = 1;
  byte_1400C12E2 = 0;
  v0 = CoInitializeEx(0LL, 0);
  if ( v0 < 0 )
  {
    if ( v0 != -2147417850 || !GetModuleHandleW(L"Mscoree.dll") )
    {
      ATL::CAtlBaseModule::m_bInitFailed = 1;
      return &_AtlModule;
    }
  }
  else
  {
    byte_1400C12E2 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v1, 1);
  return &_AtlModule;
}
