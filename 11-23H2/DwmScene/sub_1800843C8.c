/*
 * XREFs of sub_1800843C8 @ 0x1800843C8
 * Callers:
 *     sub_180083C1C @ 0x180083C1C (sub_180083C1C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180015630 @ 0x180015630 (sub_180015630.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18009BC28 @ 0x18009BC28 (sub_18009BC28.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800843C8(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ConstantBuffer>::`vftable';
    sub_18009BC28(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3 + 16;
  *a1 = v3 + 16;
  a1[1] = v3;
  if ( v3 != -16 )
  {
    v5 = *(_QWORD *)(v3 + 120);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v8 = v3 + 16;
      v9 = a1[1];
      v6 = v9;
      sub_180015630((_QWORD *)(v4 + 96), &v8);
      if ( v6 )
        sub_180010530(v6);
    }
  }
  return a1;
}
