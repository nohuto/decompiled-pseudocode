/*
 * XREFs of Register_PrepareHardware @ 0x1C0071244
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0005AD0 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     Register_ControllerReset @ 0x1C0013D48 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0013F1C (Register_BiosHandoff.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014644 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Register_MapSecureMmio @ 0x1C003CF64 (Register_MapSecureMmio.c)
 *     Register_ParseCapabilityRegister @ 0x1C0070B8C (Register_ParseCapabilityRegister.c)
 */

__int64 __fastcall Register_PrepareHardware(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  char *v5; // rdx
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // edx
  int v10; // eax
  int v11; // edi
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-48h] BYREF

  for ( i = 0;
        i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(
              WdfDriverGlobals,
              a2);
        ++i )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
           WdfDriverGlobals,
           a2,
           i);
    if ( *(_BYTE *)v7 == 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v6,
          6,
          12,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          i);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v19) = *(_DWORD *)(v7 + 12);
          LODWORD(v18) = *(_DWORD *)(v7 + 4);
          LODWORD(v17) = *(_DWORD *)(v7 + 8);
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0xDu,
            (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
            v17,
            v18,
            v19);
        }
      }
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v8 = MmMapIoSpaceEx(*(_QWORD *)(v7 + 4), *(unsigned int *)(v7 + 12), 516LL);
        *(_QWORD *)(a1 + 24) = v8;
        if ( !v8 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              (_DWORD)v5,
              6,
              14,
              (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
          }
          v11 = -1073741670;
          goto LABEL_18;
        }
        v9 = *(_DWORD *)(v7 + 12);
        *(_DWORD *)(a1 + 20) = v9;
        *(_BYTE *)(a1 + 16) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v18) = v9;
          WPP_RECORDER_SF_qd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0xFu,
            (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
            v8,
            v18);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(a1 + 8)) )
    {
      v11 = Register_MapSecureMmio((_QWORD *)a1);
      if ( v11 < 0 )
        goto LABEL_18;
    }
    v10 = Register_ParseCapabilityRegister(a1);
    v11 = v10;
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v13 = 17;
    }
    else
    {
      v10 = Register_BiosHandoff((_QWORD *)a1);
      v11 = v10;
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_18;
        v13 = 18;
      }
      else
      {
        v10 = Register_ControllerReset(a1, 0);
        v11 = v10;
        if ( v10 >= 0 )
        {
          if ( (XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL)) & 1) == 0 )
          {
            v14 = *(_QWORD *)(a1 + 8);
            v5 = (char *)&v20 - v14;
            v20 = 1uLL;
            v15 = 2LL;
            v16 = (_QWORD *)(v14 + 336);
            do
            {
              *v16 |= *(_QWORD *)((char *)v16 + (_QWORD)v5 - 336);
              ++v16;
              --v15;
            }
            while ( v15 );
          }
          goto LABEL_18;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_18;
        v13 = 19;
      }
    }
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v5,
      6,
      v13,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
      v10);
    goto LABEL_18;
  }
  v11 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v5,
      6,
      16,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
  }
LABEL_18:
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)v5,
        6,
        20,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v11;
}
