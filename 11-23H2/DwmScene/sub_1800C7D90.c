/*
 * XREFs of sub_1800C7D90 @ 0x1800C7D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18005273C @ 0x18005273C (sub_18005273C.c)
 *     sub_1800D7C44 @ 0x1800D7C44 (sub_1800D7C44.c)
 */

_QWORD *__fastcall sub_1800C7D90(__int64 a1, _QWORD *a2)
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
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::GpuQueryD3D11>::`vftable';
    sub_1800D7C44(v3 + 16);
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
