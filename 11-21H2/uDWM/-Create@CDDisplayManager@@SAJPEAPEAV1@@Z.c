/*
 * XREFs of ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x1800AED68
 * Callers:
 *     ?EnsureDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800B0790 (-EnsureDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x1800AEE68 (-Initialize@CDDisplayManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDDisplayManager::Create(struct CDDisplayManager **a1)
{
  __int64 v2; // rax
  struct CDDisplayManager *v3; // rdi
  CBaseObject *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi

  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v3 = (struct CDDisplayManager *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)v2 = &CDDisplayManager::`vftable';
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    v4 = (CBaseObject *)v2;
    v5 = CDDisplayManager::Initialize((CDDisplayManager *)v2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v4 = 0LL;
      *a1 = v3;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x11u);
    }
  }
  else
  {
    v4 = 0LL;
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x10u);
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v6;
}
