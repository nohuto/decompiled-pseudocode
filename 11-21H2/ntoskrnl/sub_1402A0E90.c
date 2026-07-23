/*
 * XREFs of sub_1402A0E90 @ 0x1402A0E90
 * Callers:
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1402A0E90(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  PVOID result; // rax

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1496);
  else
    v1 = qword_140D32A90;
  v2 = (unsigned int)dword_140D05060;
  if ( (unsigned int)dword_140D05060 >= 0x20 )
  {
    v2 = (unsigned int)(dword_140D05060 - 32);
    if ( (unsigned int)v2 >= 0x100 )
      return qword_140C246D0;
    v1 = *(_QWORD *)(v1 + 512);
    if ( !v1 )
      return qword_140C246D0;
  }
  v3 = *(_QWORD *)(v1 + 16 * v2 + 8);
  result = (PVOID)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v3 & 0xFFFFFFFFFFFFFFFEuLL) == 0 || (v3 & 1) == 0 )
    return qword_140C246D0;
  return result;
}
