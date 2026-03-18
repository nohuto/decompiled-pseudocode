/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01A243C
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0186CF0 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0186DCC (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     ConvertPointCoordinates @ 0x1C003C35C (ConvertPointCoordinates.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator() @ 0x1C01A1E98 (_lambda_0204d79c2644d1b9cd88bde7d32e7162_--operator().c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C01A2AF0 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01A2B84 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01A2C44 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01A2F18 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C01A31F4 (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  RIMDeadzone *v9; // r14
  int v10; // eax
  unsigned int v11; // r12d
  unsigned int v12; // esi
  unsigned int v13; // r13d
  unsigned int v14; // edi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // r12d
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // rbx
  int v26; // r8d
  LONG v27; // edx
  __int128 v28; // xmm0
  int v29; // ecx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  int v33; // eax
  int v34; // ebx
  int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // r10d
  struct tagPOINT v43; // [rsp+38h] [rbp-79h] BYREF
  struct tagPOINT v44; // [rsp+40h] [rbp-71h] BYREF
  unsigned int Angle; // [rsp+48h] [rbp-69h] BYREF
  int v46; // [rsp+4Ch] [rbp-65h]
  __int128 v47; // [rsp+50h] [rbp-61h]
  __int64 v48; // [rsp+60h] [rbp-51h] BYREF
  __int64 v49; // [rsp+68h] [rbp-49h]
  __int128 v50; // [rsp+78h] [rbp-39h] BYREF
  __int64 v51; // [rsp+88h] [rbp-29h]
  int *v52; // [rsp+90h] [rbp-21h]
  int *v53; // [rsp+98h] [rbp-19h]
  __int128 v54; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v55; // [rsp+B8h] [rbp+7h] BYREF

  v6 = *(_DWORD *)(a4 + 72);
  v9 = RIMDeadzone::s_pRimDeadzoneInstance;
  v49 = a4;
  v51 = a3;
  if ( *(_DWORD *)(a2 + 72) == v6 && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a4 + 76) )
  {
    if ( *((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 4) && a6 == *(_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance )
      goto LABEL_11;
    if ( *((_QWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 3) )
      RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone::s_pRimDeadzoneInstance);
    v10 = a6 ? RIMDeadzone::_InitializeRightHandedDeadzone(v9) : RIMDeadzone::_InitializeLeftHandedDeadzone(v9);
    if ( v10 >= 0 )
    {
LABEL_11:
      v11 = *(_DWORD *)(a3 + 36);
      v12 = *(_DWORD *)(a3 + 32);
      v13 = 0;
      v52 = (int *)(a3 + 32);
      v43 = (struct tagPOINT)__PAIR64__(v11, v12);
      v14 = *(_DWORD *)(a5 + 36);
      v15 = *(_DWORD *)(a5 + 32);
      v53 = (int *)(a5 + 32);
      v44 = (struct tagPOINT)__PAIR64__(v14, v15);
      Angle = RIMDeadzone::_GetAngle((struct tagPOINT)__PAIR64__(v11, v12), (struct tagPOINT)__PAIR64__(v14, v15));
      v17 = (v11 - v14) * (v11 - v14);
      v18 = 0LL;
      v19 = Angle;
      v20 = (v12 - v15) * (v12 - v15) + v17;
      if ( *((_DWORD *)v9 + 8) )
      {
        while ( 1 )
        {
          v21 = *((_QWORD *)v9 + 3);
          *(_QWORD *)&v47 = 3 * v18;
          if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v19, v16, *(_QWORD *)(v21 + 24 * v18)) )
          {
            v22 = v47;
            v23 = 0LL;
            if ( *(_DWORD *)(v21 + 8 * v47 + 16) )
              break;
          }
LABEL_17:
          v18 = (unsigned int)(v18 + 1);
          if ( (unsigned int)v18 >= *((_DWORD *)v9 + 8) )
            goto LABEL_20;
          v19 = Angle;
        }
        while ( 1 )
        {
          v24 = *(_QWORD *)(v21 + 8 * v22 + 8);
          v25 = v49;
          v48 = 0LL;
          v26 = *(_DWORD *)(v49 + 20);
          v27 = *(_DWORD *)(v49 + 24);
          v28 = *(_OWORD *)(v49 + 4);
          v44.x = v26 + *(_DWORD *)(v24 + 8 * v23);
          v29 = *(_DWORD *)(v24 + 8 * v23 + 4);
          v30 = *(_OWORD *)(v49 + 20);
          v44.y = v27;
          v43.x = v26 + v29;
          v43.y = v27;
          v50 = v28;
          v54 = v30;
          ConvertPointCoordinates(*(_QWORD *)&v44, (int *)&v54, (int *)&v50, &v48);
          v31 = *(_OWORD *)(v25 + 4);
          v32 = *(_OWORD *)(v25 + 20);
          *(_QWORD *)&v50 = 0LL;
          v54 = v31;
          v55 = v32;
          ConvertPointCoordinates(*(_QWORD *)&v43, (int *)&v55, (int *)&v54, &v50);
          v33 = *(_DWORD *)(v25 + 4);
          v19 = (unsigned int)((v48 - v33) * (v48 - v33));
          v16 = (unsigned int)(v50 - v33);
          if ( v20 >= (unsigned int)v19 )
          {
            v16 = (unsigned int)(v16 * v16);
            if ( v20 < (unsigned int)v16 )
              break;
          }
          v21 = *((_QWORD *)v9 + 3);
          v23 = (unsigned int)(v23 + 1);
          v22 = v47;
          if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 8 * v47 + 16) )
            goto LABEL_17;
        }
        v13 = 1;
      }
LABEL_20:
      v47 = *(_OWORD *)(a2 + 20);
      if ( RIMDeadzone::s_counterClockwiseDeviceRotation == 90 || RIMDeadzone::s_counterClockwiseDeviceRotation == 270 )
      {
        v35 = *(_DWORD *)(a2 + 24);
        v34 = *(_DWORD *)(a2 + 28);
      }
      else
      {
        v34 = HIDWORD(v47);
        v35 = v47;
      }
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(v19, &Angle, (int *)(v51 + 40), a2 + 20);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(v36, &v44, v52, a2 + 4);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(v37, &v43, v53, v49 + 4);
      if ( v13 || dword_1C028F6FC == 6 )
        return v13;
      if ( a6 == 1 )
      {
        if ( v46 > v34 - 1000 && v44.x >= v43.x )
          return 1;
        if ( (int)Angle <= v41 - 530 )
          return v13;
      }
      else
      {
        if ( a6 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
        if ( v46 > v34 - 1000 && v44.x <= v43.x )
          return 1;
        if ( (int)Angle >= v35 + 530 )
          return v13;
      }
      if ( v44.y >= v43.y )
        return 1;
      return v13;
    }
  }
  return 0LL;
}
