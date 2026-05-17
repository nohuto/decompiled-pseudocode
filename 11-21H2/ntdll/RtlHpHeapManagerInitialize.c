/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x18011F400
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x1801181CC (RtlHpInitializeHeapManager.c)
 * Callees:
 *     memset @ 0x1800AAE00 (memset.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *result; // rax

  memset(&RtlpHpHeapManager, 0, 0x38E0uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset(&qword_18017B718, 0, 0x50uLL);
  qword_18017B740 = -1LL;
  dword_18017B754 = 16;
  memset(&unk_18017B768, 0, 0x3840uLL);
  qword_18017B7A8 = -1LL;
  v3 = &unk_18017BFE0;
  dword_18017B7BC = 2056;
  v4 = 255LL;
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
  v5 = 4LL;
  qword_18017EFE8 = *a2;
  result = &unk_18017EFB0;
  do
  {
    *result = 0LL;
    result += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
