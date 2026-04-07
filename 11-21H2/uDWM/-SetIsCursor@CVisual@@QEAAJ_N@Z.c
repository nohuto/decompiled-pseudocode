/*
 * XREFs of ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18005EEC8
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180038808 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18005ED80 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetIsCursor(CVisual *this, char a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(unsigned int *)(v3 + 24);
  LOBYTE(v3) = a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 248LL))(v4, v5, v3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1D7u);
  return v7;
}
