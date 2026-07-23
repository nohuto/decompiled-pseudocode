/*
 * XREFs of sub_1404179B0 @ 0x1404179B0
 * Callers:
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_1404179B0(ULONG_PTR BugCheckParameter1, _BYTE *a2, _QWORD *a3, _QWORD *a4)
{
  KSPIN_LOCK *v4; // r12
  signed __int64 BugCheckParameter4; // rdi
  KIRQL v10; // al
  _QWORD *v11; // rbx

  v4 = (KSPIN_LOCK *)(BugCheckParameter1 + 184);
  BugCheckParameter4 = -1LL;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 184));
  v11 = *(_QWORD **)(BugCheckParameter1 + 176);
  if ( v11 )
  {
    BugCheckParameter4 = v11[2];
    v11[2] = BugCheckParameter4 + 1;
  }
  KeReleaseSpinLock(v4, v10);
  if ( v11 )
  {
    *a2 = 1;
    *a3 = *v11;
    *a4 = v11[1];
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x81uLL, BugCheckParameter4);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
    *a4 = 0LL;
  }
}
