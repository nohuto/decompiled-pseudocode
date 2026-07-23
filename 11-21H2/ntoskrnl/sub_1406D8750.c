/*
 * XREFs of sub_1406D8750 @ 0x1406D8750
 * Callers:
 *     sub_1407842F0 @ 0x1407842F0 (sub_1407842F0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1406D87C0 @ 0x1406D87C0 (sub_1406D87C0.c)
 */

__int64 __fastcall sub_1406D8750(__int64 a1, int a2)
{
  int v3; // edx
  char v4; // bl
  __int64 v5; // rdx
  unsigned int v6; // ebx

  v3 = a2 - 2244924;
  if ( !v3 )
  {
    v4 = 0;
LABEL_3:
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    LOBYTE(v5) = v4;
    v6 = sub_1406D87C0(a1, v5);
    KeReleaseMutex(&Object, 0);
    return v6;
  }
  if ( v3 == 4 )
  {
    v4 = 1;
    goto LABEL_3;
  }
  return 3221225647LL;
}
