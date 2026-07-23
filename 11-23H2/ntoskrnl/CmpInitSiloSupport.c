/*
 * XREFs of CmpInitSiloSupport @ 0x14080C890
 * Callers:
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 * Callees:
 *     CmInitServerSiloState @ 0x14080C904 (CmInitServerSiloState.c)
 *     PspStorageAllocSlot @ 0x14081F28C (PspStorageAllocSlot.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot(&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
