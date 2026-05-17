/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x1800AF954
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x1800AEF70 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *result; // rax

  memset_thunk_772440563353939046(&RtlpHpHeapManager, 0, 0x38E0uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset_thunk_772440563353939046(&qword_1801859B8, 0, 0x50uLL);
  dword_1801859F4 = 16;
  qword_1801859E0 = -1LL;
  memset_thunk_772440563353939046(&unk_180185A08, 0, 0x3840uLL);
  v3 = &unk_180186280;
  qword_180185A48 = -1LL;
  v4 = 255LL;
  dword_180185A5C = 2056;
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
  qword_180182730 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  qword_180182728 = (__int64)&unk_180182738;
  dword_180182724 = 2048;
  memset64(&unk_180182738, (unsigned __int64)&RtlpHpHeapVaCallbacksRegistrar + 1, 0x40uLL);
  v5 = 4LL;
  qword_180189288 = *a2;
  result = &unk_180189250;
  do
  {
    *result = 0LL;
    result += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
