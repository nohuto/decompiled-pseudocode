/*
 * XREFs of TpCallbackLeaveCriticalSectionOnCompletion @ 0x18008E1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpCallbackLeaveCriticalSectionOnCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a1 || !a2 || *(_QWORD *)(a1 + 192) )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 144) |= 1u;
  *(_QWORD *)(a1 + 192) = a2;
  return result;
}
