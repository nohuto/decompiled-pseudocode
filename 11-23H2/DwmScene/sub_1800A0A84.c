/*
 * XREFs of sub_1800A0A84 @ 0x1800A0A84
 * Callers:
 *     sub_1800A0BC0 @ 0x1800A0BC0 (sub_1800A0BC0.c)
 * Callees:
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180073DB0 @ 0x180073DB0 (sub_180073DB0.c)
 *     sub_1800A085C @ 0x1800A085C (sub_1800A085C.c)
 *     sub_1800A0A3C @ 0x1800A0A3C (sub_1800A0A3C.c)
 *     sub_1800A25F4 @ 0x1800A25F4 (sub_1800A25F4.c)
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_1800A0A84(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h]

  sub_1800E0D60(a1);
  v11 = (__int64)(a1 + 1);
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  sub_180073DB0(a1 + 1);
  sub_1800A0A3C(a1 + 6);
  sub_18000C8C8((__int64)(a1 + 8), 16LL, 5LL);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  do
  {
    v7 = sub_18001C190();
    v8 = v7;
    v12 = v7;
    if ( v7 )
    {
      *(_OWORD *)v7 = 0LL;
      *(_DWORD *)(v7 + 8) = 1;
      *(_DWORD *)(v7 + 12) = 1;
      *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfilerFrame>::`vftable';
      sub_1800A25F4(v7 + 16, a2);
    }
    else
    {
      v8 = 0LL;
    }
    a1[v6 + 8] = v8 + 16;
    v9 = a1[v6 + 9];
    a1[v6 + 9] = v8;
    if ( v9 )
      sub_180010530(v9);
    a1[v5 + 18] = 0LL;
    v11 = (int)v4;
    sub_1800A085C((__int64)(a1 + 1), &v11);
    ++v4;
    v6 += 2LL;
    ++v5;
  }
  while ( v4 < 5 );
  return a1;
}
