/*
 * XREFs of ?SetVertexBuffer@VertexBufferState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@III@Z @ 0x18009E9E0
 * Callers:
 *     ?SetVertexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@III@Z @ 0x18003984C (-SetVertexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VVertexBuffer@Engine@Spectre@.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::VertexBufferState::SetVertexBuffer(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax

  v6 = a3;
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(16LL * a3 + a1 + 8), a2);
  *(_DWORD *)(a1 + 4 * v6 + 728) = 0;
  result = a5;
  *(_DWORD *)(a1 + 4 * v6 + 908) = a5;
  return result;
}
