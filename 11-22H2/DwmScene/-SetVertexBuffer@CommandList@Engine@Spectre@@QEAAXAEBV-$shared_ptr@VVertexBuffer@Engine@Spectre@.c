/*
 * XREFs of ?SetVertexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@III@Z @ 0x18003984C
 * Callers:
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?SetVertexBuffer@VertexBufferState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@III@Z @ 0x18009E9E0 (-SetVertexBuffer@VertexBufferState@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VVertexBuffer@Engine@Sp.c)
 */

__int64 __fastcall Spectre::Engine::CommandList::SetVertexBuffer(__int64 a1, _QWORD *a2)
{
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // rcx
  int v7; // eax
  _DWORD v9[15]; // [rsp+30h] [rbp-31h]
  __m128i si128; // [rsp+6Ch] [rbp+Bh]
  int v11; // [rsp+7Ch] [rbp+1Bh]
  int v12; // [rsp+80h] [rbp+1Fh]
  int v13; // [rsp+84h] [rbp+23h]
  int v14; // [rsp+88h] [rbp+27h]
  int v15; // [rsp+8Ch] [rbp+2Bh]
  int v16; // [rsp+90h] [rbp+2Fh]

  if ( std::operator!=<Spectre::Engine::Scene>(a2) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v4 + 112LL);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 20);
    else
      v7 = v2;
    v9[0] = v2;
    v9[1] = 4;
    v9[2] = 4;
    v9[5] = 12;
    v9[6] = 16;
    v9[10] = 12;
    v9[11] = 16;
    v9[12] = 2;
    v9[13] = 1;
    v9[14] = 2;
    v11 = 2;
    v15 = 1;
    v16 = 2;
    v9[3] = 4;
    v9[4] = 8;
    v9[7] = 4;
    v9[8] = 4;
    v9[9] = 8;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v12 = 4;
    v13 = 8;
    v14 = 4;
    v2 = v9[v7];
  }
  return Spectre::Engine::VertexBufferState::SetVertexBuffer((unsigned int)*(_QWORD *)(v3 + 96) + 64, v4, v5, v4, v2);
}
