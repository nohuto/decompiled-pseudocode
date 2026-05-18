/*
 * XREFs of sub_180053D40 @ 0x180053D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18005273C @ 0x18005273C (sub_18005273C.c)
 *     sub_18008B6BC @ 0x18008B6BC (sub_18008B6BC.c)
 */

_QWORD *__fastcall sub_180053D40(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001C190();
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_DWORD *)(v3 + 12) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::ConstantBufferGeneric>::`vftable';
    sub_18008B6BC(v3 + 16);
  }
  else
  {
    v4 = 0LL;
  }
  v6[1] = v4;
  v6[0] = v4 + 16;
  sub_18005273C(a2, v6);
  if ( v4 )
    sub_180010530(v4);
  return a2;
}
