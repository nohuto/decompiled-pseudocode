/*
 * XREFs of PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003799C
 * Callers:
 *     InitPepIdleStates @ 0x1C0036C98 (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005818 (WPP_RECORDER_SF_DD.c)
 *     PepQueryName @ 0x1C0037F3C (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStatesV2(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // r15d
  unsigned int *Pool2; // rax
  unsigned int *v5; // r14
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rsi
  char v9; // r9
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // ecx
  unsigned __int16 v13; // r9
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned __int16 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // ebx
  __int64 v20; // rsi
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  char v24; // [rsp+80h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 1132);
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 12 * v2 + 4, 1919119952LL);
  v5 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *Pool2 = v2;
  v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 18LL, Pool2);
  v6 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xDu,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
        v7);
    goto LABEL_61;
  }
  v8 = 0LL;
  v9 = 0;
  v6 = -1073741811;
  while ( (unsigned int)v8 < v2 )
  {
    v10 = *(_QWORD *)(a1 + 280);
    if ( (v10 & 0x200000000LL) == 0 && (v5[3 * v8 + 1] & 0x78) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 14;
        goto LABEL_38;
      }
LABEL_61:
      ExFreePoolWithTag(v5, (ULONG)1919119952);
      return v6;
    }
    if ( (v10 & 0x200) == 0 && (v5[3 * v8 + 1] & 0x78) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_61;
      v13 = 15;
      goto LABEL_38;
    }
    v11 = v5[3 * v8 + 1];
    if ( (v11 & 0x78) != 0 )
    {
      v12 = v5[3 * v8 + 1] & 1;
      if ( (v11 & 1) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v13 = 16;
        goto LABEL_38;
      }
      if ( (v11 & 2) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v13 = 17;
        goto LABEL_38;
      }
      if ( (v11 & 4) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v13 = 18;
        goto LABEL_38;
      }
      if ( (v11 & 0x80u) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v13 = 19;
        goto LABEL_38;
      }
    }
    else
    {
      if ( v5[3 * v8 + 2] == -1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v13 = 20;
LABEL_38:
        LODWORD(v22) = v8;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v13,
          (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
          v22);
        goto LABEL_61;
      }
      v12 = v5[3 * v8 + 1] & 1;
    }
    if ( (v11 & 0x81) == 0x80 )
    {
      v6 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_61;
      v13 = 21;
      goto LABEL_38;
    }
    if ( v12 )
      v9 = 1;
    v24 = v9;
    if ( (_DWORD)v8 )
    {
      v14 = v5[3 * v8 + 2];
      v15 = v5[3 * (unsigned int)(v8 - 1) + 2];
      if ( v14 == -1 )
      {
        if ( v15 != -1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_61;
          v16 = 22;
          goto LABEL_29;
        }
      }
      else
      {
        if ( v14 < v15 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_61;
          v16 = 23;
LABEL_29:
          LODWORD(v23) = v8 - 1;
          LODWORD(v22) = v8;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v16,
            (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
            v22,
            v23);
          goto LABEL_61;
        }
        if ( v15 == -1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = v8 - 1;
          LODWORD(v22) = v8;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x18u,
            (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
            v22,
            v23);
          v9 = v24;
        }
      }
      if ( v5[3 * v8 + 3] < v5[3 * (unsigned int)(v8 - 1) + 3] )
      {
        v6 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v16 = 25;
        goto LABEL_29;
      }
    }
    v8 = (unsigned int)(v8 + 1);
  }
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Au,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids);
    v6 = -1073741637;
    goto LABEL_61;
  }
  v17 = ExAllocatePool2(64LL, 16 * v2, 1919119952LL);
  v18 = v17;
  if ( !v17 )
  {
    v6 = -1073741670;
    goto LABEL_61;
  }
  v19 = 0;
  if ( v2 )
  {
    v20 = v17;
    do
    {
      PepQueryName(a1, v19++, 28LL, v20);
      v20 += 16LL;
    }
    while ( v19 < v2 );
  }
  v6 = 0;
  *(_QWORD *)(a1 + 1160) = v18;
  *a2 = v5;
  return v6;
}
