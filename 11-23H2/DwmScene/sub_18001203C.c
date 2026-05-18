/*
 * XREFs of sub_18001203C @ 0x18001203C
 * Callers:
 *     sub_180012228 @ 0x180012228 (sub_180012228.c)
 *     sub_18001306C @ 0x18001306C (sub_18001306C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 *     sub_18002E1F8 @ 0x18002E1F8 (sub_18002E1F8.c)
 *     sub_18009702C @ 0x18009702C (sub_18009702C.c)
 *     sub_1800970DC @ 0x1800970DC (sub_1800970DC.c)
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 *     sub_180097370 @ 0x180097370 (sub_180097370.c)
 *     sub_180097890 @ 0x180097890 (sub_180097890.c)
 *     sub_1800A40AC @ 0x1800A40AC (sub_1800A40AC.c)
 *     sub_1800E0590 @ 0x1800E0590 (sub_1800E0590.c)
 *     sub_1800E0B18 @ 0x1800E0B18 (sub_1800E0B18.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_18001203C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        result = sub_180010530(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
