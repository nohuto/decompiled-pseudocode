/*
 * XREFs of sub_14084E99C @ 0x14084E99C
 * Callers:
 *     sub_1406E7CD4 @ 0x1406E7CD4 (sub_1406E7CD4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14084EA70 @ 0x14084EA70 (sub_14084EA70.c)
 */

__int64 __fastcall sub_14084E99C(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rsi
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-38h]

  v1 = 6LL;
  v2 = a1 + 2;
  v9 = 0LL;
  v4 = 1;
  do
  {
    v5 = (_QWORD *)*v2;
    while ( v5 )
    {
      v7 = sub_14084EA70(*v5);
      v5 = (_QWORD *)v5[1];
      ++*((_DWORD *)&v9 + v7);
    }
    ++v2;
    --v1;
  }
  while ( v1 );
  if ( !DWORD1(v9) )
  {
    if ( HIDWORD(v9) )
    {
      v8 = *(_QWORD *)(*a1 + 720LL);
      if ( v8 && (*(_BYTE *)(v8 + 16) & 0x24) != 0 )
        return 2;
      else
        return 0;
    }
    else
    {
      return DWORD2(v9) != 0 ? 2 : 0;
    }
  }
  return v4;
}
