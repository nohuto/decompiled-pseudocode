/*
 * XREFs of KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004E50
 * Callers:
 *     KeyboardClassCreate @ 0x1C0001D90 (KeyboardClassCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003010 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1C00077C8 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00077FC (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void KbdClassTraceLoggingDeniedCreateForReadWithSFAC()
{
  int v0; // ecx
  int v1; // r8d
  int v2; // r9d
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C000A010 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn() )
    {
      v7 = 0;
      v5 = &v3;
      v3 = v0;
      v6 = 4;
      tlgWriteTransfer_EtwWriteTransfer(v0, (int)&dword_1C0008AF9, v1, v2, 3u, &v4);
    }
  }
}
