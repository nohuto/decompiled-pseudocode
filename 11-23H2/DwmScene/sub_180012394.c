/*
 * XREFs of sub_180012394 @ 0x180012394
 * Callers:
 *     sub_180011E04 @ 0x180011E04 (sub_180011E04.c)
 * Callees:
 *     sub_1800121A8 @ 0x1800121A8 (sub_1800121A8.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180042E7C @ 0x180042E7C (sub_180042E7C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180012394(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = sub_18001C190(152LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::Light>::`vftable';
    v7[0] = *a2;
    v7[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_180042E7C(v4 + 16, v7);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_1800121A8(a1, v5 + 16, v5);
  return a1;
}
