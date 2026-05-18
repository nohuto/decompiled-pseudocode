/*
 * XREFs of sub_1800B2890 @ 0x1800B2890
 * Callers:
 *     sub_1800B2A34 @ 0x1800B2A34 (sub_1800B2A34.c)
 * Callees:
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18007FBC0 @ 0x18007FBC0 (sub_18007FBC0.c)
 *     sub_1800B2620 @ 0x1800B2620 (sub_1800B2620.c)
 *     sub_1800B3B80 @ 0x1800B3B80 (sub_1800B3B80.c)
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800B2890(__int64 *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int v8; // r15d
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+60h]

  sub_1800FC230(a1);
  v2 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  v3 = (_QWORD *)sub_180011088(0x10uLL);
  v15 = (__int64)(a1 + 1);
  sub_18007FBC0(v3, &v15);
  a1[1] = (__int64)v4;
  *v4 = a1 + 1;
  v15 = (__int64)(a1 + 6);
  a1[6] = 0LL;
  a1[7] = 0LL;
  v15 = sub_180011088(0x28uLL);
  sub_18001DE8C((__int64 *)v15, &v15);
  sub_18001DE8C((__int64 *)(v5 + 8), &v15);
  sub_18001DE8C((__int64 *)(v6 + 16), &v15);
  *(_WORD *)(v7 + 24) = 257;
  a1[6] = v7;
  sub_18000C8D4((__int64)(a1 + 8), 16LL, 5LL);
  v8 = 0;
  v14 = 0LL;
  v9 = 0LL;
  do
  {
    v10 = sub_18001D684();
    v11 = v10;
    v16 = v10;
    if ( v10 )
    {
      *(_OWORD *)v10 = 0LL;
      *(_DWORD *)(v10 + 8) = 1;
      *(_DWORD *)(v10 + 12) = 1;
      *(_QWORD *)v10 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfilerFrame>::`vftable';
      sub_1800B2620();
    }
    else
    {
      v11 = 0LL;
    }
    v13[0] = a1[v2 + 8];
    a1[v2 + 8] = v11 + 16;
    v13[1] = a1[v2 + 9];
    a1[v2 + 9] = v11;
    sub_180010910((__int64)v13);
    sub_180010910((__int64)&v14);
    a1[v9 + 18] = 0LL;
    v15 = (int)v8;
    sub_1800B3B80(a1 + 1, &v15);
    ++v8;
    v2 += 2LL;
    ++v9;
  }
  while ( v8 < 5 );
  return a1;
}
