/*
 * XREFs of sub_1407757E0 @ 0x1407757E0
 * Callers:
 *     sub_140776650 @ 0x140776650 (sub_140776650.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140775854 @ 0x140775854 (sub_140775854.c)
 */

void __fastcall sub_1407757E0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 **v5; // rdx

  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  v4 = *a2;
  if ( *a2 )
  {
    if ( *(__int64 **)(v4 + 8) != a2 || (v5 = (__int64 **)a2[1], *v5 != a2) )
      __fastfail(3u);
    *v5 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*(_DWORD *)(a1 + 224);
    sub_140775854(a2);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
}
