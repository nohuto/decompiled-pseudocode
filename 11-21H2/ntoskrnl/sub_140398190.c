/*
 * XREFs of sub_140398190 @ 0x140398190
 * Callers:
 *     sub_1403AC640 @ 0x1403AC640 (sub_1403AC640.c)
 * Callees:
 *     sub_1403ACC4C @ 0x1403ACC4C (sub_1403ACC4C.c)
 *     sub_1403ACEA4 @ 0x1403ACEA4 (sub_1403ACEA4.c)
 *     sub_14050DA5C @ 0x14050DA5C (sub_14050DA5C.c)
 */

__int64 __fastcall sub_140398190(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned int v4; // edi
  int v5; // r14d
  unsigned int v6; // ebp
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r8

  if ( !byte_140C4C77C )
    sub_14050DA5C(0LL);
  v2 = sub_1403ACC4C(a1, 0LL);
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !byte_140C4C77C )
  {
    for ( i = 0; i < dword_140C0CA98; ++i )
    {
      v9 = v3;
      v10 = v2;
      do
        sub_14050DA5C(0LL);
      while ( v11 != 1 );
      v2 = sub_1403ACC4C(a1, 0LL);
      v3 = (v2 - v10) / 100;
      if ( v3 >= v9 )
        v3 = v9;
    }
    *(_DWORD *)(qword_140C4C740 + 4LL * *((unsigned int *)KeGetCurrentPrcb() + 9)) = v3;
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( !v4 )
    {
      if ( byte_140C4C77C )
      {
        v5 = v2;
        __writemsr(0x3Bu, v2 + __readmsr(0x3Bu));
      }
      else
      {
        v5 = v3 + v2;
        sub_14050DA5C(v3 + v2);
      }
    }
    v2 = sub_1403ACC4C(a1, 0LL);
    if ( !v4 )
      sub_1403ACEA4(a1, *((_DWORD *)KeGetCurrentPrcb() + 9), v2, v5, v6);
    ++v4;
    if ( (unsigned __int64)(v2 + 24) > 0x30 )
      v4 = 0;
    ++v6;
  }
  while ( v4 < 2 && v6 < 0x32 );
  result = qword_140C4C738;
  *(_DWORD *)(qword_140C4C738 + 4LL * *((unsigned int *)KeGetCurrentPrcb() + 9)) = v6;
  return result;
}
