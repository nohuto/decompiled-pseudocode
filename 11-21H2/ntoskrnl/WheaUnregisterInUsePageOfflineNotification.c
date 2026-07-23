/*
 * XREFs of WheaUnregisterInUsePageOfflineNotification @ 0x140A08F00
 * Callers:
 *     HvlUnregisterWheaErrorNotification @ 0x140931030 (HvlUnregisterWheaErrorNotification.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall WheaUnregisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback)
{
  char v1; // bl
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY *v7; // rcx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY v8; // rax
  PVOID *v9; // rdx

  v1 = 0;
  if ( byte_140CE1AD0 != 1 )
    return -1073741823;
  v4 = sub_140347C10((__int64)&qword_140D00C28, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140D00C28, 0LL);
  v6 = v4;
  if ( v5 )
    sub_14029F120(&qword_140D00C28, v4, (__int64)&qword_140D00C28);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)qword_140D00C30;
  if ( qword_140D00C30 != &qword_140D00C30 )
  {
    while ( 1 )
    {
      v8 = *v7;
      if ( Callback == v7[2] )
        break;
      v7 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)*v7;
      if ( (char *)v8 == (char *)&qword_140D00C30 )
        goto LABEL_10;
    }
    if ( *((PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)v8 + 1) != v7 || (v9 = (PVOID *)v7[1], *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *((_QWORD *)v8 + 1) = v9;
    ExFreePoolWithTag(v7, 0x61656857u);
    v1 = 1;
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D00C28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D00C28);
  sub_1402AFC00((ULONG_PTR)&qword_140D00C28);
  return v1 == 0 ? 0xC0000008 : 0;
}
