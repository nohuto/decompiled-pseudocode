/*
 * XREFs of sub_1402500B0 @ 0x1402500B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1402500B0(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  result = 0;
  if ( a2 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a2 + 8);
    return 1;
  }
  return result;
}
