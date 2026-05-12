/*
 * XREFs of PmTableGuidCompareRoutine @ 0x1C001C010
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C000B530 (memcmp.c)
 */

__int64 __fastcall PmTableGuidCompareRoutine(struct _RTL_AVL_TABLE *Table, char *FirstStruct, char *SecondStruct)
{
  int v3; // eax

  v3 = memcmp(FirstStruct + 24, SecondStruct + 24, 0x10uLL);
  if ( v3 < 0 )
    return 0LL;
  else
    return (unsigned int)(v3 <= 0) + 1;
}
