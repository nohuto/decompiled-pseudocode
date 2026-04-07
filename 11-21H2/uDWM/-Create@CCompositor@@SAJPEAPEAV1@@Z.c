/*
 * XREFs of ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180052990
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180052CB0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180052A5C (-Initialize@CCompositor@@IEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::Create(struct CCompositor **a1)
{
  __int64 v2; // rax
  struct CCompositor *v3; // rdi
  CBaseObject *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi

  *a1 = 0LL;
  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         48LL);
  v3 = (struct CCompositor *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)v2 = &CCompositor::`vftable';
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    v4 = (CBaseObject *)v2;
    v5 = CCompositor::Initialize((CCompositor *)v2);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x22u);
    }
    else
    {
      v6 = 0;
      v4 = 0LL;
      *a1 = v3;
    }
  }
  else
  {
    v4 = 0LL;
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x20u);
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v6;
}
