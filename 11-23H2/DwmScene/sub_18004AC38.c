/*
 * XREFs of sub_18004AC38 @ 0x18004AC38
 * Callers:
 *     sub_18004B4F0 @ 0x18004B4F0 (sub_18004B4F0.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18004ADAC @ 0x18004ADAC (sub_18004ADAC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004AC38(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance>::`vftable';
    v6 = sub_18001246C(v8, a2);
    sub_18004ADAC(v5 + 16, v6);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180013F50(a1, v5 + 16, v5);
  return a1;
}
