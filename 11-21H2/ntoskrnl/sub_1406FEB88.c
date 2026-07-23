/*
 * XREFs of sub_1406FEB88 @ 0x1406FEB88
 * Callers:
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140345F84 @ 0x140345F84 (sub_140345F84.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_1406FEB88(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  bool v4; // bl

  ExAcquireFastMutex((PFAST_MUTEX)&stru_140C49340);
  v2 = (_QWORD *)(BugCheckParameter2 + 224);
  if ( (_QWORD *)*v2 != v2 )
    KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
  v3 = qword_140C49320;
  if ( *(__int64 **)(qword_140C49320 + 8) != &qword_140C49320 )
    __fastfail(3u);
  *v2 = qword_140C49320;
  *(_QWORD *)(BugCheckParameter2 + 232) = &qword_140C49320;
  *(_QWORD *)(v3 + 8) = v2;
  qword_140C49320 = BugCheckParameter2 + 224;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
  ++qword_140D3D2C8;
  v4 = ++dword_140C4E8B0 > (unsigned int)dword_140C0C618;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140C49340);
  if ( v4 )
    sub_140345F84();
}
