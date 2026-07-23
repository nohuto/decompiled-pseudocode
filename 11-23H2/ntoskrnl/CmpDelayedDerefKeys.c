/*
 * XREFs of CmpDelayedDerefKeys @ 0x1406D589C
 * Callers:
 *     CmpReportNotifyHelper @ 0x1406D5470 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x140766A50 (CmpPostNotify.c)
 *     CmpCloseKeyObject @ 0x140768280 (CmpCloseKeyObject.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8D0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDelayedDerefKeys(void **a1)
{
  void *v2; // rbx
  void **v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( *((void ***)v2 + 1) != a1 || (v3 = *(void ***)v2, *(void **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ObDereferenceObjectDeferDelete(*((PVOID *)v2 + 2));
    ExFreePoolWithTag(v2, 0);
  }
}
