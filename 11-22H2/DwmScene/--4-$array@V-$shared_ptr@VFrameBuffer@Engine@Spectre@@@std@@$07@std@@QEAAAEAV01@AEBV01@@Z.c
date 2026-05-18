/*
 * XREFs of ??4?$array@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009EFDC
 * Callers:
 *     ??0RenderTargetState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009EE1C (--0RenderTargetState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ?Reset@RenderTargetState@Engine@Spectre@@UEAAXXZ @ 0x18009F110 (-Reset@RenderTargetState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 *__fastcall std::array<std::shared_ptr<Spectre::Engine::FrameBuffer>,8>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 8LL;
  do
  {
    std::shared_ptr<Spectre::Engine::Light>::operator=(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
