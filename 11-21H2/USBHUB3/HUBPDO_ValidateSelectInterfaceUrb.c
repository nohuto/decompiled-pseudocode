/*
 * XREFs of HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0015DFC
 * Callers:
 *     HUBDSM_ValidatingSelectInterfaceUrbFromConfigured @ 0x1C001E0E0 (HUBDSM_ValidatingSelectInterfaceUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0013B2C (WPP_RECORDER_SF_dq.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C0015BA8 (HUBPDO_InitializeInterfaceInformation.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectInterfaceUrb(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rdx
  unsigned __int16 *v4; // rbx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r10
  unsigned __int16 *v8; // r10
  int v9; // r13d
  int v10; // ebx
  __int64 result; // rax
  unsigned __int16 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // edx
  unsigned int *v15; // rcx
  unsigned __int16 v16; // r9
  __int64 v17; // [rsp+40h] [rbp-78h]
  unsigned __int16 *v18; // [rsp+48h] [rbp-70h]
  _OWORD v19[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v20; // [rsp+78h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 456);
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v19);
  v4 = (unsigned __int16 *)*((_QWORD *)&v19[0] + 1);
  v5 = 0;
  v6 = *(_QWORD *)(*((_QWORD *)&v19[0] + 1) + 24LL);
  v17 = v6;
  if ( v6 || *(_DWORD *)(v1 + 388) != -1 )
  {
    if ( v6 != *(_QWORD *)(a1 + 48) )
    {
      if ( *(_WORD *)(*((_QWORD *)&v19[0] + 1) + 2LL) == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_30;
        v12 = 37;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_30;
        v12 = 38;
      }
LABEL_29:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v12,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
      goto LABEL_30;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x24u,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
    v17 = *(_QWORD *)(a1 + 48);
    *((_QWORD *)v4 + 3) = v17;
  }
  v7 = 16LL;
  if ( v4[1] != 1 )
    v7 = 24LL;
  v8 = &v4[v7];
  v18 = v8;
  *((_QWORD *)v8 + 1) = -1LL;
  if ( v4[1] != 1 )
  {
    v13 = *((unsigned int *)v4 + 8);
    if ( (_DWORD)v13 )
    {
      v14 = 0;
      v15 = (unsigned int *)*((_QWORD *)v4 + 5);
      while ( (char *)v15 + *v15 <= (char *)v4 + *v4 )
      {
        if ( !*((_WORD *)v15 + 2) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v16 = 42;
          goto LABEL_41;
        }
        ++v14;
        v15 = (unsigned int *)((char *)v15 + *v15);
        if ( v14 >= (unsigned int)v13 )
          goto LABEL_13;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 41;
LABEL_41:
        WPP_RECORDER_SF_dq(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          v13,
          v16,
          (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
          v14,
          v4);
        goto LABEL_30;
      }
      goto LABEL_30;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 40;
      goto LABEL_29;
    }
LABEL_30:
    v10 = -2147482880;
    goto LABEL_16;
  }
  v9 = *v8 + 32;
  if ( v9 != *v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x27u,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
        *v4,
        *v8 + 32);
      v8 = v18;
    }
    *v4 = v9;
  }
LABEL_13:
  v10 = HUBPDO_InitializeInterfaceInformation(v1, v8, v17);
  if ( v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x2Bu,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
LABEL_16:
    *(_DWORD *)(a1 + 1564) = v10;
    result = 4065LL;
    if ( v10 > -1073738240 )
    {
      switch ( v10 )
      {
        case -1073737728:
          v5 = -1073741670;
          goto LABEL_53;
        case -1073713152:
          v5 = -1073741810;
          goto LABEL_53;
        case -1073676288:
          v5 = -1073741536;
          goto LABEL_53;
      }
      if ( (unsigned int)v10 <= 1 )
      {
LABEL_53:
        *(_DWORD *)(a1 + 1560) = v5;
        return result;
      }
    }
    else
    {
      if ( v10 == -1073738240 )
      {
        v5 = -1073741637;
        goto LABEL_53;
      }
      if ( v10 == -2147483136 || v10 == -2147482880 || v10 == -2147482112 || v10 == -1073739264 )
      {
        v5 = -1073741811;
        goto LABEL_53;
      }
    }
    v5 = -1073741823;
    goto LABEL_53;
  }
  return 4077LL;
}
