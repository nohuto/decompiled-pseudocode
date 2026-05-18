/*
 * XREFs of sub_1800301D0 @ 0x1800301D0
 * Callers:
 *     sub_18002DB6C @ 0x18002DB6C (sub_18002DB6C.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18002F7D4 @ 0x18002F7D4 (sub_18002F7D4.c)
 *     sub_18005938C @ 0x18005938C (sub_18005938C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800301D0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::Camera>::`vftable';
    v7[0] = *a2;
    v7[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_18005938C(v4 + 16, v7);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_18002F7D4(a1, v5 + 16, v5);
  return a1;
}
