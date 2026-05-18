/*
 * XREFs of sub_1800619C8 @ 0x1800619C8
 * Callers:
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18003B7C4 @ 0x18003B7C4 (sub_18003B7C4.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 *     sub_1800626A4 @ 0x1800626A4 (sub_1800626A4.c)
 *     sub_180062DA8 @ 0x180062DA8 (sub_180062DA8.c)
 *     sub_18008F548 @ 0x18008F548 (sub_18008F548.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800619C8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]

  sub_18003E370(a1);
  v4 = *(_QWORD *)sub_1800626A4(a1, &v10);
  if ( v11 )
    sub_180010530(v11);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = sub_180011D4C(a1 + 8, &v10);
    v6 = sub_18001C190();
    v7 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = 1;
      *(_DWORD *)(v6 + 12) = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::ColorTransform>::`vftable';
      sub_18008F548(v6 + 16, v5);
    }
    else
    {
      v7 = 0LL;
    }
    v9 = 0LL;
    sub_180062DA8(&v9, v7 + 16, v7);
    if ( v11 )
      sub_180010530(v11);
    sub_180011DA0(&v10, &v9);
    sub_18003B7C4(a1, &v10);
    if ( v11 )
      sub_180010530(v11);
    *(_OWORD *)a2 = v9;
  }
  return a2;
}
