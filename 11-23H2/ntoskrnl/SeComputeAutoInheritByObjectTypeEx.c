/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x1402B3800
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x1403565D0 (SeComputeAutoInheritByObjectType.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x1407BC9C0 (ObpAssignSecurity.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     RtlFindAceByType @ 0x1402AD480 (RtlFindAceByType.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *Index)
{
  _DWORD *v5; // rdi
  char v6; // r13
  int v11; // esi
  int v12; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ebx
  _BYTE *v20; // rcx
  __int16 v21; // ax
  ACL *v22; // rcx
  _DWORD *AceByType; // rax
  __int64 v24; // rax
  __int16 v25; // ax
  ACL *v26; // rcx
  __int64 v27; // rax
  _BYTE *v28; // rax

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
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v14 = 0;
  if ( SepMandatoryObjectTypePolicyCount )
  {
    v15 = SepMandatoryObjectTypePolicy;
    while ( a1 != *v15 )
    {
      ++v14;
      v15 += 3;
      if ( v14 >= SepMandatoryObjectTypePolicyCount )
      {
        v18 = 0;
        goto LABEL_11;
      }
    }
    v16 = 3LL * v14;
    v17 = SepMandatoryObjectTypePolicy[2 * v16 + 2];
    if ( (v17 & 1) != 0 )
    {
      v11 = SepMandatoryObjectTypePolicy[2 * v16 + 4];
      v12 = SepMandatoryObjectTypePolicy[2 * v16 + 3];
    }
    if ( (v17 & 2) != 0 )
    {
      v18 = SepMandatoryObjectTypePolicy[2 * v16 + 5];
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegion();
  if ( v12 && a2 )
  {
    v21 = *(_WORD *)(a2 + 2);
    if ( (v21 & 0x10) != 0 )
    {
      if ( v21 >= 0 )
      {
        v22 = *(ACL **)(a2 + 24);
      }
      else
      {
        v24 = *(unsigned int *)(a2 + 12);
        v22 = (_DWORD)v24 ? (ACL *)(v24 + a2) : 0LL;
      }
    }
    else
    {
      v22 = 0LL;
    }
    AceByType = RtlFindAceByType(v22, 0x11u, 0LL);
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
        v25 = *(_WORD *)(a2 + 2);
        if ( (v25 & 0x10) != 0 )
        {
          if ( v25 >= 0 )
          {
            v26 = *(ACL **)(a2 + 24);
          }
          else
          {
            v27 = *(unsigned int *)(a2 + 12);
            v26 = (_DWORD)v27 ? (ACL *)(v27 + a2) : 0LL;
          }
        }
        else
        {
          v26 = 0LL;
        }
        v28 = RtlFindAceByType(v26, 0x11u, (PULONG)&Index);
        if ( v28 )
        {
          if ( (v28[1] & 8) == 0 )
            break;
        }
        LODWORD(Index) = (_DWORD)Index + 1;
        if ( !v28 )
          goto LABEL_55;
      }
      *((_DWORD *)v28 + 1) &= v18;
    }
    else
    {
LABEL_55:
      if ( v5 )
      {
        v5[1] = v18;
        v11 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    v20 = (_BYTE *)(a2 + 2);
    if ( (!a2 || (*v20 & 4) == 0) && _bittest16((const signed __int16 *)(a3 + 2), 0xAu) )
      v11 |= 1u;
    if ( (!a2 || (*v20 & 0x10) == 0) && (*(_WORD *)(a3 + 2) & 0x800) != 0 )
      v11 |= 2u;
  }
  *a4 = v11;
  return 0LL;
}
