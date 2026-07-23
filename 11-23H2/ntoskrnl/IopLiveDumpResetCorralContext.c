/*
 * XREFs of IopLiveDumpResetCorralContext @ 0x140A9C388
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14094C76C (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopLiveDumpResetCorralContext(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 120) = 0;
  return result;
}
