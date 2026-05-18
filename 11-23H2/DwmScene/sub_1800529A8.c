/*
 * XREFs of sub_1800529A8 @ 0x1800529A8
 * Callers:
 *     sub_180053E00 @ 0x180053E00 (sub_180053E00.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18005273C @ 0x18005273C (sub_18005273C.c)
 *     sub_18008BD24 @ 0x18008BD24 (sub_18008BD24.c)
 */

_QWORD *__fastcall sub_1800529A8(__int64 a1, _QWORD *a2)
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
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::VertexLayoutGeneric>::`vftable';
    memset((void *)(v3 + 16), 0, 0x90uLL);
    sub_18008BD24(v4 + 16);
    *v5 = &Spectre::Engine::VertexLayoutGeneric::`vftable';
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
