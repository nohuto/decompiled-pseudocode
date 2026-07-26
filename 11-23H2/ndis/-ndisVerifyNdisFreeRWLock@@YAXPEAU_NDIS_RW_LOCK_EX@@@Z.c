/*
 * XREFs of ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C00AC490
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRWLock @ 0x1C00229E0 (NdisFreeRWLock.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisVerifyNdisFreeRWLock(KSPIN_LOCK *BugCheckParameter3)
{
  int v2; // ecx

  if ( !KeTestSpinLock(BugCheckParameter3 + 2) )
    goto LABEL_6;
  v2 = 0;
  if ( ndisMaxNumberOfProcessors )
  {
    while ( !*(_QWORD *)((unsigned int)(v2 << 12) + BugCheckParameter3[4]) )
    {
      if ( ++v2 >= ndisMaxNumberOfProcessors )
        goto LABEL_5;
    }
LABEL_6:
    ndisBugCheckEx(0x30uLL, 2uLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
LABEL_5:
  NdisFreeRWLock((PNDIS_RW_LOCK_EX)BugCheckParameter3);
}
