/*
 * XREFs of ?Reset@Light@Engine@Spectre@@UEAAXXZ @ 0x180043350
 * Callers:
 *     ??0Light@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180042DFC (--0Light@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Light::Reset(Spectre::Engine::Light *this)
{
  *((_DWORD *)this + 30) = 1;
  *((_DWORD *)this + 32) = 0;
  *((_BYTE *)this + 124) = 0;
  *((_DWORD *)this + 22) = 1065353216;
  *((_DWORD *)this + 23) = 1065353216;
  *((_DWORD *)this + 24) = 1065353216;
  *((_DWORD *)this + 25) = 1065353216;
  *((_QWORD *)this + 13) = 1065353216LL;
  *((_QWORD *)this + 14) = 1135869952LL;
  *((_BYTE *)this + 72) = 0;
}
