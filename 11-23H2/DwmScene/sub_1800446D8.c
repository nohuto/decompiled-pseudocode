/*
 * XREFs of sub_1800446D8 @ 0x1800446D8
 * Callers:
 *     sub_180013510 @ 0x180013510 (sub_180013510.c)
 *     sub_18004CBF0 @ 0x18004CBF0 (sub_18004CBF0.c)
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 *     sub_18009B5A0 @ 0x18009B5A0 (sub_18009B5A0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_180044754 @ 0x180044754 (sub_180044754.c)
 *     sub_18004FA08 @ 0x18004FA08 (sub_18004FA08.c)
 *     sub_180060D9C @ 0x180060D9C (sub_180060D9C.c)
 */

__int64 __fastcall sub_1800446D8(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  _BYTE v12[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  result = sub_180026B04(a1, &v10);
  if ( v10 )
  {
    v6 = (_QWORD *)sub_180060D9C(v10, v12);
    v8 = sub_18004FA08(*v6, v7);
    LOBYTE(v9) = a3;
    result = sub_180044754(a1, v8, v9);
    if ( v13 )
      result = sub_180010530(v13);
  }
  if ( v11 )
    return sub_180010530(v11);
  return result;
}
