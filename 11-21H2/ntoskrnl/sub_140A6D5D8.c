/*
 * XREFs of sub_140A6D5D8 @ 0x140A6D5D8
 * Callers:
 *     sub_140A6D528 @ 0x140A6D528 (sub_140A6D528.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A6D5D8(__int64 a1)
{
  size_t v1; // rsi
  unsigned int v3; // edi
  __int64 Pool2; // rbx
  __int64 *v5; // rax

  v1 = *(unsigned int *)(a1 + 60);
  if ( (int)v1 + 32 < (unsigned int)v1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v3 = 0;
    Pool2 = ExAllocatePool2(66LL, (unsigned int)(v1 + 32), 1634035799LL);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
      *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
      memmove((void *)(Pool2 + 32), (const void *)(a1 + 40), v1);
      ExAcquireFastMutex((PFAST_MUTEX)&stru_140C0E9A8.AttachedDevice);
      v5 = *(__int64 **)&stru_140C0E9A8.Queue.Wcb.NumberOfChannels;
      if ( **(struct _DEVICE_OBJECT ***)&stru_140C0E9A8.Queue.Wcb.NumberOfChannels != (struct _DEVICE_OBJECT *)&stru_140C0E9A8.Queue.Wcb.DmaWaitEntry.Blink )
        __fastfail(3u);
      *(_QWORD *)Pool2 = &stru_140C0E9A8.Queue.ListEntry.Blink;
      *(_QWORD *)(Pool2 + 8) = v5;
      *v5 = Pool2;
      *(_QWORD *)&stru_140C0E9A8.Queue.Wcb.NumberOfChannels = Pool2;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140C0E9A8.AttachedDevice);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
