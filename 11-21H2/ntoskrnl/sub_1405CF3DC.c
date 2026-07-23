/*
 * XREFs of sub_1405CF3DC @ 0x1405CF3DC
 * Callers:
 *     sub_1405CF030 @ 0x1405CF030 (sub_1405CF030.c)
 *     sub_1405CF320 @ 0x1405CF320 (sub_1405CF320.c)
 * Callees:
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

void __fastcall sub_1405CF3DC(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter1,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // r11d

  if ( a5 > a4 )
    goto LABEL_6;
  v6 = 0;
  if ( a5 )
  {
    while ( *(_QWORD *)a6 )
    {
      ++v6;
      *(_QWORD *)a6 = *(_QWORD *)(*(_QWORD *)a6 + 192LL);
      a6 += 16LL;
      if ( v6 >= a5 )
        return;
    }
LABEL_6:
    sub_1405CAE6C((unsigned int)BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
}
