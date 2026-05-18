/*
 * XREFs of ??4?$array@V?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@$0M@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009DCC8
 * Callers:
 *     ??0ConstantBufferState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z @ 0x18009DB50 (--0ConstantBufferState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z.c)
 *     ?Reset@ConstantBufferState@Engine@Spectre@@UEAAXXZ @ 0x18009DD70 (-Reset@ConstantBufferState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003B558 (--4-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 12LL;
  do
  {
    std::shared_ptr<Spectre::Engine::SceneNode const>::operator=(v4, (_QWORD *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
