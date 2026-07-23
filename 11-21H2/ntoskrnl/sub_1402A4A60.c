/*
 * XREFs of sub_1402A4A60 @ 0x1402A4A60
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x1402469E0 (SeComputeAutoInheritByObjectType.c)
 *     sub_140669694 @ 0x140669694 (sub_140669694.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_1402A4A60(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *Index)
{
  _DWORD *v5; // rdi
  char v6; // r12
  int v11; // esi
  int v12; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ebx
  __int16 v20; // ax
  ACL *v21; // rcx
  _DWORD *AceByType; // rax
  __int64 v23; // rax
  __int16 v24; // ax
  ACL *v25; // rcx
  __int64 v26; // rax
  _BYTE *v27; // rax

  v5 = Index;
  v6 = 0;
  v11 = 0;
  v12 = 0;
  if ( Index )
  {
    if ( *Index != 8 )
      return 3221225485LL;
    Index[1] = -1;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C1B568, 0LL);
  v14 = 0;
  if ( dword_140C5AFD4 )
  {
    v15 = dword_140C1B580;
    while ( a1 != *v15 )
    {
      ++v14;
      v15 += 3;
      if ( v14 >= dword_140C5AFD4 )
      {
        v18 = 0;
        goto LABEL_11;
      }
    }
    v16 = 3LL * v14;
    v17 = dword_140C1B580[2 * v16 + 2];
    if ( (v17 & 1) != 0 )
    {
      v11 = dword_140C1B580[2 * v16 + 4];
      v12 = dword_140C1B580[2 * v16 + 3];
    }
    if ( (v17 & 2) != 0 )
    {
      v18 = dword_140C1B580[2 * v16 + 5];
      v6 = 1;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v18 = 0;
  }
LABEL_11:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C1B568, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_140C1B568);
  sub_1402AFC00((ULONG_PTR)&qword_140C1B568);
  KeLeaveCriticalRegion();
  if ( v12 && a2 )
  {
    v20 = *(_WORD *)(a2 + 2);
    if ( (v20 & 0x10) != 0 )
    {
      if ( v20 >= 0 )
      {
        v21 = *(ACL **)(a2 + 24);
      }
      else
      {
        v23 = *(unsigned int *)(a2 + 12);
        v21 = (_DWORD)v23 ? (ACL *)(v23 + a2) : 0LL;
      }
    }
    else
    {
      v21 = 0LL;
    }
    AceByType = RtlFindAceByType(v21, 0x11u, 0LL);
    if ( AceByType )
    {
      AceByType[1] |= v12;
      v11 = 0;
    }
  }
  if ( v6 )
  {
    if ( a2 )
    {
      LODWORD(Index) = 0;
      while ( 1 )
      {
        v24 = *(_WORD *)(a2 + 2);
        if ( (v24 & 0x10) != 0 )
        {
          if ( v24 >= 0 )
          {
            v25 = *(ACL **)(a2 + 24);
          }
          else
          {
            v26 = *(unsigned int *)(a2 + 12);
            v25 = (_DWORD)v26 ? (ACL *)(v26 + a2) : 0LL;
          }
        }
        else
        {
          v25 = 0LL;
        }
        v27 = RtlFindAceByType(v25, 0x11u, (PULONG)&Index);
        if ( v27 )
        {
          if ( (v27[1] & 8) == 0 )
            break;
        }
        LODWORD(Index) = (_DWORD)Index + 1;
        if ( !v27 )
          goto LABEL_54;
      }
      *((_DWORD *)v27 + 1) &= v18;
    }
    else
    {
LABEL_54:
      if ( v5 )
      {
        v5[1] = v18;
        v11 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    if ( !a2 || (*(_BYTE *)(a2 + 2) & 4) == 0 )
    {
      if ( _bittest16((const signed __int16 *)(a3 + 2), 0xAu) )
        v11 |= 1u;
      if ( !a2 )
        goto LABEL_28;
    }
    if ( (*(_BYTE *)(a2 + 2) & 0x10) == 0 )
    {
LABEL_28:
      if ( (*(_WORD *)(a3 + 2) & 0x800) != 0 )
        v11 |= 2u;
    }
  }
  *a4 = v11;
  return 0LL;
}
