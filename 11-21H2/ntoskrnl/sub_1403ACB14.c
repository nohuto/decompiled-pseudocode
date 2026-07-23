/*
 * XREFs of sub_1403ACB14 @ 0x1403ACB14
 * Callers:
 *     sub_1403AC640 @ 0x1403AC640 (sub_1403AC640.c)
 * Callees:
 *     sub_1403ACC4C @ 0x1403ACC4C (sub_1403ACC4C.c)
 *     sub_1403ACEA4 @ 0x1403ACEA4 (sub_1403ACEA4.c)
 */

__int64 __fastcall sub_1403ACB14(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r14
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF

  v1 = a1;
  if ( !byte_140C4C77C )
  {
    *(_QWORD *)(((unsigned __int64)a1 << 7) + qword_140C4C770 + 8) = 0LL;
    _InterlockedOr(v15, 0);
    _InterlockedExchange((volatile __int32 *)(((unsigned __int64)a1 << 7) + qword_140C4C770), 1);
    while ( *(_DWORD *)(((unsigned __int64)a1 << 7) + qword_140C4C770) == 1 )
      _mm_pause();
  }
  v2 = sub_1403ACC4C(a1, 0LL);
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !byte_140C4C77C )
  {
    v9 = 0;
    if ( dword_140C0CA98 )
    {
      v10 = v1 << 7;
      do
      {
        v11 = qword_140C4C770;
        v12 = v3;
        *(_QWORD *)(v10 + qword_140C4C770 + 8) = 0LL;
        *(_DWORD *)(v10 + v11 + 4) = 100;
        _InterlockedOr(v15, 0);
        _InterlockedExchange((volatile __int32 *)(v10 + qword_140C4C770), 2);
        while ( *(_DWORD *)(v10 + qword_140C4C770) == 2 )
          _mm_pause();
        v13 = sub_1403ACC4C((unsigned int)v1, 0LL);
        v14 = v2 - v13;
        v2 = v13;
        v3 = v14 / 100;
        if ( v14 / 100 >= v12 )
          v3 = v12;
        ++v9;
      }
      while ( v9 < dword_140C0CA98 );
    }
    *(_DWORD *)(qword_140C4C740 + 4 * v1) = v3;
  }
  v4 = 0;
  LODWORD(v5) = 0;
  v6 = 0;
  do
  {
    if ( !v4 )
    {
      v5 = -v2;
      v7 = v1 << 7;
      if ( byte_140C4C77C )
      {
        *(_QWORD *)(v7 + qword_140C4C770 + 8) = v5;
        _InterlockedOr(v15, 0);
        _InterlockedExchange((volatile __int32 *)(v7 + qword_140C4C770), 3);
        while ( *(_DWORD *)(v7 + qword_140C4C770) == 3 )
          _mm_pause();
      }
      else
      {
        LODWORD(v5) = v3 - v2;
        *(_QWORD *)(v7 + qword_140C4C770 + 8) = v3 - v2;
        _InterlockedOr(v15, 0);
        _InterlockedExchange((volatile __int32 *)(v7 + qword_140C4C770), 1);
        while ( *(_DWORD *)(v7 + qword_140C4C770) == 1 )
          _mm_pause();
      }
    }
    v2 = sub_1403ACC4C((unsigned int)v1, 0LL);
    if ( !v4 )
      sub_1403ACEA4(*((_DWORD *)KeGetCurrentPrcb() + 9), v1, v2, v5, v6);
    ++v4;
    if ( (unsigned __int64)(v2 + 24) > 0x30 )
      v4 = 0;
    ++v6;
  }
  while ( v4 < 2 && v6 < 0x32 );
  result = qword_140C4C738;
  *(_DWORD *)(qword_140C4C738 + 4 * v1) = v6;
  return result;
}
