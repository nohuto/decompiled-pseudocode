/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x1800B1A24
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x1800B1040 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *result; // rax

  memset_thunk_772440563353939046(&RtlpHpHeapManager, 0, 0x38E0uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset_thunk_772440563353939046(&qword_180188A88, 0, 0x50uLL);
  dword_180188AC4 = 16;
  qword_180188AB0 = -1LL;
  memset_thunk_772440563353939046(&unk_180188AD8, 0, 0x3840uLL);
  v3 = &unk_180189350;
  qword_180188B18 = -1LL;
  v4 = 255LL;
  dword_180188B2C = 2056;
  do
  {
    *(v3 - 1) = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    v3 += 6;
    --v4;
  }
  while ( v4 );
  qword_180185770 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  qword_180185768 = (__int64)&unk_180185778;
  dword_180185764 = 2048;
  memset64(&unk_180185778, (unsigned __int64)&RtlpHpHeapVaCallbacksRegistrar + 1, 0x40uLL);
  v5 = 4LL;
  qword_18018C358 = *a2;
  result = &unk_18018C320;
  do
  {
    *result = 0LL;
    result += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
