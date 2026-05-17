/*
 * XREFs of RtlWaitForWnfMetaNotification @ 0x1800596D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRegisterForWnfMetaNotification @ 0x180059840 (RtlRegisterForWnfMetaNotification.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18005A4B0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A4970 (ZwCreateEvent.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A6DE0 (NtQueryWnfStateNameInformation.c)
 */

__int64 __fastcall RtlWaitForWnfMetaNotification(__int64 a1, int a2, unsigned int a3, __int64 a4, int *a5)
{
  __int64 v6; // r15
  int v7; // edi
  NTSTATUS v8; // ebx
  int v10; // [rsp+20h] [rbp-60h]
  int v11; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h] BYREF

  Handle = 0LL;
  v6 = a3;
  v18 = a1;
  *a5 = 0;
  if ( a3 > 0x7FFFFFFF || (a2 & 0x11) != 0 )
  {
    v8 = -1073741811;
    goto LABEL_16;
  }
  if ( (a2 & 0xFFFFFFF1) == 0 )
  {
    v7 = 0;
    if ( (a2 & 8) != 0 )
    {
      v8 = NtQueryWnfStateNameInformation(&v18, 2LL, 0LL, &v11, 4);
      if ( v8 )
        goto LABEL_16;
      if ( v11 )
        v7 = 8;
    }
    if ( (a2 & 6) == 0 )
    {
LABEL_9:
      if ( v7 )
      {
        *a5 = v7;
        return 0LL;
      }
      LOBYTE(v10) = 0;
      v8 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 0LL, v10);
      if ( v8 >= 0 )
      {
        v17 = 0;
        v15 = 0;
        v16 = Handle;
        v8 = RtlRegisterForWnfMetaNotification(
               (unsigned int)&v14,
               v18,
               a2,
               (unsigned int)RtlpWnfMetaCallbackProc,
               (__int64)&v15);
        if ( v8 >= 0 )
        {
          Timeout.QuadPart = -10000 * v6;
          v8 = NtWaitForSingleObject(Handle, 0, &Timeout);
          if ( !v8 )
            *a5 = v15;
          RtlUnsubscribeWnfNotificationWaitForCompletion(v14);
        }
      }
      goto LABEL_16;
    }
    v8 = NtQueryWnfStateNameInformation(&v18, 1LL, 0LL, &v11, 4);
    if ( !v8 )
    {
      if ( (a2 & 2) != 0 && v11 )
        v7 |= 2u;
      if ( (a2 & 4) != 0 && !v11 )
        v7 |= 4u;
      goto LABEL_9;
    }
LABEL_16:
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v8;
  }
  return (unsigned int)-1073741811;
}
