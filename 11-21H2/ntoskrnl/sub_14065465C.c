/*
 * XREFs of sub_14065465C @ 0x14065465C
 * Callers:
 *     sub_140AA9594 @ 0x140AA9594 (sub_140AA9594.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14065465C(unsigned int a1)
{
  __int64 v1; // rcx
  char result; // al

  if ( a1 >= 4 )
    return 0;
  v1 = 5LL * a1;
  if ( !*((_QWORD *)&unk_140D04CF0 + v1) )
    return 0;
  result = 1;
  *(_OWORD *)((char *)&unk_140D04CF0 + 8 * v1) = 0LL;
  *(_OWORD *)((char *)&unk_140D04CF0 + 8 * v1 + 16) = 0LL;
  *((_QWORD *)&unk_140D04CF0 + v1 + 4) = 0LL;
  return result;
}
