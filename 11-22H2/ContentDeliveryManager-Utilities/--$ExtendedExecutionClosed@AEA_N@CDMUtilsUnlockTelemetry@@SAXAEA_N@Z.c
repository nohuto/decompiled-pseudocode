/*
 * XREFs of ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x1800A4580
 * Callers:
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800A58A0 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001D28 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001D54 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800A6A04 (-Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionClosed<bool &>(char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r10
  char v4; // cl
  char v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  char *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = CDMUtilsUnlockLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 0x200000000000LL);
    if ( (_BYTE)v2 )
    {
      v4 = *a1;
      v10 = 0;
      v8 = &v6;
      v6 = v4;
      v9 = 1;
      LOBYTE(v2) = tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18017DCA7, 0LL, 0LL, 3u, &v7);
    }
  }
  return (char)v2;
}
