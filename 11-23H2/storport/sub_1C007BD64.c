/*
 * XREFs of sub_1C007BD64 @ 0x1C007BD64
 * Callers:
 *     sub_1C007A184 @ 0x1C007A184 (sub_1C007A184.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007BD64(int **a1, int a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v8; // esi
  int *v12; // rcx
  _QWORD v13[3]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  result = 0LL;
  v13[1] = 0LL;
  v8 = 0;
  v15 = 0;
  while ( a5 )
  {
    v13[0] = v8;
    v12 = *a1;
    v13[2] = a6;
    v14 = a5;
    sub_1C0055B8C(v12, "GetBandMetadata", 0, 22, v8, a5);
    result = sub_1C007CF64(
               (_DWORD)a1,
               a2,
               0,
               22,
               (__int64)sub_1C007B470,
               (__int64)v13,
               0LL,
               0LL,
               (__int64)sub_1C007B6C0,
               (__int64)v13);
    if ( (int)result < 0 )
      break;
    a6 += v14;
    v8 += v14;
    a5 -= v14;
  }
  return result;
}
