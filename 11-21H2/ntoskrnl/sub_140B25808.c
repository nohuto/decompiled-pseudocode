/*
 * XREFs of sub_140B25808 @ 0x140B25808
 * Callers:
 *     sub_140B256D0 @ 0x140B256D0 (sub_140B256D0.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140435E00 (memset.c)
 */

struct _EX_RUNDOWN_REF *__fastcall sub_140B25808(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 v3; // rsi
  struct _EX_RUNDOWN_REF *result; // rax

  memset(a1, 0, 0x230uLL);
  v2 = a1 + 1;
  v3 = 16LL;
  do
  {
    ExInitializeRundownProtection(v2);
    ExWaitForRundownProtectionRelease(v2);
    v2[1].Count = 0LL;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  a1[65].Count = 0LL;
  result = a1 + 65;
  a1[66].Count = 0LL;
  a1[67].Count = 0LL;
  a1[68].Count = 0LL;
  a1[64].Count = 0LL;
  a1[66].Count = (ULONG_PTR)&a1[65];
  a1[65].Count = (ULONG_PTR)&a1[65];
  return result;
}
