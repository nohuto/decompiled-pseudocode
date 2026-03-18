/*
 * XREFs of DifpExFreePool_LwSP_Enter @ 0x140AA6DF0
 * Callers:
 *     <none>
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x140642384 (ExIsSpecialPoolAddress.c)
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
