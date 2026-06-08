/*
 * XREFs of PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0041194
 * Callers:
 *     InitPepIdleStates @ 0x1C004048C (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000414C (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008580 (WPP_RECORDER_SF_d.c)
 *     PepQueryName @ 0x1C0041734 (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStatesV2(__int64 a1, int **a2)
{
  unsigned int v2; // r14d
  unsigned int *Pool2; // rax
  int *v5; // r12
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // esi
  char v9; // dl
  int *v10; // r15
  __int64 v11; // rcx
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned __int16 v15; // r9
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
  v5 = (int *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *Pool2 = v2;
  v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 18LL, Pool2);
  v6 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xDu,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
        v7);
    goto LABEL_65;
  }
  v8 = 0;
  v9 = 0;
  v6 = -1073741811;
  if ( !v2 )
  {
LABEL_62:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Au,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids);
    v6 = -1073741637;
    goto LABEL_65;
  }
  v10 = v5 + 1;
  do
  {
    v11 = *(_QWORD *)(a1 + 280);
    if ( (v11 & 0x200000000LL) == 0 && (*v10 & 0x78) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v16 = 14;
      goto LABEL_42;
    }
    if ( (v11 & 0x200) == 0 )
    {
      if ( (*v10 & 0x78) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_65;
        v16 = 15;
        goto LABEL_42;
      }
      v12 = *v10;
LABEL_13:
      if ( v10[1] != -1 )
        goto LABEL_14;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v16 = 20;
LABEL_42:
      LODWORD(v22) = v8;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v16,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
        v22);
      goto LABEL_65;
    }
    v12 = *v10;
    if ( (*v10 & 0x78) == 0 )
      goto LABEL_13;
    if ( (v12 & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v16 = 16;
      goto LABEL_42;
    }
    if ( (v12 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v16 = 17;
      goto LABEL_42;
    }
    if ( (v12 & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v16 = 18;
      goto LABEL_42;
    }
    if ( (v12 & 0x80u) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v16 = 19;
      goto LABEL_42;
    }
LABEL_14:
    if ( (v12 & 0x81) == 0x80 )
    {
      v6 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v16 = 21;
      goto LABEL_42;
    }
    if ( (v12 & 1) != 0 )
      v9 = 1;
    v24 = v9;
    if ( v8 )
    {
      v13 = v10[1];
      v14 = v5[3 * v8 - 1];
      if ( v13 == -1 )
      {
        if ( v14 != -1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v15 = 22;
          goto LABEL_22;
        }
LABEL_34:
        if ( v10[2] >= (unsigned int)v5[3 * v8] )
        {
          v9 = v24;
          goto LABEL_36;
        }
        v6 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 25;
LABEL_22:
          LODWORD(v23) = v8 - 1;
          LODWORD(v22) = v8;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v15,
            (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
            v22,
            v23);
        }
      }
      else
      {
        if ( v13 >= v14 )
        {
          if ( v14 == -1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
          }
          goto LABEL_34;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 23;
          goto LABEL_22;
        }
      }
LABEL_65:
      ExFreePoolWithTag(v5, (ULONG)1919119952);
      return v6;
    }
LABEL_36:
    ++v8;
    v10 += 3;
  }
  while ( v8 < v2 );
  if ( !v9 )
    goto LABEL_62;
  v17 = ExAllocatePool2(64LL, 16 * v2, 1919119952LL);
  v18 = v17;
  if ( !v17 )
  {
    v6 = -1073741670;
    goto LABEL_65;
  }
  v19 = 0;
  v20 = v17;
  do
  {
    PepQueryName(a1, v19++, 28LL, v20);
    v20 += 16LL;
  }
  while ( v19 < v2 );
  v6 = 0;
  *(_QWORD *)(a1 + 1160) = v18;
  *a2 = v5;
  return v6;
}
