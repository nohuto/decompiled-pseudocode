/*
 * XREFs of sub_14069BDD0 @ 0x14069BDD0
 * Callers:
 *     sub_14069BB90 @ 0x14069BB90 (sub_14069BB90.c)
 *     sub_14069BDA0 @ 0x14069BDA0 (sub_14069BDA0.c)
 *     sub_1409C5A90 @ 0x1409C5A90 (sub_1409C5A90.c)
 *     sub_1409CD41C @ 0x1409CD41C (sub_1409CD41C.c)
 * Callees:
 *     sub_1402235F4 @ 0x1402235F4 (sub_1402235F4.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_14069BF4C @ 0x14069BF4C (sub_14069BF4C.c)
 *     sub_14069BFB8 @ 0x14069BFB8 (sub_14069BFB8.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_14069D254 @ 0x14069D254 (sub_14069D254.c)
 *     sub_1409CCB9C @ 0x1409CCB9C (sub_1409CCB9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14069BDD0(_DWORD *a1, char a2)
{
  void *v2; // rbp
  __int64 v5; // r8
  _DWORD **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  _DWORD *i; // rbx
  __int64 v10; // rcx
  void *v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  unsigned int v15; // ebx

  v2 = 0LL;
  v5 = (unsigned int)(1529154084 * *a1) >> 28;
  v6 = (_DWORD **)(qword_140D3CA78 + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v8 = &stru_140CF66C0 + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = *(_DWORD **)i )
  {
    if ( !i )
    {
      v15 = -1073741729;
      goto LABEL_26;
    }
    if ( *((_QWORD *)i + 20) == PsGetCurrentServerSilo() && *a1 == i[2] && a1[1] == i[3] )
      break;
    v6 = (_DWORD **)i;
  }
  if ( a2 )
  {
    i[8] |= 0x10u;
    sub_14069D254(i + 32);
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  v10 = *((_QWORD *)i + 3);
  if ( !v10 || (i[8] & 8) == 0 && v10 == 1 )
  {
    *v6 = *(_DWORD **)i;
    v11 = (void *)*((_QWORD *)i + 5);
    if ( v11 )
    {
      *((_QWORD *)i + 5) = 0LL;
      v2 = v11;
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    if ( v2 )
    {
      sub_14069CEC8(a1, *((_QWORD *)i + 20));
      sub_14069C9C0(v2);
    }
    v12 = (void *)*((_QWORD *)i + 20);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x734C6553u);
    v13 = (void *)*((_QWORD *)i + 8);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    sub_14069BFB8(i);
    if ( byte_140C5AEB0 )
      sub_1409CCB9C(i);
    sub_14069BF4C(i + 32);
    ExFreePoolWithTag(i, 0);
    sub_1402235F4();
    return 0LL;
  }
  v15 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegion();
  return v15;
}
