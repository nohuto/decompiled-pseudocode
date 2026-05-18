/*
 * XREFs of sub_1800C4514 @ 0x1800C4514
 * Callers:
 *     sub_1800C82B0 @ 0x1800C82B0 (sub_1800C82B0.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18005273C @ 0x18005273C (sub_18005273C.c)
 *     sub_180089B14 @ 0x180089B14 (sub_180089B14.c)
 */

_QWORD *__fastcall sub_1800C4514(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001C190();
  v4 = v3;
  if ( v3 )
  {
    v5 = (_QWORD *)(v3 + 16);
    *(_DWORD *)(v3 + 8) = 1;
    *(_DWORD *)(v3 + 12) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::IndexBufferD3D11>::`vftable';
    memset((void *)(v3 + 16), 0, 0x70uLL);
    sub_180089B14((_QWORD *)(v4 + 16));
    *v5 = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
    *(_QWORD *)(v4 + 120) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v7[1] = v4;
  v7[0] = v4 + 16;
  sub_18005273C(a2, v7);
  if ( v4 )
    sub_180010530(v4);
  return a2;
}
