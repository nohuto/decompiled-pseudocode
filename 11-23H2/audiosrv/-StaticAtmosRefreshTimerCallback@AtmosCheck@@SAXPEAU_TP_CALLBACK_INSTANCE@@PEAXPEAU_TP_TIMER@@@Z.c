/*
 * XREFs of ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18015D910
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180034C90 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::StaticAtmosRefreshTimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 Context,
        __int64 Timer,
        __int64 a4)
{
  _QWORD *v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  v4 = (_QWORD *)Context;
  if ( (unsigned int)dword_1801CD2B8 > 5 )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801CD2B8,
      (unsigned __int8 *)dword_1801990B0,
      0LL,
      0LL,
      2u,
      &v5);
  v4[29] = 0LL;
  LOBYTE(Context) = 1;
  *((_DWORD *)v4 + 46) = 5;
  *((_BYTE *)v4 + 216) = 1;
  AtmosCheck::PerformLicenseCheck((AtmosCheck *)v4, Context, Timer, a4);
}
