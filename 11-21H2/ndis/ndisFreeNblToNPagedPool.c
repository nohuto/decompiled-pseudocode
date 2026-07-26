/*
 * XREFs of ndisFreeNblToNPagedPool @ 0x1C0008180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeNblToNPagedPool(__int64 a1)
{
  void *v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // rcx
  _QWORD *v7; // r8

  v2 = *(void **)(a1 + 368);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (_QWORD *)(a1 - 32);
  v4 = *(_QWORD *)(a1 - 32);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 8));
  v6 = v3[1];
  if ( *(_QWORD **)(v6 + 8) != v3 + 1 || (v7 = (_QWORD *)v3[2], (_QWORD *)*v7 != v3 + 1) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 8), v5);
  ExFreePoolWithTag(v3, 0);
}
