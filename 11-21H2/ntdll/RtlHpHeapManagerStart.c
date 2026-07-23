/*
 * XREFs of RtlHpHeapManagerStart @ 0x18011F4D4
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x1801181CC (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlpHpVaMgrCtxStart @ 0x1800B1B08 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x180120AFC (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  qword_18017B718 = 0LL;
  result = RtlCSparseBitmapStart(BaseAddress);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((__int64)&unk_18017B768, v6, v7, v8, a5 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
