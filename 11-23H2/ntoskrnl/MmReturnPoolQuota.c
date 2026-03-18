/*
 * XREFs of MmReturnPoolQuota @ 0x140365B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MmReturnPoolQuota(int a1, __int64 a2)
{
  if ( a1 == 1 )
    qword_140C65510 -= a2;
  else
    qword_140C65518 -= a2;
}
