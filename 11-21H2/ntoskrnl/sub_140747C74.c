/*
 * XREFs of sub_140747C74 @ 0x140747C74
 * Callers:
 *     sub_1407499A8 @ 0x1407499A8 (sub_1407499A8.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140747C74(__int128 *Source1)
{
  unsigned int v2; // ebx
  char *v3; // rdx
  __int128 v5; // xmm0
  __int64 v6; // r8
  void *Pool2; // rax
  void *v8; // rdi
  PVOID v9; // rsi

  ExAcquireFastMutex(&stru_140C468A0);
  v2 = 0;
  if ( !dword_140C468DC )
    goto LABEL_7;
  do
  {
    v3 = (char *)qword_140C468E0 + 16 * v2;
    if ( Source1 == (__int128 *)v3 )
      break;
    if ( RtlCompareMemory(Source1, v3, 0x10uLL) == 16 )
      break;
    ++v2;
  }
  while ( v2 < dword_140C468DC );
  if ( v2 == dword_140C468DC )
  {
LABEL_7:
    if ( v2 == dword_140C468D8 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 16LL * (v2 + 1), 1970499664LL);
      v8 = Pool2;
      if ( !Pool2 )
      {
        LOWORD(v2) = -1;
        goto LABEL_6;
      }
      v9 = qword_140C468E0;
      memmove(Pool2, qword_140C468E0, 16LL * (unsigned int)dword_140C468DC);
      ++dword_140C468D8;
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      qword_140C468E0 = v8;
    }
    if ( v2 != -1 )
    {
      v5 = *Source1;
      v6 = 2LL * (unsigned int)dword_140C468DC++;
      *(_OWORD *)((char *)qword_140C468E0 + 8 * v6) = v5;
    }
  }
LABEL_6:
  KeReleaseGuardedMutex(&stru_140C468A0);
  return (unsigned __int16)v2;
}
