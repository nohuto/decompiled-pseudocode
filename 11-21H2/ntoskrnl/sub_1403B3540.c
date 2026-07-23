/*
 * XREFs of sub_1403B3540 @ 0x1403B3540
 * Callers:
 *     sub_1403B3320 @ 0x1403B3320 (sub_1403B3320.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

struct _KPRCB *__fastcall sub_1403B3540(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  struct _KPRCB *result; // rax

  v2 = a2;
  sub_14042A5E0(128LL, 16 * a2);
  sub_14042A5E0(128LL, v3);
  result = KeGetCurrentPrcb();
  if ( *((_BYTE *)result + 141) == 1 )
    __writecr8(v2);
  return result;
}
