/*
 * XREFs of sub_1406E2814 @ 0x1406E2814
 * Callers:
 *     sub_1407920F0 @ 0x1407920F0 (sub_1407920F0.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

struct _EX_RUNDOWN_REF *__fastcall sub_1406E2814(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  signed __int64 *v7; // rdi
  struct _EX_RUNDOWN_REF **v8; // r14
  __int64 v9; // rbx
  struct _EX_RUNDOWN_REF *Count; // rbx
  __int64 HostSilo; // rax

  v2 = a1;
  v4 = 0LL;
  if ( a1 - 4 <= 1 )
  {
    HostSilo = PsGetHostSilo();
    v5 = sub_140204738(HostSilo);
  }
  else
  {
    v5 = sub_140347DB0();
  }
  v6 = v5[114];
  if ( !v6 )
    return 0LL;
  v7 = (signed __int64 *)(v6 + 8 * (3 * v2 + 4));
  v8 = (struct _EX_RUNDOWN_REF **)(v6 + 8 * (3 * v2 + 5));
  v9 = sub_140347C10((__int64)v7, 0LL);
  if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
    sub_14029F350(v7, 0, v9, (__int64)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  if ( !a2 || (Count = (struct _EX_RUNDOWN_REF *)a2[4].Count) == 0LL )
    Count = *v8;
  while ( Count != (struct _EX_RUNDOWN_REF *)v8 )
  {
    v4 = Count - 4;
    if ( sub_140347810(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  if ( a2 )
    sub_1402AD030(a2 + 1);
  return v4;
}
