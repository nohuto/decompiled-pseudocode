/*
 * XREFs of ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x180049174
 * Callers:
 *     ?DwmClientStartup@@YAJPEAUIUnknown@@@Z @ 0x180049150 (-DwmClientStartup@@YAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180049220 (--0CDesktopManager@@AEAA@XZ.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopManager::Create(struct IUnknown *a1, struct CDesktopManager **a2)
{
  CDesktopManager *v3; // rax
  CDesktopManager *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h] BYREF
  CDesktopManager *v9; // [rsp+50h] [rbp+18h]

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = (CDesktopManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            816LL);
  v9 = v3;
  if ( v3 )
    v4 = CDesktopManager::CDesktopManager(v3);
  else
    v4 = 0LL;
  if ( v4 )
  {
    v5 = CDesktopManager::Initialize(v4, a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7DC, 1u, v5, 0x6A9u, 0LL);
      CBaseObject::Release(v4);
    }
    else
    {
      g_pdmInstance = v4;
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7DC, 1u, -2147024882, 0x6A5u, 0LL);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v6;
}
