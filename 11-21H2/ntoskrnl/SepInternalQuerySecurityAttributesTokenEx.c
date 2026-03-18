/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x140300534
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x14024C270 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeQuerySecurityAttributesToken @ 0x140671A80 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x1406A09D0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140204B30 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402058C0 (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403005E0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x14030097C (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140389ED0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1405F56A0 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepInternalFillNoAttribs @ 0x1405F5750 (SepInternalFillNoAttribs.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  _DWORD *v8; // rdi
  unsigned int SecurityAttributesToken; // ebx
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // rsi
  unsigned __int64 v17; // rbp
  _QWORD *SecurityAttributesList; // rax
  unsigned __int8 CurrentIrql; // al
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
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
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
