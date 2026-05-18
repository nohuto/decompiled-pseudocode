/*
 * XREFs of ?Reset@ConstantBufferState@Engine@Spectre@@UEAAXXZ @ 0x18009DD70
 * Callers:
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$array@V?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@$0M@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009DCC8 (--4-$array@V-$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@$0M@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::ConstantBufferState::Reset(Spectre::Engine::ConstantBufferState *this)
{
  __int64 v2; // rbx
  int v3; // eax

  *((_BYTE *)this + 3468) = 1;
  v2 = 0LL;
  do
  {
    v3 = *((_DWORD *)this + 866);
    if ( _bittest(&v3, v2) )
      std::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>::operator=(
        (_QWORD *)this + 24 * v2 + 1,
        (__int64)this + 192 * v2 + 2312);
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 < 6 );
}
