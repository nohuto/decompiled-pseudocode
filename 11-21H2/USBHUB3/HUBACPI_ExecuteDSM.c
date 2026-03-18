/*
 * XREFs of HUBACPI_ExecuteDSM @ 0x1C00840FC
 * Callers:
 *     HUBPSM20_DisengagingSDM845HighSpeedWorkaround @ 0x1C0010C10 (HUBPSM20_DisengagingSDM845HighSpeedWorkaround.c)
 *     HUBPSM20_EngagingSDM845HighSpeedWorkaround @ 0x1C0010C80 (HUBPSM20_EngagingSDM845HighSpeedWorkaround.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_d @ 0x1C003C8EC (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF_q_guid_L @ 0x1C003C9CC (WPP_RECORDER_SF_q_guid_L.c)
 *     WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C003CAD0 (WPP_RECORDER_SF_q_guid_LLLLL.c)
 *     WPP_RECORDER_SF_q_guid_Ld @ 0x1C003CC64 (WPP_RECORDER_SF_q_guid_Ld.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     memcpy_s @ 0x1C00435F0 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBACPI_ExecuteDSM(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r12
  unsigned int v6; // edi
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // cl
  int v17; // [rsp+28h] [rbp-79h]
  _QWORD v18[3]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v19[3]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v20; // [rsp+98h] [rbp-9h] BYREF
  int v21; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v22; // [rsp+A4h] [rbp+3h]

  v4 = *(_QWORD *)(a1 + 16);
  HIDWORD(v19[0]) = 0;
  HIDWORD(v18[0]) = 0;
  v6 = 0;
  v20 = 0LL;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 60LL, 1882409045LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    *((_DWORD *)Pool2 + 2) = 60;
    *(_DWORD *)Pool2 = 1130980673;
    *((_DWORD *)Pool2 + 1) = 1297302623;
    *((_DWORD *)Pool2 + 3) = 4;
    *((_DWORD *)Pool2 + 4) = 1048578;
    memcpy_s(Pool2 + 10, 0x10uLL, &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND, 0x10uLL);
    v10 = v9[9];
    if ( (unsigned __int16)v10 < 4u )
      v10 = 4LL;
    *(_DWORD *)((char *)v9 + v10 + 20) = 0x40000;
    *(_DWORD *)((char *)v9 + v10 + 24) = 1;
    *(_DWORD *)((char *)v9 + v10 + 28) = 0x40000;
    *(_DWORD *)((char *)v9 + v10 + 32) = a4;
    *(_DWORD *)((char *)v9 + v10 + 36) = 2;
    memcpy_s((char *)v9 + v10 + 40, 0LL, 0LL, 0LL);
    v18[1] = &v21;
    v19[0] = 1LL;
    v19[2] = 60LL;
    v19[1] = v9;
    v22 = 0LL;
    v21 = 1114596673;
    v18[0] = 1LL;
    v18[2] = 20LL;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v4);
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v11,
           0LL,
           3325956LL,
           v19,
           v18,
           0LL,
           &v20) >= 0 )
    {
      if ( v21 == 1114596673 )
      {
        if ( DWORD1(v22) && WORD5(v22) )
        {
          v15 = 3;
          if ( (unsigned __int64)WORD5(v22) - 1 <= 3 )
            v15 = BYTE10(v22) - 1;
          v6 = HIDWORD(v22) & ((256 << (8 * v15)) - 1);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q_guid_LLLLL(*(_QWORD *)(a1 + 2520), WORD5(v22), v13, DWORD1(v22), v17);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q_guid_L(*(_QWORD *)(a1 + 2520), v12, v13, v14, v17);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q_guid_Ld(*(_QWORD *)(a1 + 2520), v12, v13, v14, v17);
    }
    ExFreePoolWithTag(v9, 0x70334855u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_d(*(_QWORD *)(a1 + 2520));
  }
  return v6;
}
