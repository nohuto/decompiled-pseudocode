/*
 * XREFs of sub_140B01F80 @ 0x140B01F80
 * Callers:
 *     sub_140B01BE0 @ 0x140B01BE0 (sub_140B01BE0.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1403C0E9C @ 0x1403C0E9C (sub_1403C0E9C.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_140571FB4 @ 0x140571FB4 (sub_140571FB4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void *__fastcall sub_140B01F80(WORD a1, _BYTE *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 Pool2; // rax
  void *v5; // rbx
  size_t v6; // rsi
  BYTE v7; // di
  _BYTE *v8; // r14
  _PROCESSOR_NUMBER v10; // [rsp+30h] [rbp+8h] BYREF

  v10.Group = a1;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  if ( ActiveProcessorCount - 1 > 0xFD )
    sub_140571FB4(0x1001uLL, ActiveProcessorCount);
  *a2 = ActiveProcessorCount;
  Pool2 = ExAllocatePool2(64LL, 2LL * (unsigned __int8)ActiveProcessorCount, 0x5049654Bu);
  v5 = (void *)Pool2;
  if ( Pool2 )
  {
    v6 = (unsigned __int8)*a2;
    v7 = 0;
    if ( (_BYTE)v6 )
    {
      v8 = (_BYTE *)Pool2;
      do
      {
        v10 = 0;
        v10.Number = v7;
        *v8 = v7++;
        v8[1] = sub_1403C0E9C(&v10);
        v8 += 2;
      }
      while ( v7 < (unsigned __int8)v6 );
    }
    qsort(v5, v6, 2uLL, sub_140B2F9A0);
  }
  return v5;
}
