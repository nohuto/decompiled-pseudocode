/*
 * XREFs of CcUnpinDataForThread @ 0x14090BB90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceForThreadLite @ 0x140220DF0 (ExReleaseResourceForThreadLite.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     CcUnpinData @ 0x1406FE6A0 (CcUnpinData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall CcUnpinDataForThread(PVOID Bcb, ERESOURCE_THREAD ResourceThreadId)
{
  char *v2; // rbx
  PVOID *i; // rdi

  v2 = (char *)Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v2 = (char *)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_9:
    sub_14028A370(v2, 1, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    ExReleaseResourceForThreadLite((PERESOURCE)((char *)Bcb + 72), ResourceThreadId);
    goto LABEL_9;
  }
  for ( i = (PVOID *)((char *)Bcb + 16); *i; ++i )
    CcUnpinData(*i);
  ExFreePoolWithTag(v2, 0);
}
