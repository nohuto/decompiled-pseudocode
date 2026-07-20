/*
 * XREFs of SmpApiCallback @ 0x140002CF0
 * Callers:
 *     <none>
 * Callees:
 *     SmpFinalizeClientContext @ 0x140003134 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140003230 (SmpHandleConnectionRequest.c)
 *     SmpMarkThreadBusy @ 0x14000390C (SmpMarkThreadBusy.c)
 *     SmpMarkThreadFree @ 0x14000398C (SmpMarkThreadFree.c)
 *     SmpEstablishClientSecurity @ 0x140010A8C (SmpEstablishClientSecurity.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140014DB0 (_guard_xfg_dispatch_icall_nop.c)
 *     SmpUnhandledExceptionFilter @ 0x14001AC44 (SmpUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall SmpApiCallback(__int64 a1, __int64 a2)
{
  int v3; // r15d
  __int64 v4; // r14
  _BYTE *v5; // rdi
  int v6; // ebx
  _BYTE *v7; // rsi
  __int64 MessageAttribute; // rax
  unsigned int v9; // edx
  __int64 v11; // [rsp+40h] [rbp-1D8h]
  __int64 v12; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE *v13; // [rsp+58h] [rbp-1C0h]
  _OWORD v14[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v15; // [rsp+80h] [rbp-198h]
  _BYTE v16[4]; // [rsp+90h] [rbp-188h] BYREF
  unsigned __int16 v17; // [rsp+94h] [rbp-184h]
  unsigned int v18; // [rsp+B8h] [rbp-160h]
  int v19; // [rsp+BCh] [rbp-15Ch]

  v3 = 0;
  RtlSetThreadIsCritical(1u, 0LL, 1u);
  v4 = SmpApiConnectionPort;
  v5 = 0LL;
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  AlpcInitializeMessageAttribute(0x20000000LL, v14, 40LL, &v12);
  do
  {
    v12 = 328LL;
    DWORD1(v14[0]) |= 0x20000000u;
    v6 = NtAlpcSendWaitReceivePort(v4, 0x10000LL, 0LL, 0LL, v16, &v12, v14, 0LL, v11);
    LODWORD(v11) = v6;
  }
  while ( v6 < 0 );
  v7 = *(_BYTE **)AlpcGetMessageAttribute(v14, 0x20000000LL);
  HIDWORD(v11) = *(_DWORD *)(AlpcGetMessageAttribute(v14, 0x20000000LL) + 16);
  if ( (unsigned __int8)v17 == 1 )
  {
    v5 = v16;
    v13 = v16;
    v9 = v18;
    if ( v18 >= 9 )
    {
      v19 = -1073741822;
      goto LABEL_32;
    }
    if ( dword_14001CC08[4 * v18] )
    {
      v6 = SmpMarkThreadBusy(a2);
      LODWORD(v11) = v6;
      if ( v6 < 0 )
      {
        v19 = -1073741670;
        goto LABEL_32;
      }
      v3 = 1;
      v9 = v18;
    }
    v19 = 259;
    switch ( v9 )
    {
      case 0u:
      case 1u:
      case 2u:
        if ( (*v7 & 0x10) != 0 )
          goto LABEL_28;
        v6 = -1073741811;
        LODWORD(v11) = -1073741811;
        goto LABEL_29;
      case 3u:
      case 4u:
LABEL_28:
        LODWORD(v11) = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))*(&SmpApiDispatch + 2 * (int)v9))(
                         v16,
                         v7,
                         v4);
        v6 = v11;
        goto LABEL_29;
      case 5u:
      case 6u:
      case 7u:
      case 8u:
        if ( (*v7 & 6) == 0 )
        {
          v6 = SmpEstablishClientSecurity(v16, v7);
          LODWORD(v11) = v6;
          v9 = v18;
        }
        if ( v6 >= 0 )
        {
          if ( (*v7 & 4) != 0 )
          {
            v6 = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))*(&SmpApiDispatch + 2 * (int)v9))(v16, v7, v4);
            LODWORD(v11) = v6;
            v9 = v18;
          }
          else
          {
            v6 = -1073741790;
            LODWORD(v11) = -1073741790;
          }
        }
        if ( v9 != 5 || v6 != 259 )
          goto LABEL_29;
        v5 = 0LL;
        v13 = 0LL;
        break;
      default:
LABEL_29:
        v19 = v6;
        break;
    }
    if ( v3 )
      SmpMarkThreadFree(a2);
  }
  else if ( (unsigned __int8)v17 != 5 )
  {
    if ( (unsigned __int8)v17 == 10 )
    {
      SmpHandleConnectionRequest(v4, v16, v14, v17 >> 15);
    }
    else if ( (v17 & 0x2000) != 0 )
    {
      MessageAttribute = AlpcGetMessageAttribute(v14, 0x20000000LL);
      NtAlpcCancelMessage(v4, 0LL, MessageAttribute);
      v5 = v16;
      v13 = v16;
    }
  }
LABEL_32:
  if ( v7 )
    SmpFinalizeClientContext(v7);
  if ( v5 )
    NtAlpcSendWaitReceivePort(v4, 0x10000LL, v5, 0LL, 0LL, 0LL, 0LL, 0LL, v11);
  return RtlSetThreadIsCritical(0, 0LL, 1u);
}
