/*
 * XREFs of sub_1407F8B10 @ 0x1407F8B10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407F8B10(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&stru_140C546A8);
  if ( dword_140C546E4 == 2 )
  {
    KeReleaseGuardedMutex(&stru_140C546A8);
  }
  else
  {
    dword_140C546E4 = 1;
    while ( qword_140C54698 != &qword_140C54698 )
    {
      v2 = qword_140C546A0;
      if ( *(PVOID **)qword_140C546A0 != &qword_140C54698
        || (v3 = (PVOID *)*((_QWORD *)qword_140C546A0 + 1), *v3 != qword_140C546A0) )
      {
        __fastfail(3u);
      }
      qword_140C546A0 = (PVOID)*((_QWORD *)qword_140C546A0 + 1);
      *v3 = &qword_140C54698;
      ExFreePoolWithTag(v2, 0);
      --dword_140C546E0;
    }
    KeReleaseGuardedMutex(&stru_140C546A8);
    if ( qword_140C546E8 )
      KeSetEvent(qword_140C546E8, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
