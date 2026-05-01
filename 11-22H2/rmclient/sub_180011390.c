/*
 * XREFs of sub_180011390 @ 0x180011390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180011390(_QWORD *a1, __int64 a2, __int64 a3)
{
  if ( a3 == -1 )
    sub_180010C80((RTL_SRWLOCK *)&byte_180032A38, a1, a2);
  else
    sub_180010BE4((__int64)&byte_180032A38, a1, a2, a3);
}
