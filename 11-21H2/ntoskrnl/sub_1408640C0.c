/*
 * XREFs of sub_1408640C0 @ 0x1408640C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1408640C0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  if ( a3 != -1 && (a3 <= 0 || a3 > 2) )
    return 3221225474LL;
  *(_QWORD *)(a6 + 4) = 0LL;
  *(_DWORD *)(a6 + 12) = 0;
  *(_QWORD *)(a6 + 16) = _misaligned_access;
  *(_QWORD *)(a6 + 24) = _misaligned_access;
  *(_QWORD *)(a6 + 32) = sub_14084F1B0;
  *(_QWORD *)(a6 + 40) = sub_14084F290;
  *(_DWORD *)a6 = 48;
  return 0LL;
}
