/*
 * XREFs of sub_1403BB7AC @ 0x1403BB7AC
 * Callers:
 *     sub_140A55270 @ 0x140A55270 (sub_140A55270.c)
 * Callees:
 *     sub_1403BB820 @ 0x1403BB820 (sub_1403BB820.c)
 *     sub_14051B094 @ 0x14051B094 (sub_14051B094.c)
 */

__int64 sub_1403BB7AC()
{
  __int64 result; // rax
  int v1; // r8d
  unsigned int v2; // ecx
  __int64 i; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( byte_140C4BCBC )
    return 0LL;
  result = sub_1403BB820(1, 0, 0, 0, (__int64)&qword_140C4BC80);
  v2 = result;
  if ( (int)result >= 0 )
  {
    for ( i = qword_140C4BCE0; (__int64 *)i != &qword_140C4BCE0; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 472) & 0x100) != 0 )
      {
        LOBYTE(v1) = 1;
        result = sub_14051B094(qword_140C4BC80, i, v1, 0, (__int64)&v4);
        v2 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    return v2;
  }
  return result;
}
