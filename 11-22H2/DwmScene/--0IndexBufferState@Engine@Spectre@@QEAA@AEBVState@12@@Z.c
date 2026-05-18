/*
 * XREFs of ??0IndexBufferState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009EC4C
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

Spectre::Engine::IndexBufferState *__fastcall Spectre::Engine::IndexBufferState::IndexBufferState(
        Spectre::Engine::IndexBufferState *this,
        const struct Spectre::Engine::State *a2)
{
  __int64 *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::IndexBufferState::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v4 = (__int64 *)((char *)this + 40);
  *v4 = 0LL;
  v4[1] = 0LL;
  *((_BYTE *)this + 68) = 1;
  std::shared_ptr<Spectre::Engine::Light>::operator=(v4, (_QWORD *)a2 + 140);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 284);
  return this;
}
