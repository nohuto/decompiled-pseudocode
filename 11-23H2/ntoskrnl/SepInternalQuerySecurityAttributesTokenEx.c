/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x14022C928
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x14035F0F0 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeQuerySecurityAttributesToken @ 0x1406B7A00 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x1407264E0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140730AD0 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140225370 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140226558 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x14022CAD0 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14022CB70 (AuthzBasepQuerySecurityAttributesToken.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7C00 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8D40 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExAcquireSpinLockShared @ 0x140314620 (ExAcquireSpinLockShared.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x14035BDF4 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepInternalFillNoAttribs @ 0x14036516C (SepInternalFillNoAttribs.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14036AF8C (AuthzBasepAllocateSecurityAttributesList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  void *v8; // rdi
  unsigned int SecurityAttributesToken; // ebx
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // rsi
  unsigned __int64 v17; // rbp
  _QWORD *SecurityAttributesList; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0LL;
  v24 = 0LL;
  v25 = 0;
  if ( (*(_DWORD *)(a1 + 200) & 0x20000) == 0
    && (a5 || (unsigned __int8)SepDetermineGlobalTableCheckNeededForQuery(a1, a3, a4)) )
  {
    if ( (int)SepGetProcUniqueLuidAndIndexFromTokenEx(0LL, a1, &v25, &v24) >= 0 )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v25);
      v16 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v17 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
        if ( *((_QWORD *)v16 + 2) )
        {
          SecurityAttributesList = (_QWORD *)AuthzBasepAllocateSecurityAttributesList();
          v8 = SecurityAttributesList;
          SecurityAttributesToken = SecurityAttributesList
                                  ? AuthzBasepDuplicateSecurityAttributes(
                                      *((_QWORD *)v16 + 2),
                                      SecurityAttributesList,
                                      0)
                                  : -1073741801;
        }
        else
        {
          SecurityAttributesToken = -1073741275;
        }
        ExReleaseSpinLockSharedFromDpcLevel(v16);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v23 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v17);
        if ( SecurityAttributesToken != -1073741275 )
        {
          if ( (SecurityAttributesToken & 0x80000000) != 0 )
          {
            if ( !v8 )
              return SecurityAttributesToken;
          }
          else
          {
            if ( !v8 )
              return SecurityAttributesToken;
            SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v8, a3, a4, a6, a7, a8);
          }
          AuthzBasepFreeSecurityAttributesList(v8);
          ExFreePoolWithTag(v8, 0);
          return SecurityAttributesToken;
        }
      }
    }
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  }
  else
  {
    return (unsigned int)AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  }
}
