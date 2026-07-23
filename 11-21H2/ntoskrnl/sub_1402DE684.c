/*
 * XREFs of sub_1402DE684 @ 0x1402DE684
 * Callers:
 *     sub_1402DE5C0 @ 0x1402DE5C0 (sub_1402DE5C0.c)
 *     sub_1407730FC @ 0x1407730FC (sub_1407730FC.c)
 * Callees:
 *     IoAllocateWorkItem @ 0x1402DE6E0 (IoAllocateWorkItem.c)
 *     sub_140345DA0 @ 0x140345DA0 (sub_140345DA0.c)
 *     sub_1403467F0 @ 0x1403467F0 (sub_1403467F0.c)
 */

PIO_WORKITEM __fastcall sub_1402DE684(__int64 a1)
{
  PIO_WORKITEM result; // rax
  ULONG_PTR v3; // rax

  result = (PIO_WORKITEM)(unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL));
    if ( result )
    {
      v3 = sub_1403467F0(result, sub_1402D3290, a1);
      return (PIO_WORKITEM)sub_140345DA0(v3);
    }
  }
  return result;
}
