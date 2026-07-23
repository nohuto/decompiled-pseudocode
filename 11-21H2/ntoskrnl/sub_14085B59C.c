/*
 * XREFs of sub_14085B59C @ 0x14085B59C
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14085B59C(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rax
  _QWORD *PoolWithTag; // rax
  void *v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 v13; // rcx
  __int64 **v14; // rdx

  v3 = 0;
  if ( a3 )
    return (unsigned int)-1073741727;
  if ( !a1 || a2 < 0x18 )
    return (unsigned int)-1073741820;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C15BE0, 1u);
  v6 = (__int64 *)(qword_140C15BD0 - 24);
  if ( &qword_140C15BD0 != (__int64 *)qword_140C15BD0 )
  {
    while ( *(_DWORD *)v6 != *(_DWORD *)a1 )
    {
      v7 = (__int64 *)v6[3];
      v6 = v7 - 3;
      if ( &qword_140C15BD0 == v7 )
        goto LABEL_7;
    }
    if ( *(_BYTE *)(a1 + 4) )
    {
      v3 = 0x40000000;
      goto LABEL_11;
    }
    if ( v6[2] == *(_QWORD *)(a1 + 16) )
    {
      v13 = v6[3];
      if ( *(__int64 **)(v13 + 8) == v6 + 3 )
      {
        v14 = (__int64 **)v6[4];
        if ( *v14 == v6 + 3 )
        {
          *v14 = (__int64 *)v13;
          *(_QWORD *)(v13 + 8) = v14;
          ObfDereferenceObject((PVOID)v6[2]);
          ExFreePoolWithTag(v6, 0x54465241u);
          goto LABEL_11;
        }
      }
LABEL_21:
      __fastfail(3u);
    }
LABEL_22:
    v3 = -1073741811;
    goto LABEL_11;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 4) )
    goto LABEL_22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x54465241u);
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = *(_DWORD *)a1;
    PoolWithTag[1] = *(_QWORD *)(a1 + 8);
    v9 = *(void **)(a1 + 16);
    v10 = PoolWithTag + 3;
    PoolWithTag[4] = PoolWithTag + 3;
    PoolWithTag[3] = PoolWithTag + 3;
    PoolWithTag[2] = v9;
    ObfReferenceObject(v9);
    v11 = (_QWORD *)qword_140C15BD8;
    if ( *(__int64 **)qword_140C15BD8 != &qword_140C15BD0 )
      goto LABEL_21;
    *v10 = &qword_140C15BD0;
    v10[1] = v11;
    *v11 = v10;
    qword_140C15BD8 = (__int64)v10;
  }
  else
  {
    v3 = -1073741670;
  }
LABEL_11:
  ExReleaseResourceLite(&stru_140C15BE0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v3;
}
