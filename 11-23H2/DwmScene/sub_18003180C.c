/*
 * XREFs of sub_18003180C @ 0x18003180C
 * Callers:
 *     sub_18002E1F8 @ 0x18002E1F8 (sub_18002E1F8.c)
 *     sub_18009702C @ 0x18009702C (sub_18009702C.c)
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 *     sub_1800A40AC @ 0x1800A40AC (sub_1800A40AC.c)
 * Callees:
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 */

__int64 __fastcall sub_18003180C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180013300(v1);
  return result;
}
