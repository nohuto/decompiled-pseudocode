/*
 * XREFs of PfSnGetCompletedTrace @ 0x1407D720C
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x1407D6FC4 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(volatile void *a1, unsigned int a2, unsigned int *a3)
{
  char v5; // r12
  char *v6; // rbx
  unsigned int *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edi

  v5 = 1;
  ExAcquireFastMutex(&FastMutex);
  dword_140C6A664 = 2;
  v6 = (char *)qword_140C6A618;
  if ( qword_140C6A618 == &qword_140C6A618 )
  {
    v10 = -2147483622;
  }
  else
  {
    v7 = (unsigned int *)((char *)qword_140C6A618 + 24);
    v8 = *((_DWORD *)qword_140C6A618 + 6);
    if ( v8 > a2 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_140C6A618;
      if ( *((PVOID **)qword_140C6A618 + 1) != &qword_140C6A618 || *(PVOID *)(v9 + 8) != qword_140C6A618 )
        __fastfail(3u);
      qword_140C6A618 = *(PVOID *)qword_140C6A618;
      *(_QWORD *)(v9 + 8) = &qword_140C6A618;
      --dword_140C6A660;
      ExReleaseFastMutex(&FastMutex);
      v5 = 0;
      if ( KeGetCurrentThread()->PreviousMode )
        ProbeForWrite(a1, a2, 8u);
      memmove((void *)a1, v6 + 16, *v7);
      *a3 = *v7;
      ExFreePoolWithTag(v6, 0);
      v10 = 0;
    }
  }
  if ( v5 )
    ExReleaseFastMutex(&FastMutex);
  return v10;
}
