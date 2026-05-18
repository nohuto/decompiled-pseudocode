/*
 * XREFs of sub_180020220 @ 0x180020220
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001FB98 @ 0x18001FB98 (sub_18001FB98.c)
 *     sub_18001FC84 @ 0x18001FC84 (sub_18001FC84.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180020220(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ETWTraceProvider>::`vftable';
    *(_QWORD *)(v2 + 16) = &Spectre::Utils::ETWTraceProvider::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  v9 = v3 + 16;
  v10 = v3;
  sub_18001FC84(&v15, &v9);
  if ( v10 )
    sub_180010530(v10);
  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Utils::DefaultTimeProvider>::`vftable';
    *(_QWORD *)(v4 + 16) = &Spectre::Utils::DefaultTimeProvider::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v9 = v5 + 16;
  v10 = v5;
  sub_18001FC84(&v13, &v9);
  if ( v10 )
    sub_180010530(v10);
  v6 = sub_18001C190();
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Utils::DefaultMemoryStatsProvider>::`vftable';
    *(_QWORD *)(v6 + 16) = &Spectre::Utils::DefaultMemoryStatsProvider::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v9 = v7 + 16;
  v10 = v7;
  sub_18001FC84(&v11, &v9);
  if ( v10 )
    sub_180010530(v10);
  sub_18001FB98(a1, &v15, &v13, &v11);
  if ( v12 )
    sub_180010530(v12);
  if ( v14 )
    sub_180010530(v14);
  if ( v16 )
    sub_180010530(v16);
  return a1;
}
