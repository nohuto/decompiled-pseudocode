/*
 * XREFs of sub_1C0080D94 @ 0x1C0080D94
 * Callers:
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 * Callees:
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 */

__int64 __fastcall sub_1C0080D94(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v5 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v5 + *(_QWORD *)a1) = -8;
  ++*(_DWORD *)(a1 + 12);
  v10 = a2;
  sub_1C007A4E8((char *)&v10, 8u);
  result = sub_1C0080EE8(a1, &v10, v6);
  if ( (int)result >= 0 )
  {
    v10 = a3;
    sub_1C007A4E8((char *)&v10, 8u);
    result = sub_1C0080EE8(a1, &v10, v8);
    if ( (int)result >= 0 )
    {
      v9 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v9 + 1) > *(_DWORD *)(a1 + 8) )
        return 3221225507LL;
      *(_BYTE *)(v9 + *(_QWORD *)a1) = -16;
      ++*(_DWORD *)(a1 + 12);
      return 0LL;
    }
  }
  return result;
}
