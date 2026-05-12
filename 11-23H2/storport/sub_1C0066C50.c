/*
 * XREFs of sub_1C0066C50 @ 0x1C0066C50
 * Callers:
 *     sub_1C0019DB4 @ 0x1C0019DB4 (sub_1C0019DB4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0066C50(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 6024) && *(_DWORD *)(a1 + 904) )
  {
    do
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6024) + 24LL * v1++));
    while ( v1 < *(_DWORD *)(a1 + 904) );
  }
}
