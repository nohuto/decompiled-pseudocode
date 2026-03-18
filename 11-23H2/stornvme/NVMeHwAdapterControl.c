/*
 * XREFs of NVMeHwAdapterControl @ 0x1C00036A0
 * Callers:
 *     <none>
 * Callees:
 *     NVMePowerActive @ 0x1C0003710 (NVMePowerActive.c)
 *     memmove @ 0x1C0004A40 (memmove.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     CalculateTimeDurationIn100ns @ 0x1C0007544 (CalculateTimeDurationIn100ns.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000CD84 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerFilterResourceRequirements @ 0x1C000CE8C (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerPowerDown @ 0x1C000E0D8 (NVMeControllerPowerDown.c)
 *     NVMeControllerPowerUp @ 0x1C000E25C (NVMeControllerPowerUp.c)
 *     NVMeControllerRemove @ 0x1C000E2F4 (NVMeControllerRemove.c)
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 *     NVMeControllerStop @ 0x1C000ED70 (NVMeControllerStop.c)
 *     NVMeGetControllerSerialNumber @ 0x1C000F32C (NVMeGetControllerSerialNumber.c)
 *     NVMeInitializeProcessorIoQueueMapping @ 0x1C000FA00 (NVMeInitializeProcessorIoQueueMapping.c)
 *     NVMeMaxOperationalPower @ 0x1C000FCE4 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetFState @ 0x1C00104B4 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C0010540 (NVMePowerSetPerfState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C00105C0 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C0010BA0 (NVMeSystemPowerHint.c)
 *     NVMeSendControllerInternalData @ 0x1C00284B0 (NVMeSendControllerInternalData.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, int *a3)
{
  unsigned int v5; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rdx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // [rsp+B8h] [rbp+48h] BYREF

  v5 = 0;
  if ( a2 > 15 )
  {
    v16 = (unsigned int)(a2 - 16);
    if ( !(_DWORD)v16 )
    {
      LODWORD(v16) = 17;
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFF7DF6 | 0x8008;
      NVMeControllerCompleteAllIORequests(a1, v16);
      *(_DWORD *)(a1 + 32) &= ~0x10u;
      return v5;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 2;
      if ( !v18 )
      {
        v29 = *(_QWORD *)(a1 + 1840);
        v5 = 1;
        if ( !a3 || (unsigned int)a3[1] < 0x98 )
          return v5;
        memset(a3, 0, 0x98uLL);
        *a3 = 1;
        a3[1] = 152;
        *((_OWORD *)a3 + 1) = *(_OWORD *)(v29 + 4);
        a3[8] = *(_DWORD *)(v29 + 20);
        return 0;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v5 = 1;
        if ( !a3 )
          return v5;
        v28 = *a3;
        if ( *a3 == 1 )
        {
          *(_BYTE *)(a1 + 22) = *((_BYTE *)a3 + 4);
        }
        else if ( v28 == 2 )
        {
          *(_BYTE *)(a1 + 23) = *((_BYTE *)a3 + 4);
        }
        else if ( !v28 )
        {
          *(_BYTE *)(a1 + 24) = *((_BYTE *)a3 + 4);
        }
        return 0;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          v5 = 1;
          if ( a3 && *a3 == 16 && (unsigned int)a3[1] >= 0x10 )
            return (unsigned __int8)NVMeControllerReset(a1) == 0;
          return v5;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 && (unsigned int)a3[1] >= 0xA0 )
            {
              v24 = (_DWORD *)*((_QWORD *)a3 + 1);
              if ( *v24 == 1 )
              {
                a3[8] = v24[1];
                if ( (unsigned int)a3[4] >= v24[1] )
                  memmove(*((void **)a3 + 3), v24 + 2, (unsigned int)v24[1]);
                else
                  return 3;
                return v5;
              }
            }
            return 1;
          }
          v5 = 3;
          a3[1] = 160;
          if ( (unsigned int)a3[2] < 0xA0 )
            return v5;
          v25 = *((_QWORD *)a3 + 2);
          *(_DWORD *)v25 = 1;
          *(_DWORD *)(v25 + 4) = 152;
          v26 = *(_QWORD *)(*((_QWORD *)a3 + 3) + 64LL);
          *(_OWORD *)(v25 + 8) = *(_OWORD *)v26;
          *(_OWORD *)(v25 + 24) = *(_OWORD *)(v26 + 16);
          *(_OWORD *)(v25 + 40) = *(_OWORD *)(v26 + 32);
          *(_OWORD *)(v25 + 56) = *(_OWORD *)(v26 + 48);
          *(_OWORD *)(v25 + 72) = *(_OWORD *)(v26 + 64);
          *(_OWORD *)(v25 + 88) = *(_OWORD *)(v26 + 80);
          *(_OWORD *)(v25 + 104) = *(_OWORD *)(v26 + 96);
          *(_OWORD *)(v25 + 120) = *(_OWORD *)(v26 + 112);
          *(_OWORD *)(v25 + 136) = *(_OWORD *)(v26 + 128);
          *(_QWORD *)(v25 + 152) = *(_QWORD *)(v26 + 144);
          return 0;
        }
        return (unsigned int)NVMeInitializeProcessorIoQueueMapping();
      }
      else
      {
        v5 = 1;
        if ( !a3 || (unsigned int)a3[1] < 0x20 || a3[4] != 1 )
          return v5;
        return (unsigned int)NVMeSendControllerInternalData(a1, *((_QWORD *)a3 + 3));
      }
    }
    else
    {
      return (unsigned int)NVMeGetControllerSerialNumber(a1, a3);
    }
  }
  if ( a2 == 15 )
  {
    NVMePowerSetPerfState(a1, a3);
    return v5;
  }
  if ( a2 > 8 )
  {
    v13 = a2 - 9;
    if ( !v13 )
    {
      NVMePowerSetFState(a1, a3);
      return v5;
    }
    v14 = v13 - 3;
    if ( !v14 )
    {
      NVMeSystemPowerHint(a1, a3);
      return v5;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        NVMeMaxOperationalPower(a1, a3);
        return v5;
      }
    }
    else if ( *a3 )
    {
      NVMeControllerFilterResourceRequirements(a1, a3);
      return v5;
    }
    return 1;
  }
  if ( a2 == 8 )
  {
    NVMePowerActive(a1, a3);
    return v5;
  }
  if ( !a2 )
  {
    v12 = *a3;
    if ( *a3 )
      *((_BYTE *)a3 + 4) = 1;
    if ( v12 > 1 )
      *((_BYTE *)a3 + 5) = 1;
    if ( v12 > 2 )
      *((_BYTE *)a3 + 6) = 1;
    if ( v12 > 6 )
      *((_BYTE *)a3 + 10) = 1;
    if ( v12 > 8 )
      *((_BYTE *)a3 + 12) = 1;
    if ( v12 > 9 )
      *((_BYTE *)a3 + 13) = 1;
    if ( v12 > 0xC )
      *((_BYTE *)a3 + 16) = 1;
    if ( v12 > 0xD )
      *((_BYTE *)a3 + 17) = 1;
    if ( v12 > 0xE )
      *((_BYTE *)a3 + 18) = 1;
    if ( v12 > 0xF )
      *((_BYTE *)a3 + 19) = 1;
    if ( v12 <= 0x10 )
    {
      if ( v12 <= 5 )
        return v5;
    }
    else
    {
      *((_BYTE *)a3 + 20) = 1;
    }
    *((_BYTE *)a3 + 9) = 1;
    if ( v12 > 0x11 )
      *((_BYTE *)a3 + 21) = 1;
    if ( v12 > 0x13 )
      *((_BYTE *)a3 + 23) = 1;
    if ( v12 > 0x14 )
      *((_BYTE *)a3 + 24) = 1;
    if ( v12 > 0x15 )
      *((_BYTE *)a3 + 25) = 1;
    if ( v12 > 0x16 )
      *((_BYTE *)a3 + 26) = 1;
    if ( v12 > 0x17 )
      *((_BYTE *)a3 + 27) = 1;
    if ( v12 > 0x18 )
      *((_BYTE *)a3 + 28) = 1;
    if ( v12 > 0x19 )
      *((_BYTE *)a3 + 29) = 1;
    return v5;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v11 = *(_DWORD *)(a1 + 32);
    if ( (v11 & 8) != 0 )
    {
      NVMeControllerRemove();
    }
    else if ( (v11 & 2) != 0 )
    {
      NVMeControllerStop();
    }
    return v5;
  }
  v8 = v7 - 1;
  if ( !v8 )
    return v5;
  v9 = v8 - 3;
  if ( !v9 )
  {
    NVMePowerSettingChangeNotification(a1);
    return v5;
  }
  if ( v9 != 1 )
    return 1;
  v10 = a3[5];
  if ( v10 == 1 )
  {
    v30 = 0LL;
    StorPortExtendedFunction(47LL, a1, &v30);
    if ( (unsigned int)NVMeControllerPowerUp(a1) == -1056964596 )
      v5 = 2;
    StorPortExtendedFunction(47LL, a1, &v30);
    if ( *(_BYTE *)(a1 + 24) )
      goto LABEL_21;
  }
  else if ( v10 == 4 && ((*(_DWORD *)(a1 + 32) & 0x40) == 0 || a3[4] != 3) )
  {
    v30 = 0LL;
    StorPortExtendedFunction(47LL, a1, &v30);
    NVMeControllerPowerDown(a1);
    StorPortExtendedFunction(47LL, a1, &v30);
    if ( *(_BYTE *)(a1 + 24) )
    {
LABEL_21:
      CalculateTimeDurationIn100ns(0LL, v30);
      StorPortExtendedFunction(85LL, a1, 0LL);
    }
  }
  return v5;
}
