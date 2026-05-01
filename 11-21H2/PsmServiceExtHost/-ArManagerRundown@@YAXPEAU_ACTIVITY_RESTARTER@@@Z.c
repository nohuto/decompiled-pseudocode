/*
 * XREFs of ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006D440
 * Callers:
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006D334 (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     CemRcTableGetFirst @ 0x180005910 (CemRcTableGetFirst.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcTableGetNext @ 0x180043224 (CemRcTableGetNext.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x18006D62C (-ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     CemRcTableBeginRundown @ 0x18009CBF8 (CemRcTableBeginRundown.c)
 *     CemRcTableWaitForEmpty @ 0x18009CC48 (CemRcTableWaitForEmpty.c)
 */

void __fastcall ArManagerRundown(struct _ACTIVITY_RESTARTER *a1)
{
  struct _AR_ACTIVITY_HOST *i; // rax
  struct _AR_ACTIVITY_HOST *v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BD049,
      0LL,
      0LL,
      2u,
      &v4);
  RtlUnsubscribeWnfNotificationWaitForCompletion(*((_QWORD *)a1 + 10));
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
  if ( (unsigned int)dword_1800DC218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DC218,
        (unsigned __int8 *)dword_1800BCFCD,
        0LL,
        0LL,
        2u,
        &v4);
  }
}
