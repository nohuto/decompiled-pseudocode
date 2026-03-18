/*
 * XREFs of ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00BEF4C
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A390 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0056EDC (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0064DF0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     qsort @ 0x1C00CDC30 (qsort.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C012CBB4 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 */

char __fastcall GroupedProcessForegroundBoost::Update(
        __int64 **this,
        struct tagWND *a2,
        struct _EPROCESS **a3,
        struct _EPROCESS **a4)
{
  unsigned int v4; // ebx
  char v7; // di
  size_t v8; // r12
  __int64 v9; // r9
  NTSTATUS v10; // eax
  struct _EPROCESS **v12; // rbp
  PVOID *v13; // rsi
  __int64 v14; // r15
  ULONG v15; // eax
  __int64 v16; // rcx
  _BYTE v17[16]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+30h] [rbp-68h]
  char v19; // [rsp+40h] [rbp-58h]
  char v20; // [rsp+48h] [rbp-50h]

  v4 = (unsigned int)a2;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v17,
    this[18]);
  v7 = 1;
  if ( v4 )
  {
    v8 = v4;
    qsort(a3, v4, 8uLL, (int (__cdecl *)(const void *, const void *))pEProcessCompareAscending);
    if ( v4 > 1 )
    {
      v12 = a3 + 1;
      v13 = (PVOID *)a3;
      v14 = v4 - 1;
      do
      {
        if ( *v12 == *v13 )
        {
          ObfDereferenceObject(*v13);
          *v13 = 0LL;
          --v4;
        }
        ++v13;
        ++v12;
        --v14;
      }
      while ( v14 );
    }
    qsort(a3, v8, 8uLL, (int (__cdecl *)(const void *, const void *))pEProcessCompareDescending);
    v10 = GroupedFGBoostProp::SetGroupedFGBoost((struct tagWND *)this, v4, a3, v9);
  }
  else
  {
    v10 = GroupedFGBoostProp::ClearGroupedFGBoost((struct tagWND *)this);
  }
  if ( v10 < 0 )
  {
    v15 = RtlNtStatusToDosError(v10);
    UserSetLastError(v15);
    v7 = 0;
  }
  if ( v20 )
  {
    if ( v19 )
    {
      v16 = v18;
      if ( v18 )
      {
        *(_QWORD *)(v18 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v16, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  return v7;
}
