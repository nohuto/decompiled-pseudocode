/*
 * XREFs of sub_140988ECC @ 0x140988ECC
 * Callers:
 *     sub_140B23F80 @ 0x140B23F80 (sub_140B23F80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140988ECC(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedExchange64((volatile __int64 *)(a1 + 136), 0LL);
  *(_DWORD *)(a1 + 152) |= 1u;
  return result;
}
