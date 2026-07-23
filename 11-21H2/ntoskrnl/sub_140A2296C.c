/*
 * XREFs of sub_140A2296C @ 0x140A2296C
 * Callers:
 *     sub_14094C428 @ 0x14094C428 (sub_14094C428.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140A22A30 @ 0x140A22A30 (sub_140A22A30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A2296C(PERESOURCE *P)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  struct _ERESOURCE *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(P[30], 1u);
  do
  {
    if ( P[1] == (PERESOURCE)(P + 1) )
      break;
    v4 = P[2];
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) == v4 )
    {
      v6 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v6 == v4 )
        continue;
    }
    __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v2 = sub_140A22A30(v4);
  }
  while ( v2 >= 0 );
  ExReleaseResourceLite(P[30]);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v2 >= 0 )
  {
    v7 = P[30];
    ExDeleteResourceLite(v7);
    ExFreePoolWithTag(v7, 0);
    ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v2;
}
