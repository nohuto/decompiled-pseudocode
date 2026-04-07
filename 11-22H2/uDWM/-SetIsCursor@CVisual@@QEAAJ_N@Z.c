/*
 * XREFs of ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18005B2A8
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180036A6C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18005B1C0 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 192LL))(v4, v5, v3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1C5u, 0LL);
  return v7;
}
