/*
 * XREFs of PepNotifyQueryProcessorIdleStates @ 0x1C00376F4
 * Callers:
 *     InitPepIdleStates @ 0x1C0036C98 (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStates(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // esi
  unsigned int *Pool2; // rax
  unsigned int *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  char v9; // r10
  __int64 i; // rdx
  __int64 v11; // r9
  unsigned int v12; // r9d
  unsigned __int16 v13; // r9

  v2 = *(_DWORD *)(a1 + 1132);
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 4 * v2 + 8, 1919119952LL);
  v6 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *Pool2 = v2;
  v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 2LL, Pool2);
  v7 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0x1Bu,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
        v8);
    goto LABEL_37;
  }
  v7 = -1073741811;
  if ( v6[1] > 0x800 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Cu,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids);
    goto LABEL_37;
  }
  v9 = 0;
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    v11 = *(_QWORD *)(a1 + 280);
    if ( (v11 & 0x100000000LL) == 0 && (v6[i + 2] & 0x78) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v13 = 29;
      goto LABEL_26;
    }
    if ( (v11 & 0x100) == 0 && (v6[i + 2] & 0x78) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 30;
LABEL_26:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v13,
          (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
          i);
        goto LABEL_37;
      }
      goto LABEL_37;
    }
    v12 = v6[i + 2];
    if ( (v12 & 0x78) != 0 )
    {
      if ( (v12 & 1) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = 31;
          goto LABEL_26;
        }
        goto LABEL_37;
      }
      if ( (v12 & 2) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = 32;
          goto LABEL_26;
        }
        goto LABEL_37;
      }
      if ( (v12 & 4) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_37;
        v13 = 33;
        goto LABEL_26;
      }
    }
    else if ( (v12 & 1) == 0 )
    {
      continue;
    }
    v9 = 1;
  }
  if ( v9 )
  {
    *a2 = v6;
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x22u,
      (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids);
  v7 = -1073741637;
LABEL_37:
  ExFreePoolWithTag(v6, (ULONG)1919119952);
  return v7;
}
