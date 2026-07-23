/*
 * XREFs of sub_1405DD718 @ 0x1405DD718
 * Callers:
 *     sub_140396E7C @ 0x140396E7C (sub_140396E7C.c)
 *     sub_1405DD674 @ 0x1405DD674 (sub_1405DD674.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405DD718(__int64 a1, char a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int128 *v4; // rcx
  __int64 result; // rax
  __int128 *v6; // rcx

  v2 = MEMORY[0xFFFFF78000000008];
  v3 = 28LL;
  if ( a2 )
  {
    if ( dword_140C1CB9C != 28 )
      qword_140C1CC28 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C1CB98 )
      qword_140C1CC20 = MEMORY[0xFFFFF78000000008];
    v6 = &xmmword_140C1CD10;
    do
    {
      result = *((unsigned int *)v6 - 92);
      *(_DWORD *)v6 += result;
      v6 = (__int128 *)((char *)v6 + 4);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    if ( dword_140C1CB9C != 28 )
    {
      *((_QWORD *)xmmword_140C1CC30 + (unsigned int)dword_140C1CB9C) += MEMORY[0xFFFFF78000000008] - qword_140C1CC28;
      qword_140C1CC28 = 0LL;
    }
    if ( dword_140C1CB98 )
    {
      qword_140C1CC18 += v2 - qword_140C1CC20;
      qword_140C1CC20 = 0LL;
    }
    v4 = &xmmword_140C1CD10;
    do
    {
      result = *((unsigned int *)v4 - 92);
      *(_DWORD *)v4 -= result;
      v4 = (__int128 *)((char *)v4 + 4);
      --v3;
    }
    while ( v3 );
  }
  byte_140C1CC10 = a2;
  return result;
}
