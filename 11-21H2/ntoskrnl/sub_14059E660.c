/*
 * XREFs of sub_14059E660 @ 0x14059E660
 * Callers:
 *     sub_14059F23C @ 0x14059F23C (sub_14059F23C.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14096FE9C @ 0x14096FE9C (sub_14096FE9C.c)
 */

__int64 __fastcall sub_14059E660(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  ULONG_PTR v12; // rsi
  unsigned __int64 v13; // rax
  char v14; // al
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 44);
  result = sub_14096FE9C(a1, 1LL);
  if ( (_DWORD)result )
  {
    v5 = v1 + 8 * v2;
    v6 = sub_1402CBD10(v1, -1LL, (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F);
    v9 = 0LL;
    LOBYTE(v10) = 17;
    v15 = 17;
    v11 = v6;
    if ( v1 < v5 )
    {
      do
      {
        if ( (v1 & 0xFFF) == 0 || (_BYTE)v10 == 17 )
        {
          if ( (_BYTE)v10 != 17 )
            sub_140334790(v9, v10, v7, v8);
          v9 = sub_140273AAC(v1, (__int64)&v15);
        }
        v12 = sub_1402738F0((unsigned __int64 *)v1, 0LL);
        v13 = *(_QWORD *)v1;
        if ( (*(_QWORD *)v1 & 1) == 0 )
        {
          if ( qword_140C50780 && (v13 & 0x10) == 0 )
            v13 &= ~qword_140C50780;
          v11 ^= (v11 ^ v13) & 0xFFFFFFFFFF000LL;
          *(_QWORD *)v1 = v11;
          *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
          sub_140326870(v12, 0);
          v14 = *(_BYTE *)(v12 + 34) & 0xF8 | 6;
          ++*(_WORD *)(v12 + 32);
          *(_BYTE *)(v12 + 34) = v14;
        }
        v10 = 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v1 += 8LL;
        if ( (v1 & 0x1F8) != 0 || !KeShouldYieldProcessor() )
        {
          LOBYTE(v10) = v15;
        }
        else
        {
          LOBYTE(v10) = v15;
          sub_140334790(v9, v10, v7, v8);
          LOBYTE(v10) = 17;
          v15 = 17;
        }
      }
      while ( v1 < v5 );
      if ( (_BYTE)v10 != 17 )
        sub_140334790(v9, v10, v7, v8);
    }
    return 1LL;
  }
  return result;
}
