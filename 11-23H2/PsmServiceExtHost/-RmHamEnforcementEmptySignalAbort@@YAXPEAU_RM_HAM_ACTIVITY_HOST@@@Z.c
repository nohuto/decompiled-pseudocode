/*
 * XREFs of ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180081D50
 * Callers:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall RmHamEnforcementEmptySignalAbort(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  char *v2; // rax
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = (char *)a1 + 1264;
  v3 = a1 == 0LL;
  v4 = 1328LL;
  if ( !v3 )
    v4 = (__int64)v2;
  NtSetEvent(*(HANDLE *)v4, 0LL);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    v10 = 8;
    v6 = 32LL;
    if ( a1 )
      v6 = (__int64)a1 - 32;
    v11 = 0;
    v7 = *(_QWORD *)v6;
    v9 = &v7;
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1800C3182, 0LL, 0LL, 3u, &v8);
  }
}
