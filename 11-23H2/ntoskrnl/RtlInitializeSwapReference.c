/*
 * XREFs of RtlInitializeSwapReference @ 0x14080E8D0
 * Callers:
 *     CmFcManagerInitialize @ 0x140B385A8 (CmFcManagerInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSwapReference(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
