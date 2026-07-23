/*
 * XREFs of sub_1406997B8 @ 0x1406997B8
 * Callers:
 *     sub_140697EF0 @ 0x140697EF0 (sub_140697EF0.c)
 *     sub_140805024 @ 0x140805024 (sub_140805024.c)
 *     sub_14081C354 @ 0x14081C354 (sub_14081C354.c)
 * Callees:
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_1406997B8(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rdi
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)&qword_140D00AC0;
  v11 = 0LL;
  v7 = sub_14078014C(*(_QWORD *)&qword_140D00AC0, a2, &v11);
  if ( v7 >= 0 )
  {
    if ( v5 )
      v8 = *(_QWORD *)(v5 + 224);
    else
      LODWORD(v8) = 0;
    v9 = sub_14077FFEC(v8, v11, (unsigned int)&word_140867F00, 0, a4, a5);
    if ( v9 == -1073741444 )
    {
      return (unsigned int)-1073741595;
    }
    else if ( v9 < 0 )
    {
      return (unsigned int)v9;
    }
  }
  return (unsigned int)v7;
}
