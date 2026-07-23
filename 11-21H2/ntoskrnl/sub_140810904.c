/*
 * XREFs of sub_140810904 @ 0x140810904
 * Callers:
 *     sub_1403A6700 @ 0x1403A6700 (sub_1403A6700.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void __fastcall sub_140810904(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  void *v5; // rcx

  ExAcquireFastMutex(&stru_140C469C0);
  v2 = (_QWORD *)(a1 + 472);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    v5 = (void *)v3[11];
    v3[1] = v3;
    *v3 = v3;
    if ( v5 && (!*((_BYTE *)v3 + 58) || (*(_DWORD *)(a1 + 704) & 0x4000) == 0) )
    {
      ObfDereferenceObject(v5);
      v3[11] = 0LL;
    }
  }
  KeReleaseGuardedMutex(&stru_140C469C0);
}
