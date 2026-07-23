/*
 * XREFs of sub_1402E1260 @ 0x1402E1260
 * Callers:
 *     sub_1406ACDDC @ 0x1406ACDDC (sub_1406ACDDC.c)
 *     sub_1406C22CC @ 0x1406C22CC (sub_1406C22CC.c)
 *     sub_1406C3918 @ 0x1406C3918 (sub_1406C3918.c)
 *     sub_1407C6580 @ 0x1407C6580 (sub_1407C6580.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     sub_1407E3E2C @ 0x1407E3E2C (sub_1407E3E2C.c)
 *     sub_1407E4178 @ 0x1407E4178 (sub_1407E4178.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E1260(unsigned int a1, int a2, int *a3)
{
  unsigned int v3; // eax
  int v4; // edx
  __int64 result; // rax

  v3 = a1 + a2;
  v4 = -1;
  if ( v3 >= a1 )
    v4 = v3;
  result = v3 < a1 ? 0xC0000095 : 0;
  *a3 = v4;
  return result;
}
