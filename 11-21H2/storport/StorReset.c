/*
 * XREFs of StorReset @ 0x1C0044438
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaidAdapterDeviceReset @ 0x1C003463C (RaidAdapterDeviceReset.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qjzztqdq_EtwWriteTransfer @ 0x1C00414E4 (McTemplateK0qjzztqdq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorReset(__int64 a1, int a2)
{
  _DWORD *Adapter; // rbx
  char v3; // si
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r8
  const wchar_t *v7; // r11
  const wchar_t *v8; // rdx
  struct _KEVENT v10[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v11; // [rsp+90h] [rbp+17h]
  __int128 v12; // [rsp+98h] [rbp+1Fh] BYREF
  __int128 v13; // [rsp+A8h] [rbp+2Fh] BYREF

  Adapter = 0LL;
  LODWORD(v11) = 0;
  v3 = a2;
  memset(v10, 0, sizeof(v10));
  if ( a2 )
  {
    v4 = -1073741822;
  }
  else
  {
    Adapter = RaidpPortGetAdapter(a1);
    if ( Adapter )
    {
      v11 = 0LL;
      *(_QWORD *)&v10[0].Header.Lock = 24LL;
      v10[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)StorResetCompletion;
      memset(&v10[1], 0, sizeof(struct _KEVENT));
      v10[0].Header.WaitListHead.Blink = (_LIST_ENTRY *)v10;
      KeInitializeEvent(&v10[1], SynchronizationEvent, 0);
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)Adapter + 656) + 32LL))(
             *(_QWORD *)(*((_QWORD *)Adapter + 656) + 8LL),
             0LL,
             0LL,
             0LL);
      if ( v4 == 259 )
      {
        KeWaitForSingleObject(&v10[1], Executive, 0, 0, 0LL);
        v4 = v11;
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( Adapter )
    {
      v5 = *((_QWORD *)Adapter + 2);
      v13 = *(_OWORD *)(Adapter + 1234);
      v12 = 0LL;
      RaidDriverGetName(v5, (__int64)&v12);
      if ( (byte_1C00799E6 & 8) != 0 )
      {
        v8 = (const wchar_t *)&unk_1C006A690;
        if ( v7 )
          v8 = v7;
        McTemplateK0qjzztqdq_EtwWriteTransfer(
          *((unsigned __int8 *)Adapter + 104) >> 7,
          (__int64)v8,
          v6,
          Adapter[14],
          (__int64)&v13,
          *((const wchar_t **)&v12 + 1),
          v8,
          *((_BYTE *)Adapter + 104) >> 7,
          v3,
          v4,
          Adapter[1407]);
      }
    }
  }
  return v4;
}
