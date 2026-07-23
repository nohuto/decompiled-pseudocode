/*
 * XREFs of sub_140255D5C @ 0x140255D5C
 * Callers:
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_1408556F0 @ 0x1408556F0 (sub_1408556F0.c)
 *     sub_14099A030 @ 0x14099A030 (sub_14099A030.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140751880 @ 0x140751880 (sub_140751880.c)
 */

__int64 __fastcall sub_140255D5C(__int64 a1, __int64 a2, signed int a3, void *a4, unsigned int a5, unsigned int *a6)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // edx

  ExAcquireFastMutex(&stru_140C237C0);
  if ( (unsigned int)a3 > 1 )
    a3 = dword_140C232CC;
  v9 = sub_140751880(a1, 0xFFFFFFFFLL);
  v10 = 0;
  if ( v9 && (v11 = *(_QWORD *)(v9 + 8LL * a3 + 64)) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 4);
    *a6 = v12;
    if ( a5 < v12 )
      v10 = -1073741306;
    else
      memmove(a4, (const void *)(*(_QWORD *)(v9 + 8LL * a3 + 64) + 12LL), v12);
  }
  else
  {
    v10 = -1073741811;
  }
  KeReleaseGuardedMutex(&stru_140C237C0);
  return v10;
}
