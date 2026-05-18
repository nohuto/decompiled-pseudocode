/*
 * XREFs of ?Reset@VertexBufferState@Engine@Spectre@@UEAAXXZ @ 0x18009E840
 * Callers:
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$array@V?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@$0P@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009E7A4 (--4-$array@V-$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@$0P@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::VertexBufferState::Reset(Spectre::Engine::VertexBufferState *this)
{
  int v2; // eax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  __int128 v8; // xmm0

  *((_BYTE *)this + 1088) = 1;
  std::array<std::shared_ptr<Spectre::Engine::VertexBuffer>,15>::operator=((__int64 *)this + 1, (__int64)this + 488);
  v2 = *((_DWORD *)this + 226);
  v3 = *((_OWORD *)this + 54);
  *(_OWORD *)((char *)this + 728) = *((_OWORD *)this + 53);
  v4 = *((_OWORD *)this + 55);
  *(_OWORD *)((char *)this + 744) = v3;
  *(_QWORD *)&v3 = *((_QWORD *)this + 112);
  *(_OWORD *)((char *)this + 760) = v4;
  v5 = *(_OWORD *)((char *)this + 1028);
  *((_QWORD *)this + 97) = v3;
  v6 = *(_OWORD *)((char *)this + 1044);
  *((_DWORD *)this + 196) = v2;
  v7 = *((_DWORD *)this + 271);
  *(_OWORD *)((char *)this + 908) = v5;
  v8 = *(_OWORD *)((char *)this + 1060);
  *(_OWORD *)((char *)this + 924) = v6;
  *(_QWORD *)&v6 = *(_QWORD *)((char *)this + 1076);
  *(_OWORD *)((char *)this + 940) = v8;
  *(_QWORD *)((char *)this + 956) = v6;
  *((_DWORD *)this + 241) = v7;
}
