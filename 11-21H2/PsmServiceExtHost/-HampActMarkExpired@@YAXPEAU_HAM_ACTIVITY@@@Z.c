/*
 * XREFs of ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180077AB8
 * Callers:
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007753C (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180077760 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HampActMarkExpired(struct _HAM_ACTIVITY *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  *((_DWORD *)a1 + 138) |= 0x40u;
  if ( (unsigned int)dword_1800DC218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
    {
      v4 = *(_QWORD *)(v3 + 40);
      v9 = 0;
      v5 = v4;
      v7 = &v5;
      v8 = v1;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1800C0488, 0LL, 0LL, 3u, &v6);
    }
  }
}
