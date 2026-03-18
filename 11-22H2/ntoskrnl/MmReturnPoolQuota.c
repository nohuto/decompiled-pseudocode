/*
 * XREFs of MmReturnPoolQuota @ 0x140365530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140C65610 -= a2;
  else
    qword_140C65618 -= a2;
}
