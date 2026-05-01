/*
 * XREFs of RmpClientCallbackCompareToPayload @ 0x1800076C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientCallbackCompareToPayload(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  if ( *(_DWORD *)a1 )
    v2 = *(_QWORD *)(a1 + 16);
  else
    v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 48);
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
