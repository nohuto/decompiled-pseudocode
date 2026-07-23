/*
 * XREFs of sub_1406BBAAC @ 0x1406BBAAC
 * Callers:
 *     sub_1406BB860 @ 0x1406BB860 (sub_1406BB860.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 */

__int64 __fastcall sub_1406BBAAC(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  ObDereferenceSecurityDescriptor(v1 & 0xFFFFFFFFFFFFFFF0uLL, (unsigned int)(v1 & 0xF) + 1);
  return 0LL;
}
