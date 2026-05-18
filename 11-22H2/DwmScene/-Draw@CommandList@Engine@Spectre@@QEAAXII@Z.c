/*
 * XREFs of ?Draw@CommandList@Engine@Spectre@@QEAAXII@Z @ 0x18003927C
 * Callers:
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::CommandList::Draw(Spectre::Engine::CommandList *this, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD, Spectre::Engine::CommandList *))(**((_QWORD **)this + 12) + 8LL))(
    *((_QWORD *)this + 12),
    this);
  (*(void (__fastcall **)(Spectre::Engine::CommandList *, _QWORD, _QWORD))(*(_QWORD *)this + 200LL))(this, a2, 0LL);
}
