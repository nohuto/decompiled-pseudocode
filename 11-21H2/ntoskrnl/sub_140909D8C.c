/*
 * XREFs of sub_140909D8C @ 0x140909D8C
 * Callers:
 *     sub_1409099C0 @ 0x1409099C0 (sub_1409099C0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140909D8C()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  void *Pool2; // rsi
  bool v3; // di
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int i; // edx
  __int64 v7; // rcx
  __int64 *v8; // rax

  v0 = dword_140C4ADD0;
  v1 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)(32 * dword_140C4ADD0), 1768710472LL);
  v3 = Pool2 != 0LL;
  ExAcquireFastMutex(&stru_140C4B020);
  v4 = dword_140C4ADD4;
  v5 = dword_140C4ADD4 + v0;
  if ( dword_140C4ADD4 + v0 <= dword_140C4ADD0 || (dword_140C4AFE0 & 8) != 0 )
  {
    if ( v5 <= dword_140C4B000 )
    {
      if ( Pool2 )
      {
        for ( i = 0; i < v0; qword_140C4AFF8 = v7 )
        {
          v7 = (__int64)Pool2 + 32 * i;
          *(_DWORD *)(v7 + 16) = v4 + i;
          v8 = (__int64 *)qword_140C4AFF8;
          if ( *(__int64 **)qword_140C4AFF8 != &qword_140C4AFF0 )
            __fastfail(3u);
          *(_QWORD *)v7 = &qword_140C4AFF0;
          ++i;
          *(_QWORD *)(v7 + 8) = v8;
          *v8 = v7;
        }
        dword_140C4ADD4 = v5;
        v3 = 0;
      }
      else
      {
        v1 = -1073741670;
      }
    }
  }
  else
  {
    v1 = -1073741637;
  }
  KeReleaseGuardedMutex(&stru_140C4B020);
  if ( v3 )
    ExFreePoolWithTag(Pool2, 0);
  return v1;
}
