/*
 * XREFs of sub_18005E468 @ 0x18005E468
 * Callers:
 *     sub_18002AA00 @ 0x18002AA00 (sub_18002AA00.c)
 *     sub_18005A780 @ 0x18005A780 (sub_18005A780.c)
 *     sub_18005D638 @ 0x18005D638 (sub_18005D638.c)
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 *     sub_1800E3C50 @ 0x1800E3C50 (sub_1800E3C50.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 *     sub_1800E8560 @ 0x1800E8560 (sub_1800E8560.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E468(__int64 a1)
{
  unsigned int **v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(unsigned int ***)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *v3;
  }
  return result;
}
