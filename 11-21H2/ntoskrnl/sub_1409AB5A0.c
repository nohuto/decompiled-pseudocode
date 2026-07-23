/*
 * XREFs of sub_1409AB5A0 @ 0x1409AB5A0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A5540 @ 0x1409A5540 (sub_1409A5540.c)
 *     sub_1409A9178 @ 0x1409A9178 (sub_1409A9178.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409AB5A0(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  volatile signed __int32 *v4; // rdi
  __int64 **v5; // rax
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
  v3 = (__int64 *)*a1;
  v4 = (volatile signed __int32 *)a1[2];
  if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
LABEL_9:
    __fastfail(3u);
  *v5 = v3;
  v3[1] = (__int64)v5;
  ExReleaseResourceLite(&stru_140C1C020);
  KeLeaveCriticalRegion();
  sub_1409A5540(v4);
  ExDeleteResourceLite((PERESOURCE)(a1 + 3));
  v6 = (_QWORD **)(a1 + 19);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 )
      goto LABEL_9;
    v8 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_9;
    *v6 = v8;
    v8[1] = v6;
    ExFreePoolWithTag(v7, 0x716D7454u);
  }
  sub_1409A9178();
}
