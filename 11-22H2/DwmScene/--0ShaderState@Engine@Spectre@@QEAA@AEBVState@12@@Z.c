/*
 * XREFs of ??0ShaderState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009D9D0
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

Spectre::Engine::ShaderState *__fastcall Spectre::Engine::ShaderState::ShaderState(
        Spectre::Engine::ShaderState *this,
        const struct Spectre::Engine::State *a2)
{
  __int64 *v3; // rcx

  *(_QWORD *)this = &Spectre::Engine::ShaderState::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v3 = (__int64 *)((char *)this + 40);
  *v3 = 0LL;
  v3[1] = 0LL;
  *((_BYTE *)this + 56) = 1;
  std::shared_ptr<Spectre::Engine::Light>::operator=(v3, (_QWORD *)a2 + 88);
  return this;
}
