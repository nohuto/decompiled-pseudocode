/*
 * XREFs of sub_140768F5C @ 0x140768F5C
 * Callers:
 *     sub_140768EA8 @ 0x140768EA8 (sub_140768EA8.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DE33C @ 0x1402DE33C (sub_1402DE33C.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140768F5C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  void **v4; // rdi
  char *v5; // rbx
  void **v6; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
  sub_1402DE33C(*(_QWORD *)(a1 + 32), 16, 0);
  v4 = (void **)(a1 + 608);
  while ( 1 )
  {
    v5 = (char *)*v4;
    if ( *v4 == v4 )
      break;
    if ( *((void ***)v5 + 1) != v4 || (v6 = *(void ***)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    LOBYTE(v3) = 1;
    sub_140769170(v5 + 16, v3, 0LL);
    ExFreePoolWithTag(*((PVOID *)v5 + 3), 0);
    ExFreePoolWithTag(v5, 0);
  }
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  return 0LL;
}
