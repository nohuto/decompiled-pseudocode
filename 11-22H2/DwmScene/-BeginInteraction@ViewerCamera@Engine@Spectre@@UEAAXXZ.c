/*
 * XREFs of ?BeginInteraction@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180092120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ViewerCamera::BeginInteraction(Spectre::Engine::ViewerCamera *this)
{
  (*(void (__fastcall **)(Spectre::Engine::ViewerCamera *))(*(_QWORD *)this + 248LL))(this);
  (*(void (__fastcall **)(Spectre::Engine::ViewerCamera *))(*(_QWORD *)this + 256LL))(this);
  *((_DWORD *)this + 473) = 0;
  *((_WORD *)this + 948) = 256;
}
