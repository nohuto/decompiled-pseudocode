/*
 * XREFs of sub_14069FED8 @ 0x14069FED8
 * Callers:
 *     sub_14069FD64 @ 0x14069FD64 (sub_14069FD64.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 */

void __fastcall sub_14069FED8(_QWORD *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf

  ExAcquireFastMutex(&dword_140C48F60);
  v2 = (_QWORD *)qword_140C48F18;
  if ( *(PVOID **)qword_140C48F18 != &qword_140C48F10 )
    __fastfail(3u);
  v3 = byte_140C4E8C0 == 0;
  *a1 = &qword_140C48F10;
  a1[1] = v2;
  *v2 = a1;
  qword_140C48F18 = (__int64)a1;
  if ( v3 )
  {
    byte_140C4E8C0 = 1;
    sub_1402E2D20((unsigned __int64)&qword_140C48FC0, -300000000LL, 0, 0, (__int64)&dword_140C49000);
  }
  KeReleaseGuardedMutex(&dword_140C48F60);
}
