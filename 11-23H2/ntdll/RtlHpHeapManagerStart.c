/*
 * XREFs of RtlHpHeapManagerStart @ 0x180122844
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x1800B1040 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlpHpVaMgrCtxStart @ 0x1800B1B3C (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x1800B1C08 (RtlCSparseBitmapStart.c)
 */

int __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  int result; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  qword_180188A88 = 0LL;
  result = RtlCSparseBitmapStart(BaseAddress, (void *)(2 * (a5 >> 20)), a3, 0);
  if ( result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((__int64)&unk_180188AD8, v6, v7, v8, a5 - 1);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
