/*
 * XREFs of sub_1403C2E24 @ 0x1403C2E24
 * Callers:
 *     sub_140B0610C @ 0x140B0610C (sub_140B0610C.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403C2E24()
{
  __int64 result; // rax
  unsigned __int16 v1; // r10
  __int64 *v2; // rbx
  __int16 v3; // r11
  __int64 v4; // rdi
  __int16 v5; // r8
  __int64 v6; // r9
  _BYTE *v7; // rcx
  unsigned __int8 v8; // al
  char v9; // cl
  __int64 v10; // r9
  _BYTE *v11; // rdx
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v1 = 0;
  if ( word_140D05000 )
  {
    v2 = qword_140D31700;
    do
    {
      v3 = 0;
      v4 = *v2;
      v5 = 0;
      if ( word_140C2B0F0 )
      {
        v6 = (unsigned __int16)word_140C2B0F0;
        v7 = (_BYTE *)(qword_140C2B0F8 + 5);
        do
        {
          if ( *(_WORD *)(v7 - 3) == v1 )
          {
            ++v3;
            if ( (*v7 & 1) != 0 )
              ++v5;
          }
          v7 += 24;
          --v6;
        }
        while ( v6 );
      }
      v8 = *(_BYTE *)(v4 + 10);
      v9 = v8 | 2;
      result = v8 & 0xFD;
      if ( v3 != v5 )
        v9 = result;
      ++v1;
      ++v2;
      *(_BYTE *)(v4 + 10) = v9;
    }
    while ( v1 < (unsigned __int16)word_140D05000 );
  }
  if ( word_140C2B0F0 )
  {
    v10 = (unsigned __int16)word_140C2B0F0;
    v11 = (_BYTE *)(qword_140C2B0F8 + 5);
    do
    {
      if ( (*v11 & 1) != 0 )
      {
        result = qword_140D31700[*(unsigned __int16 *)(v11 - 3)];
        if ( (*(_BYTE *)(result + 10) & 2) == 0 )
          *v11 &= ~1u;
      }
      v11 += 24;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
