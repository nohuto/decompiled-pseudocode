/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1407CD7A0
 * Callers:
 *     sub_14025179C @ 0x14025179C (sub_14025179C.c)
 *     sub_1403CB110 @ 0x1403CB110 (sub_1403CB110.c)
 *     sub_1406470A8 @ 0x1406470A8 (sub_1406470A8.c)
 *     sub_140647A40 @ 0x140647A40 (sub_140647A40.c)
 *     sub_14076C544 @ 0x14076C544 (sub_14076C544.c)
 *     sub_1407C94E0 @ 0x1407C94E0 (sub_1407C94E0.c)
 *     sub_140804350 @ 0x140804350 (sub_140804350.c)
 *     sub_14083F230 @ 0x14083F230 (sub_14083F230.c)
 *     sub_140957E34 @ 0x140957E34 (sub_140957E34.c)
 *     sub_14099F320 @ 0x14099F320 (sub_14099F320.c)
 *     sub_140A360D8 @ 0x140A360D8 (sub_140A360D8.c)
 *     sub_140A36378 @ 0x140A36378 (sub_140A36378.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  int v5; // r15d
  int v7; // r14d
  __int64 v8; // rdi
  unsigned __int64 v9; // r9
  unsigned __int16 *v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // r11
  char *v14; // rbx
  int v15; // eax
  int v16; // ecx
  int v18; // ebp
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // si

  v5 = String2Length;
  v7 = String1Length;
  v8 = *((_QWORD *)sub_140347DB0() + 154);
  v12 = v11;
  if ( v11 > v9 )
    v12 = v9;
  v13 = &v10[v12];
  if ( v10 >= v13 )
    return v7 - v5;
  v14 = (char *)((char *)String2 - (char *)v10);
  if ( CaseInSensitive )
  {
    do
    {
      v20 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v14);
      if ( *v10 != v20 )
      {
        v18 = sub_1403477B0(v8, *v10);
        v19 = sub_1403477B0(v8, v20);
        if ( (_WORD)v18 != v19 )
        {
          v16 = v19;
          v15 = v18;
          return v15 - v16;
        }
      }
      ++v10;
    }
    while ( v10 < v13 );
    return v7 - v5;
  }
  else
  {
    while ( 1 )
    {
      v15 = *v10;
      v16 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v14);
      if ( (_WORD)v15 != (_WORD)v16 )
        break;
      if ( ++v10 >= v13 )
        return v7 - v5;
    }
    return v15 - v16;
  }
}
