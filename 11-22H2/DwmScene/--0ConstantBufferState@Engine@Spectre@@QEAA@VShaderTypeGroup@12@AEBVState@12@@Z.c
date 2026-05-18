/*
 * XREFs of ??0ConstantBufferState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z @ 0x18009DB50
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??4?$array@V?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@$0M@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009DCC8 (--4-$array@V-$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@$0M@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::ConstantBufferState::ConstantBufferState(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbx

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  `eh vector constructor iterator'(
    (char *)(a1 + 8),
    192LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>);
  `eh vector constructor iterator'(
    (char *)(a1 + 1160),
    192LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>);
  `eh vector constructor iterator'(
    (char *)(a1 + 2312),
    192LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>);
  *(_DWORD *)(a1 + 3464) = a2;
  *(_BYTE *)(a1 + 3468) = 1;
  v6 = 0LL;
  do
  {
    if ( _bittest(&a2, v6) )
    {
      std::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>::operator=(a1 + 192 * v6 + 2312, a3);
      a2 = *(_DWORD *)(a1 + 3464);
    }
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 6 );
  return a1;
}
