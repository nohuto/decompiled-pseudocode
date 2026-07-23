/*
 * XREFs of PoDisableSleepStates @ 0x14098C600
 * Callers:
 *     sub_1403DCCD8 @ 0x1403DCCD8 (sub_1403DCCD8.c)
 *     sub_140828AC4 @ 0x140828AC4 (sub_140828AC4.c)
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoDisableSleepStates(int a1, int a2, _QWORD *a3)
{
  __int64 Pool2; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax

  Pool2 = ExAllocatePool2(256LL, 24LL, 1683189584LL);
  v7 = 0;
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 20) = a2;
    ExAcquireFastMutex(&stru_140C24000);
    v9 = (_QWORD *)qword_140C23FF8;
    if ( *(__int64 **)qword_140C23FF8 != &qword_140C23FF0 )
      __fastfail(3u);
    *v8 = &qword_140C23FF0;
    v8[1] = v9;
    *v9 = v8;
    qword_140C23FF8 = (__int64)v8;
    KeReleaseGuardedMutex(&stru_140C24000);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
