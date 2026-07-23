/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x14022E1F0
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 *     sub_14085D8F8 @ 0x14085D8F8 (sub_14085D8F8.c)
 *     sub_14097BBE0 @ 0x14097BBE0 (sub_14097BBE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) = 4;
  return result;
}
