/*
 * XREFs of ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x1800188F4
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180018AA4 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18004AE70 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800E882C (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::Create(struct CRectangleInstruction **a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  if ( a1 )
  {
    v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           48LL);
    if ( v2 )
    {
      *(_DWORD *)(v2 + 8) = 1;
      *(_QWORD *)v2 = &CRectangleInstruction::`vftable';
      *(_QWORD *)(v2 + 16) = 0LL;
      *(_QWORD *)(v2 + 24) = 0LL;
      *a1 = (struct CRectangleInstruction *)v2;
      return 0;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x13u);
      *a1 = 0LL;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x13u);
  }
  return v3;
}
