/*
 * XREFs of HUBREG_QueryHubErrataFlags @ 0x1C007FB68
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C00789BC (HUBFDO_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C00304EC (HUBMISC_QueryKseDeviceFlags.c)
 *     WER_CreateReport @ 0x1C003D104 (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C007E4DC (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryHubErrataFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  _WORD *v9; // rdx
  __int64 v10; // rbx
  int v11; // esi
  bool v12; // zf
  unsigned __int16 v13; // r9
  bool v14; // zf
  bool v15; // zf
  __int64 v17; // [rsp+28h] [rbp-61h]
  __int64 v18; // [rsp+38h] [rbp-51h]
  __int64 v19; // [rsp+80h] [rbp-9h] BYREF
  __int64 v20; // [rsp+88h] [rbp-1h] BYREF
  __int64 v21; // [rsp+90h] [rbp+7h] BYREF
  __int64 v22; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+1Fh] BYREF
  _QWORD v25[2]; // [rsp+B0h] [rbp+27h] BYREF
  int v26; // [rsp+F0h] [rbp+67h] BYREF

  v4 = *(_BYTE *)(a1 + 200);
  v18 = *(_QWORD *)(a1 + 2520);
  v19 = 0LL;
  HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, 0LL, &v19, 0, v18);
  v12 = *(_DWORD *)(a1 + 168) == 3;
  v25[0] = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  if ( v12 && (v9 = *(_WORD **)(a1 + 176)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      a2,
      a3,
      a4,
      v9,
      *(_WORD **)(a1 + 184),
      *(_WORD **)(a1 + 192),
      v25,
      &v24,
      &v23,
      &v22,
      &v21,
      &v20,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2520));
  else
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      a2,
      a3,
      a4,
      0LL,
      0LL,
      0LL,
      v25,
      &v24,
      &v23,
      &v22,
      &v21,
      &v20,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2520));
  v10 = v25[0] | v24 | v23 | v22 | v21 | v20;
  v26 = 0;
  if ( v19 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v19,
            &g_ResetTTOnCancel,
            4LL,
            &v26,
            0LL,
            0LL);
    if ( v11 >= 0 )
    {
      v12 = v26 == 0;
      goto LABEL_13;
    }
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_83;
      v13 = 38;
      goto LABEL_11;
    }
  }
  v12 = (v10 & 0x100) == 0;
LABEL_13:
  if ( !v12 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800u);
  v26 = 0;
  if ( v19 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v19,
            L".0",
            4LL,
            &v26,
            0LL,
            0LL);
    if ( v11 >= 0 )
    {
      v14 = v26 == 0;
      goto LABEL_22;
    }
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_83;
      v13 = 39;
      goto LABEL_11;
    }
  }
  v14 = (v10 & 0x200) == 0;
LABEL_22:
  if ( !v14 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFF7FF);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000u);
  }
  if ( (v10 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000u);
  v26 = 0;
  if ( !v19 )
    goto LABEL_32;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v19,
          &g_DisableLpm,
          4LL,
          &v26,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_83;
      v13 = 40;
LABEL_11:
      LODWORD(v17) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v13,
        (__int64)&WPP_ec435a79b99d323019775391632c21d3_Traceguids,
        v17);
      goto LABEL_83;
    }
LABEL_32:
    v15 = (v10 & 0x1000) == 0;
    goto LABEL_33;
  }
  v15 = v26 == 0;
LABEL_33:
  if ( !v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  if ( (v10 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000u);
  if ( (v10 & 0x8000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000u);
  if ( (v10 & 0x40000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x100000u);
  if ( (v10 & 0x100000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x200000u);
  if ( (v10 & 0x400000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (v10 & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000000u);
  if ( (v10 & 0x4000000) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2496), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( (v10 & 0x40000000000LL) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2496), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 2496), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( !*(_BYTE *)(a1 + 240) && (v10 & 0x10000) != 0 )
    *(_DWORD *)(a1 + 2496) |= 1u;
  if ( (v10 & 0x10000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000000u);
  if ( (v10 & 0x8000000000LL) != 0 && v4 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 1u);
  if ( (v10 & 0x20000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000000u);
  if ( (v10 & 0x100000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 8u);
  if ( (v10 & 0x20000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 4u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000000u);
  if ( (v10 & 8) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xBFFFFFFF);
  if ( (v10 & 0x800000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000000);
  if ( (v10 & 0x10000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 2u);
  if ( (v10 & 0x200000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x10u);
  if ( (v10 & 0x400000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x40u);
  if ( *(_WORD *)(a1 + 2464) == 8457 && *(_WORD *)(a1 + 2466) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2468) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    WER_CreateReport(a1, 0LL, 0LL, 12290, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x29u, (__int64)&WPP_ec435a79b99d323019775391632c21d3_Traceguids);
  }
  v11 = 0;
LABEL_83:
  if ( v19 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v11;
}
