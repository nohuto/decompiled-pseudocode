/*
 * XREFs of ?UpdateGDISurface@CTopLevelWindow@@AEAAJXZ @ 0x180053B34
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateGDISurface(CTopLevelWindow *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *((_QWORD *)this + 94);
  v2 = 0;
  if ( (*(_BYTE *)(v1 + 673) & 0x20) != 0 )
  {
    if ( *((_QWORD *)this + 65) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 24) + 368LL))(*(_QWORD *)(v1 + 24));
      v2 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x14D3u, 0LL);
    }
  }
  return v2;
}
