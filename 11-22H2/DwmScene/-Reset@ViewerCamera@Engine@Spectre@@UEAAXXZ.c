/*
 * XREFs of ?Reset@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180092DB0
 * Callers:
 *     ??0ViewerCamera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180091C94 (--0ViewerCamera@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ViewerCamera::Reset(Spectre::Engine::ViewerCamera *this)
{
  int v1; // eax
  __int64 v3; // rax

  v1 = *((_DWORD *)this + 459);
  *((_DWORD *)this + 475) = 0;
  *((_DWORD *)this + 454) = 0;
  *((_DWORD *)this + 473) = 0;
  *((_DWORD *)this + 468) = v1;
  *((_DWORD *)this + 469) = *((_DWORD *)this + 460);
  *((_DWORD *)this + 461) = 1065353216;
  *((_DWORD *)this + 462) = 1065353216;
  *((_DWORD *)this + 453) = 1065353216;
  v3 = *(_QWORD *)this;
  *((_DWORD *)this + 455) = -1078806334;
  *((_DWORD *)this + 456) = 1068677314;
  *((_DWORD *)this + 467) = 2;
  *((_WORD *)this + 948) = 256;
  (*(void (**)(void))(v3 + 248))();
  (*(void (__fastcall **)(Spectre::Engine::ViewerCamera *))(*(_QWORD *)this + 256LL))(this);
  *((_BYTE *)this + 1864) = 0;
}
