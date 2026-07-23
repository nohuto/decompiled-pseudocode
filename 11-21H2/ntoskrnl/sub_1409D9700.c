/*
 * XREFs of sub_1409D9700 @ 0x1409D9700
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409DA178 @ 0x1409DA178 (sub_1409DA178.c)
 */

__int64 __fastcall sub_1409D9700(unsigned int a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2288LL);
  if ( v2 )
    return sub_1409DA178(v2, a1);
  else
    return 3221225608LL;
}
