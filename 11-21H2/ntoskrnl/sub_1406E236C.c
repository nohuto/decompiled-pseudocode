/*
 * XREFs of sub_1406E236C @ 0x1406E236C
 * Callers:
 *     sub_1406E22CC @ 0x1406E22CC (sub_1406E22CC.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406E236C(const void **a1, __int64 a2)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  __int64 v6; // rdx
  PVOID v7; // r9
  int v8; // eax
  __int64 v9; // r8
  PVOID v11; // rdi
  PVOID PoolWithTag; // rax

  v4 = 0;
  ExAcquireFastMutex(&stru_140C49380);
  if ( dword_140C4E89C == -1 )
  {
    v4 = -1073741675;
    goto LABEL_5;
  }
  if ( dword_140C4E89C + 1 >= (unsigned int)dword_140C4E8A0 )
  {
    v11 = qword_140C4E8A8;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(dword_140C4E8A0 + 4), 0x65564D43u);
    qword_140C4E8A8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      qword_140C4E8A8 = v11;
      goto LABEL_11;
    }
    dword_140C4E8A0 += 4;
    if ( v11 )
    {
      memmove(PoolWithTag, v11, 32LL * (unsigned int)dword_140C4E89C);
      ExFreePoolWithTag(v11, 0x65564D43u);
    }
  }
  v5 = (char *)qword_140C4E8A8;
  v6 = 32LL * (unsigned int)dword_140C4E89C;
  *(_QWORD *)((char *)qword_140C4E8A8 + v6 + 24) = a2;
  *(_WORD *)&v5[v6] = *(_WORD *)a1;
  *(_WORD *)&v5[v6 + 2] = *(_WORD *)a1;
  v7 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a1, 0x65564D43u);
  *((_QWORD *)qword_140C4E8A8 + 4 * (unsigned int)dword_140C4E89C + 1) = v7;
  if ( !v7 )
  {
LABEL_11:
    v4 = -1073741670;
    goto LABEL_5;
  }
  memmove(v7, a1[1], *(unsigned __int16 *)a1);
  v8 = sub_140718B68(a1);
  v9 = 32LL * (unsigned int)dword_140C4E89C++;
  *(_DWORD *)((char *)qword_140C4E8A8 + v9 + 16) = v8;
LABEL_5:
  KeReleaseGuardedMutex(&stru_140C49380);
  return v4;
}
