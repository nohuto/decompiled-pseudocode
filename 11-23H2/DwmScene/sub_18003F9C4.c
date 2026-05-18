/*
 * XREFs of sub_18003F9C4 @ 0x18003F9C4
 * Callers:
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18003FD24 @ 0x18003FD24 (sub_18003FD24.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003F9C4(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD v10[5]; // [rsp+28h] [rbp-40h] BYREF

  v6 = sub_18001C190();
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::SceneLayer>::`vftable';
    v8 = sub_180012440(v10, a2);
    sub_18003FD24(v7 + 16, v8, a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 16;
  a1[1] = v7;
  return a1;
}
