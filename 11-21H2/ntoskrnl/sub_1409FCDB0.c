/*
 * XREFs of sub_1409FCDB0 @ 0x1409FCDB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409FE4F8 @ 0x1409FE4F8 (sub_1409FE4F8.c)
 */

bool __fastcall sub_1409FCDB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1 - 0x11D293CA8BE4DF61LL;
  if ( *a1 == 0x11D293CA8BE4DF61LL )
    v2 = a1[1] + 0x73D4FC671FFFF256LL;
  return !v2 && (unsigned int)sub_1409FE4F8(a2, &v4);
}
