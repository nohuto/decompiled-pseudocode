/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x140980190
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140C6A664 == 2 )
  {
    ExReleaseFastMutex(&FastMutex);
  }
  else
  {
    dword_140C6A664 = 1;
    while ( qword_140C6A618 != &qword_140C6A618 )
    {
      v2 = qword_140C6A620;
      if ( *(PVOID **)qword_140C6A620 != &qword_140C6A618
        || (v3 = (PVOID *)*((_QWORD *)qword_140C6A620 + 1), *v3 != qword_140C6A620) )
      {
        __fastfail(3u);
      }
      qword_140C6A620 = (PVOID)*((_QWORD *)qword_140C6A620 + 1);
      *v3 = &qword_140C6A618;
      ExFreePoolWithTag(v2, 0);
      --dword_140C6A660;
    }
    ExReleaseFastMutex(&FastMutex);
    if ( qword_140C6A668 )
      KeSetEvent(qword_140C6A668, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
