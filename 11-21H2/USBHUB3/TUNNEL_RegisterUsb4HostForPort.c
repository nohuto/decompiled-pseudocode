/*
 * XREFs of TUNNEL_RegisterUsb4HostForPort @ 0x1C0087B24
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C00854D0 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0002DA0 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_GetUsb4Host @ 0x1C0087A14 (TUNNEL_GetUsb4Host.c)
 */

__int64 __fastcall TUNNEL_RegisterUsb4HostForPort(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  wchar_t *i; // rax
  const wchar_t *j; // rcx
  wchar_t *v9; // rax
  _QWORD *Usb4Host; // rax
  __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int16 v16; // r9
  __int64 v18; // [rsp+28h] [rbp-31h]
  __int64 v19; // [rsp+30h] [rbp-29h]
  __int64 *v20; // [rsp+40h] [rbp-19h] BYREF
  wchar_t *Str[2]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v22; // [rsp+58h] [rbp-1h] BYREF
  __int128 v23; // [rsp+68h] [rbp+Fh]
  __int128 v24; // [rsp+78h] [rbp+1Fh]
  void *v25; // [rsp+88h] [rbp+2Fh]
  unsigned __int64 v26; // [rsp+C0h] [rbp+67h] BYREF
  _QWORD *v27; // [rsp+D8h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v20 = 0LL;
  v5 = 0;
  LODWORD(v25) = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  *(_OWORD *)Str = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x20u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, wchar_t **))(WdfFunctions_01015 + 2472))(
    WdfDriverGlobals,
    a2,
    Str);
  for ( i = wcschr(Str[1], 0x5Cu); i; i = wcschr(i + 1, 0x5Cu) )
    *i = 35;
  for ( j = Str[1]; ; j = v9 + 1 )
  {
    v9 = wcschr(j, 0x2Fu);
    if ( !v9 )
      break;
    *v9 = 35;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 2744),
    0LL);
  Usb4Host = TUNNEL_GetUsb4Host(a1, (const UNICODE_STRING *)Str);
  v11 = *(_QWORD *)(a1 + 2744);
  v27 = Usb4Host;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, v11);
  if ( !v27 )
  {
    v25 = 0LL;
    v23 = 0LL;
    v24 = *(unsigned __int64 *)(a1 + 16);
    v22 = 0LL;
    LODWORD(v22) = 56;
    *((_QWORD *)&v23 + 1) = 0x100000001LL;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, unsigned __int64 *, _QWORD **))(WdfFunctions_01015 + 1536))(
            WdfDriverGlobals,
            &v22,
            (unsigned int)ExDefaultNonPagedPoolType,
            1748191317LL,
            48LL,
            &v26,
            &v27);
    v5 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a3 + 1432),
          2u,
          4u,
          0xAu,
          (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
          v18);
      }
      return v5;
    }
    v13 = v27;
    *(_OWORD *)v27 = 0LL;
    *((_OWORD *)v13 + 1) = 0LL;
    *((_OWORD *)v13 + 2) = 0LL;
    v14 = *(_QWORD *)(a1 + 16);
    v25 = 0LL;
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = 0x100000001LL;
    v24 = v26;
    v22 = 0LL;
    LODWORD(v22) = 56;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, _QWORD *))(WdfFunctions_01015 + 1336))(
            WdfDriverGlobals,
            v14,
            &v22,
            v27 + 1);
    v5 = v15;
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_16:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(
          WdfDriverGlobals,
          v26);
        return v5;
      }
      v16 = 11;
      goto LABEL_14;
    }
    v25 = off_1C00670A8;
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = 0x100000001LL;
    v22 = 0LL;
    LODWORD(v22) = 56;
    v24 = 0LL;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 **))(WdfFunctions_01015 + 1624))(
            WdfDriverGlobals,
            v27[1],
            &v22,
            &v20);
    v5 = v15;
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v16 = 12;
      goto LABEL_14;
    }
    *v20 = a1;
    v25 = 0LL;
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = 0x100000001LL;
    v24 = v26;
    v22 = 0LL;
    LODWORD(v22) = 56;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD *))(WdfFunctions_01015 + 2496))(
            WdfDriverGlobals,
            &v22,
            v27 + 2);
    v5 = v15;
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v16 = 13;
LABEL_14:
      LODWORD(v18) = v15;
LABEL_15:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a3 + 1432),
        2u,
        4u,
        v16,
        (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
        v18);
      goto LABEL_16;
    }
    *v27 = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 2744),
      0LL);
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int64))(WdfFunctions_01015 + 120))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 2736),
           v26);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 2744));
    if ( (v5 & 0x80000000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v16 = 14;
      LODWORD(v18) = v5;
      goto LABEL_15;
    }
  }
  *(_QWORD *)(a3 + 1464) = a2;
  _InterlockedOr((volatile signed __int32 *)(a3 + 204), 0x800u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = *(unsigned __int16 *)(a3 + 200);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a3 + 1432),
      4u,
      4u,
      0xFu,
      (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
      v27,
      v19);
  }
  return v5;
}
