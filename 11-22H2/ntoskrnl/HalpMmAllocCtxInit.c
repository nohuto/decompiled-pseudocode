/*
 * XREFs of HalpMmAllocCtxInit @ 0x1403A37EC
 * Callers:
 *     HalpMmInitSystem @ 0x140A90A90 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C63EB0 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C63EA8 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
