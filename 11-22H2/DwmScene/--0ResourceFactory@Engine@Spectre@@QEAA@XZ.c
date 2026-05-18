/*
 * XREFs of ??0ResourceFactory@Engine@Spectre@@QEAA@XZ @ 0x180025870
 * Callers:
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

Spectre::Engine::ResourceFactory *__fastcall Spectre::Engine::ResourceFactory::ResourceFactory(
        Spectre::Engine::ResourceFactory *this)
{
  _QWORD *v2; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v2 = operator new(0x68uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)this = v2;
  _Mtx_init_in_situ((Spectre::Engine::ResourceFactory *)((char *)this + 16), 2);
  return this;
}
