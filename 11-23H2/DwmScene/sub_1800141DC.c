/*
 * XREFs of sub_1800141DC @ 0x1800141DC
 * Callers:
 *     sub_180013C74 @ 0x180013C74 (sub_180013C74.c)
 * Callees:
 *     sub_180013EDC @ 0x180013EDC (sub_180013EDC.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18004A02C @ 0x18004A02C (sub_18004A02C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800141DC(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = sub_18001C190(128LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::Bounds>::`vftable';
    v7[0] = *a2;
    v7[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_18004A02C(v4 + 16, v7);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180013EDC(a1, v5 + 16, v5);
  return a1;
}
