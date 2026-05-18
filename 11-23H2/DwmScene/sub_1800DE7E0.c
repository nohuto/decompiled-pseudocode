/*
 * XREFs of sub_1800DE7E0 @ 0x1800DE7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DCD70 @ 0x1800DCD70 (sub_1800DCD70.c)
 */

__int64 __fastcall sub_1800DE7E0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  if ( !(unsigned int)sub_1800DCD70(a1, a2, &v5) )
    return v5;
  return a3;
}
