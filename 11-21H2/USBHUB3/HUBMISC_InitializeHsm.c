/*
 * XREFs of HUBMISC_InitializeHsm @ 0x1C007D8DC
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C0074380 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_InitializeHsm(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  unsigned __int16 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // zf
  int v11; // eax
  __int64 Timer; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 2224) = a1;
  v17 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  LODWORD(v16) = 56;
  v18 = 0x100000001LL;
  v19 = v1;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v16,
         v3,
         a1 + 800);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 800));
    v8 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 816) = v7;
    v17 = 0LL;
    v20 = 0LL;
    v16 = 0LL;
    LODWORD(v16) = 56;
    v18 = 0x100000001LL;
    v19 = v8;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           &v16,
           v9,
           a1 + 968);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v5;
      v6 = 11;
      goto LABEL_4;
    }
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 2104));
    KeInitializeEvent((PRKEVENT)(a1 + 1152), NotificationEvent, 0);
    *(_DWORD *)(a1 + 2144) = 0;
    v10 = *(_BYTE *)(a1 + 240) == 0;
    *(_DWORD *)(a1 + 2116) = 2000;
    if ( v10 )
    {
      *(_DWORD *)(a1 + 2216) = 4;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 256);
      if ( v11 > 0 )
      {
        if ( v11 <= 2 )
        {
          *(_DWORD *)(a1 + 2216) = 1;
        }
        else if ( v11 == 3 )
        {
          *(_DWORD *)(a1 + 2216) = 2;
        }
      }
    }
    *(_DWORD *)(a1 + 2248) = 2000;
    *(_QWORD *)(a1 + 2240) = &HSMStateTable;
    *(_QWORD *)(a1 + 2296) = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 2264) = a1;
    Timer = ExAllocateTimer(HUBMISC_HubEventTimer, a1, 4LL);
    *(_QWORD *)(a1 + 2304) = Timer;
    if ( Timer )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
              WdfDriverGlobals,
              *(_QWORD *)(a1 + 16));
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 496))(*(_QWORD *)(a1 + 248), v13, 1LL);
      *(_QWORD *)(a1 + 2256) = v14;
      if ( !v14 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2520),
            2u,
            3u,
            0xDu,
            (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids);
        return (unsigned int)-1073741670;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xCu, (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 10;
LABEL_4:
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2520), 2u, 3u, v6, (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids, v4);
  }
  return v5;
}
