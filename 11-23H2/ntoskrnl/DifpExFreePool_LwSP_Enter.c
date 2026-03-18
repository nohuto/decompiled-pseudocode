/*
 * XREFs of DifpExFreePool_LwSP_Enter @ 0x140AE7BF0
 * Callers:
 *     <none>
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14060F088 (ExIsSpecialPoolAddress.c)
 */

__int64 __fastcall DifpExFreePool_LwSP_Enter(__int64 a1)
{
  __int64 result; // rax

  result = ExIsSpecialPoolAddress(*(_QWORD *)(a1 + 8));
  if ( (_DWORD)result )
    _InterlockedIncrement64(&LwSPAllocatedSpecialPools);
  DifpSpecialPoolEnabled = 0;
  return result;
}
