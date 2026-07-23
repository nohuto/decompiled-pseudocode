/*
 * XREFs of sub_14084DC6C @ 0x14084DC6C
 * Callers:
 *     sub_1403D2178 @ 0x1403D2178 (sub_1403D2178.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1406E0A70 @ 0x1406E0A70 (sub_1406E0A70.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_14084DC6C()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C45F40, 1u);
  if ( qword_140D3CB78 )
  {
    sub_1406E0A70(qword_140D3CB78);
    qword_140D3CB78 = 0LL;
    ExFreePoolWithTag(qword_140D3CDD8, 0);
    qword_140D3CDD8 = 0LL;
    v1 = 0;
  }
  else
  {
    v1 = -1073741823;
  }
  if ( qword_140D3CC68 )
  {
    sub_1406E0A70(qword_140D3CC68);
    qword_140D3CC68 = 0LL;
    ExFreePoolWithTag(qword_140D3CDD0, 0);
    qword_140D3CDD0 = 0LL;
  }
  ExReleaseResourceLite(&stru_140C45F40);
  KeLeaveCriticalRegion();
  return v1;
}
