/*
 * XREFs of PepNotifyQueryProcessorIdleStates @ 0x1C0040EDC
 * Callers:
 *     InitPepIdleStates @ 0x1C004048C (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008580 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStates(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // ebp
  unsigned int *Pool2; // rax
  unsigned int *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  char v10; // r9
  unsigned int v11; // ecx
  unsigned __int16 v12; // r9

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
  v9 = 0LL;
  v10 = 0;
  if ( !v2 )
  {
LABEL_34:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x22u,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids);
    v7 = -1073741637;
    goto LABEL_37;
  }
  do
  {
    if ( (*(_QWORD *)(a1 + 280) & 0x100000000LL) == 0 && (v6[v9 + 2] & 0x78) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v12 = 29;
      goto LABEL_27;
    }
    if ( (*(_QWORD *)(a1 + 280) & 0x100LL) == 0 && (v6[v9 + 2] & 0x78) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v12 = 30;
LABEL_27:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v12,
        (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
        v9);
      goto LABEL_37;
    }
    v11 = v6[v9 + 2];
    if ( (v11 & 0x78) == 0 )
    {
      if ( (v11 & 1) == 0 )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( (v11 & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 31;
        goto LABEL_27;
      }
LABEL_37:
      ExFreePoolWithTag(v6, (ULONG)1919119952);
      return v7;
    }
    if ( (v11 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v12 = 32;
      goto LABEL_27;
    }
    if ( (v11 & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v12 = 33;
      goto LABEL_27;
    }
LABEL_21:
    v10 = 1;
LABEL_22:
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < v2 );
  if ( !v10 )
    goto LABEL_34;
  *a2 = v6;
  return 0;
}
