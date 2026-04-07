/*
 * XREFs of ?SetReverseRTLMirror@CAtlasButton@@QEAAX_N@Z @ 0x1800AD1D0
 * Callers:
 *     ?DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x1800ACFA4 (-DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasButton::SetReverseRTLMirror(CAtlasButton *this, char a2)
{
  if ( *((_BYTE *)this + 144) != a2 )
  {
    *((_BYTE *)this + 144) = a2;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), 0x2000LL);
  }
}
