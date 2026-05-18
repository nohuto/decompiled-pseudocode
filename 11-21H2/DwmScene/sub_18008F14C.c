/*
 * XREFs of sub_18008F14C @ 0x18008F14C
 * Callers:
 *     sub_18008EE60 @ 0x18008EE60 (sub_18008EE60.c)
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_18009010C @ 0x18009010C (sub_18009010C.c)
 *     sub_180092984 @ 0x180092984 (sub_180092984.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 */

char *__fastcall sub_18008F14C(char *a1, __int64 a2)
{
  char *v3; // rbx

  v3 = a1;
  if ( a2 )
  {
    memset(a1, 0, 4 * a2);
    v3 += 4 * a2;
  }
  return v3;
}
