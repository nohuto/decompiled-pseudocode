/*
 * XREFs of NdisSetPacketCancelId @ 0x1C009DC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisSetPacketCancelId(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 42);
  *(_QWORD *)(result + a1 + 104) = a2;
  return result;
}
