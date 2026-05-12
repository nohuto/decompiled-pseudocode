/*
 * XREFs of sub_1C007D640 @ 0x1C007D640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C0081208 @ 0x1C0081208 (sub_1C0081208.c)
 *     sub_1C0081248 @ 0x1C0081248 (sub_1C0081248.c)
 */

__int64 __fastcall sub_1C007D640(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 3077;
  sub_1C007A4E8((char *)&v10, 4u);
  *(_QWORD *)v9 = *a4;
  sub_1C007A4E8(v9, 8u);
  result = sub_1C0081208(a3, 1LL);
  if ( (int)result >= 0 )
  {
    result = sub_1C0081208(a3, 3LL);
    if ( (int)result >= 0 )
    {
      v7 = *(unsigned int *)(a3 + 12);
      if ( (unsigned int)(v7 + 1) > *(_DWORD *)(a3 + 8) )
        return 3221225507LL;
      *(_BYTE *)(v7 + *(_QWORD *)a3) = -14;
      ++*(_DWORD *)(a3 + 12);
      result = sub_1C0080EE8(a3, &v10, 4LL);
      if ( (int)result >= 0 )
      {
        result = sub_1C0080EE8(a3, v9, 8LL);
        if ( (int)result >= 0 )
        {
          v8 = *(unsigned int *)(a3 + 12);
          if ( (unsigned int)(v8 + 1) > *(_DWORD *)(a3 + 8) )
            return 3221225507LL;
          *(_BYTE *)(v8 + *(_QWORD *)a3) = -13;
          ++*(_DWORD *)(a3 + 12);
          result = sub_1C0081248(a3);
          if ( (int)result >= 0 )
            return sub_1C0081248(a3);
        }
      }
    }
  }
  return result;
}
