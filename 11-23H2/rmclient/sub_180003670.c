/*
 * XREFs of sub_180003670 @ 0x180003670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000418C @ 0x18000418C (sub_18000418C.c)
 *     sub_180004DB0 @ 0x180004DB0 (sub_180004DB0.c)
 */

__int64 __fastcall sub_180003670(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180004DB0();
  if ( (int)result >= 0 )
    return sub_18000418C(&unk_180032C80, a2, a3);
  return result;
}
