/*
 * XREFs of MmReturnPoolQuota @ 0x140255700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140C4F0D8 -= a2;
  else
    qword_140C4F0E0 -= a2;
}
