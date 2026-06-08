/*
 * XREFs of PepNotifyQueryProcessorIdleStates @ 0x1C004210C
 * Callers:
 *     InitPepIdleStates @ 0x1C00416BC (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009F84 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStates(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // ebp
  unsigned int *Pool2; // rax
  unsigned int *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  char v10; // r10
  __int64 v11; // rsi
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
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0x1Bu,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
        v8);
    goto LABEL_38;
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
    goto LABEL_38;
  }
  v9 = 0LL;
  v10 = 0;
  if ( !v2 )
  {
LABEL_35:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x22u,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids);
    v7 = -1073741637;
    goto LABEL_38;
  }
  v11 = *(_QWORD *)(a1 + 280);
  do
  {
    if ( (v11 & 0x100000000LL) == 0 && (v6[v9 + 2] & 0x78) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v13 = 29;
      goto LABEL_28;
    }
    if ( (v11 & 0x100) == 0 && (v6[v9 + 2] & 0x78) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v13 = 30;
LABEL_28:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v13,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
        v9);
      goto LABEL_38;
    }
    v12 = v6[v9 + 2];
    if ( (v12 & 0x78) == 0 )
    {
      if ( (v12 & 1) == 0 )
        goto LABEL_23;
      goto LABEL_22;
    }
    if ( (v12 & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 31;
        goto LABEL_28;
      }
LABEL_38:
      ExFreePoolWithTag(v6, (ULONG)1919119952);
      return v7;
    }
    if ( (v12 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v13 = 32;
      goto LABEL_28;
    }
    if ( (v12 & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v13 = 33;
      goto LABEL_28;
    }
LABEL_22:
    v10 = 1;
LABEL_23:
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < v2 );
  if ( !v10 )
    goto LABEL_35;
  *a2 = v6;
  return 0;
}
