/*
 * XREFs of sub_140A22BF8 @ 0x140A22BF8
 * Callers:
 *     sub_140697EF0 @ 0x140697EF0 (sub_140697EF0.c)
 * Callees:
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_1407801B8 @ 0x1407801B8 (sub_1407801B8.c)
 */

__int64 __fastcall sub_140A22BF8(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __int64 a7)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v7 = *(_QWORD *)&qword_140D00AC0;
  v13 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 56LL);
  if ( v8 == *(_QWORD *)&qword_140D00AC0 + 56LL )
  {
    return (unsigned int)-1073741772;
  }
  else
  {
    v9 = sub_1407801B8(*(__int64 *)&qword_140D00AC0, (__int64 *)(v8 - 16), a4, &v13);
    if ( v9 >= 0 )
    {
      if ( v7 )
        v10 = *(_QWORD *)(v7 + 224);
      else
        v10 = 0LL;
      v11 = sub_14077FFEC(v10, v13, (__int64)&word_140867F00, 0, 0xF003Fu, a7);
      if ( v11 == -1073741444 )
      {
        return (unsigned int)-1073741595;
      }
      else if ( v11 < 0 )
      {
        return (unsigned int)v11;
      }
    }
  }
  return (unsigned int)v9;
}
