/*
 * XREFs of sub_180071014 @ 0x180071014
 * Callers:
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18003B7C4 @ 0x18003B7C4 (sub_18003B7C4.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 *     sub_180071C44 @ 0x180071C44 (sub_180071C44.c)
 *     sub_180071CAC @ 0x180071CAC (sub_180071CAC.c)
 *     sub_180071D50 @ 0x180071D50 (sub_180071D50.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180071014(__int64 a1, _QWORD *a2)
{
  __int128 v4; // kr00_16
  __int64 v5; // rax
  __int64 v6; // rdi
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-10h] BYREF
  __int64 v11; // [rsp+58h] [rbp-8h]
  __int64 v12; // [rsp+70h] [rbp+10h] BYREF

  sub_18003E370(a1);
  sub_18003E330(a1);
  sub_180071CAC(&v12, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v12 == *(_QWORD *)(a1 + 384) )
  {
    *((_QWORD *)&v9 + 1) = 0LL;
    v4 = 0uLL;
  }
  else
  {
    sub_180071C44(&v9);
    v4 = v9;
  }
  if ( *((_QWORD *)&v4 + 1) )
    sub_180010530(*((__int64 *)&v4 + 1));
  if ( (_QWORD)v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = sub_180011D4C(a1 + 8, &v10);
    sub_180071D50(&v8, v5);
    if ( v11 )
      sub_180010530(v11);
    v6 = *((_QWORD *)&v8 + 1);
    if ( *((_QWORD *)&v8 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL));
      v6 = *((_QWORD *)&v8 + 1);
    }
    v9 = v8;
    sub_18003B7C4(a1, &v9);
    if ( *((_QWORD *)&v9 + 1) )
      sub_180010530(*((__int64 *)&v9 + 1));
    *a2 = v8;
    a2[1] = v6;
  }
  return a2;
}
