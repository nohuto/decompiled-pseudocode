/*
 * XREFs of sub_1406AC130 @ 0x1406AC130
 * Callers:
 *     sub_1406A6448 @ 0x1406A6448 (sub_1406A6448.c)
 *     sub_1406A6520 @ 0x1406A6520 (sub_1406A6520.c)
 *     RtlDestroyAtomTable @ 0x1406AB410 (RtlDestroyAtomTable.c)
 *     sub_14070BCA4 @ 0x14070BCA4 (sub_14070BCA4.c)
 *     sub_140966C80 @ 0x140966C80 (sub_140966C80.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     sub_1406AC258 @ 0x1406AC258 (sub_1406AC258.c)
 *     sub_1406AC298 @ 0x1406AC298 (sub_1406AC298.c)
 *     sub_1409F8D78 @ 0x1409F8D78 (sub_1409F8D78.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406AC130(_QWORD *P)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // r14
  unsigned int i; // ebp
  __int64 v7; // r8
  unsigned int j; // r12d
  _QWORD *v9; // rbp
  unsigned int v10; // r13d
  _QWORD *v11; // r15

  v2 = P[2];
  v3 = P[1] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (P[1] & 3) != 0 )
  {
    v5 = (_QWORD *)(P[1] & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (P[1] & 3) == 1 )
    {
      for ( i = 0; i < 0x200; ++i )
      {
        if ( !*v5 )
          break;
        sub_1406AC258(v2);
        ++v5;
      }
      v7 = 4096LL;
    }
    else
    {
      for ( j = 0; j < 0x80; ++j )
      {
        v9 = (_QWORD *)*v5;
        if ( !*v5 )
          break;
        v10 = 0;
        v11 = (_QWORD *)*v5;
        do
        {
          if ( !*v11 )
            break;
          sub_1406AC258(v2);
          ++v10;
          ++v11;
        }
        while ( v10 < 0x200 );
        sub_1406AC298(v2, v9, 4096LL);
        ++v5;
      }
      v7 = 1024LL;
    }
    sub_1406AC298(v2, v3, v7);
  }
  else
  {
    sub_1406AC258(P[2]);
  }
  v4 = P[12];
  if ( v4 )
    sub_1409F8D78(P, v4);
  ExFreePoolWithTag(P, 0x6274624Fu);
  if ( v2 )
    PsReturnProcessPagedPoolQuota(v2, 128LL);
}
