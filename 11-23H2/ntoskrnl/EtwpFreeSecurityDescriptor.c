/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1406C048C
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpAccessCheckFromState @ 0x1406C0384 (EtwpAccessCheckFromState.c)
 *     EtwpAllocGuidEntry @ 0x140781A1C (EtwpAllocGuidEntry.c)
 *     EtwpCheckGuidAccess @ 0x140781B64 (EtwpCheckGuidAccess.c)
 *     EtwpUpdateTrace @ 0x1407F7F7C (EtwpUpdateTrace.c)
 *     EtwpFixBootLoggers @ 0x140B6801C (EtwpFixBootLoggers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSecurityDescriptor(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 != (void *)EtwpDefaultTraceSecurityDescriptor && v2 != (void *)WmipDefaultAccessSd )
      ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
