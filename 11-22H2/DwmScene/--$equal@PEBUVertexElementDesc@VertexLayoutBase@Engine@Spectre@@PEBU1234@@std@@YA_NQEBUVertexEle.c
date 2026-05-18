/*
 * XREFs of ??$equal@PEBUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@PEBU1234@@std@@YA_NQEBUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@00@Z @ 0x18008BBFC
 * Callers:
 *     ?AttachDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18008BF08 (-AttachDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceVertexLayout@En.c)
 * Callees:
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 */

char __fastcall std::equal<Spectre::Engine::VertexLayoutBase::VertexElementDesc const *,Spectre::Engine::VertexLayoutBase::VertexElementDesc const *>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  char v6; // si
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  size_t v9; // r8

  v3 = a3 + 24;
  v4 = a1 - a3;
  v6 = 0;
  while ( 1 )
  {
    v7 = (_QWORD *)(v3 + v4 - 24);
    if ( v7 == a2 )
      break;
    v8 = (_QWORD *)(v3 - 24);
    if ( *(_QWORD *)v3 >= 0x10uLL )
      v8 = (_QWORD *)*v8;
    v9 = *(_QWORD *)(v4 + v3 - 8);
    if ( *(_QWORD *)(v3 + v4) >= 0x10uLL )
      v7 = (_QWORD *)*v7;
    if ( v9 != *(_QWORD *)(v3 - 8)
      || memcmp_0(v7, v8, v9)
      || *(_DWORD *)(v4 + v3 + 8) != *(_DWORD *)(v3 + 8)
      || *(_DWORD *)(v4 + v3 + 12) != *(_DWORD *)(v3 + 12)
      || *(_BYTE *)(v4 + v3 + 16) != *(_BYTE *)(v3 + 16)
      || *(_DWORD *)(v4 + v3 + 20) != *(_DWORD *)(v3 + 20) )
    {
      return v6;
    }
    v3 += 48LL;
  }
  return 1;
}
