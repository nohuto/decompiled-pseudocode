/*
 * XREFs of ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006C880
 * Callers:
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006C774 (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800031F4 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18000324C (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     CemRcTableGetFirst @ 0x180016F78 (CemRcTableGetFirst.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     CemRcTableGetNext @ 0x18003F6C0 (CemRcTableGetNext.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x18006CAC8 (-ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     CemRcTableBeginRundown @ 0x180097438 (CemRcTableBeginRundown.c)
 *     CemRcTableWaitForEmpty @ 0x180097488 (CemRcTableWaitForEmpty.c)
 */

void __fastcall ArManagerRundown(struct _ACTIVITY_RESTARTER *a1)
{
  struct _AR_ACTIVITY_HOST *i; // rax
  struct _AR_ACTIVITY_HOST *v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800BDED1,
      0LL,
      0LL,
      2u,
      &v4);
  ArManagerAcquireLockExclusive(a1);
  *((_DWORD *)a1 + 18) |= 0x10u;
  ArManagerReleaseLockExclusive(a1);
  TpWaitForWork(*((_QWORD *)a1 + 8), 0LL);
  for ( i = (struct _AR_ACTIVITY_HOST *)CemRcTableGetFirst((__int64)a1);
        ;
        i = (struct _AR_ACTIVITY_HOST *)CemRcTableGetNext(v3) )
  {
    v3 = i;
    if ( !i )
      break;
    ArHostRundownActivities(i);
  }
  CemRcTableBeginRundown(a1);
  CemRcTableWaitForEmpty(a1);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800BDE7D,
      0LL,
      0LL,
      2u,
      &v4);
}
