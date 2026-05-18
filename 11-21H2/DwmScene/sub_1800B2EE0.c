/*
 * XREFs of sub_1800B2EE0 @ 0x1800B2EE0
 * Callers:
 *     sub_1800B3008 @ 0x1800B3008 (sub_1800B3008.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B33A4 @ 0x1800B33A4 (sub_1800B33A4.c)
 *     sub_1800B5130 @ 0x1800B5130 (sub_1800B5130.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800B2EE0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rbx
  __int64 v10; // r15
  __int128 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v17; // [rsp+38h] [rbp-48h] BYREF
  char v18[8]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 v20[5]; // [rsp+58h] [rbp-28h] BYREF

  sub_18002C84C(a1);
  sub_1800B33A4(a1, v18, a3);
  if ( v18[0] )
  {
    v9 = 2 * v19;
    v10 = *(_QWORD *)(a1 + 16 * v19 + 64);
    v16[0] = &v17;
    v17 = 0LL;
    *((_QWORD *)&v11 + 1) = a5[1];
    if ( *((_QWORD *)&v11 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL));
      *((_QWORD *)&v11 + 1) = a5[1];
    }
    *(_QWORD *)&v11 = *a5;
    v17 = v11;
    v12 = sub_18001875C(v20, a4);
    v13 = sub_1800B5130(v10, v12, &v17);
    v14 = *(_QWORD *)(a1 + 8 * v9 + 72);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = *(_QWORD *)(a1 + 8 * v9 + 72);
    }
    v16[0] = v13;
    v16[1] = v14;
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v14 )
    {
      *a2 = v13;
      a2[1] = v14;
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
    }
    sub_180010910((__int64)v16);
    j_LanguageEnumProc(a1);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    j_LanguageEnumProc(a1);
  }
  return a2;
}
