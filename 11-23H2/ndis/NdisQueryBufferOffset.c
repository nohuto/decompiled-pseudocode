/*
 * XREFs of NdisQueryBufferOffset @ 0x1C00C57C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisQueryBufferOffset(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 44);
  result = *(unsigned int *)(a1 + 40);
  *a3 = result;
  return result;
}
