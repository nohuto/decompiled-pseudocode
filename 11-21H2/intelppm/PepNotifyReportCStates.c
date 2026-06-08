/*
 * XREFs of PepNotifyReportCStates @ 0x1C00415C0
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C002E060 (AcpiCStateNotifyWorker.c)
 *     InitPepIdleStates @ 0x1C004048C (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     PepTranslateCstState @ 0x1C0041870 (PepTranslateCstState.c)
 */

__int64 __fastcall PepNotifyReportCStates(__int64 a1)
{
  unsigned int *v2; // rax
  unsigned int v3; // edx
  char v4; // di
  __int64 v5; // rax
  void *Pool2; // rax
  void *v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int *v10; // r8
  unsigned int i; // r10d
  __int64 v12; // rdx
  int v13; // r10d
  PVOID v14; // rdi
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+50h] [rbp-10h]

  HIDWORD(v16) = 0;
  v2 = *(unsigned int **)(a1 + 528);
  v3 = *v2;
  v4 = *((_BYTE *)v2 + 16);
  v5 = *v2 + 1;
  if ( v4 == 1 )
    v5 = v3;
  v16 = (unsigned int)v5;
  Pool2 = (void *)ExAllocatePool2(64LL, 24 * v5, 1919119952LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    P = Pool2;
    if ( v4 != 1 )
    {
      v19 = 0;
      v18 = 0LL;
      LOBYTE(v18) = 127;
      BYTE12(v18) = 1;
      HIWORD(v18) = 0;
      PepTranslateCstState(&v18, Pool2);
      v7 = (void *)(v9 + 24);
    }
    v10 = *(unsigned int **)(a1 + 528);
    for ( i = 0; i < *v10; i = v13 + 1 )
    {
      PepTranslateCstState(&v10[4 * i + 1 + i], v7);
      v10 = *(unsigned int **)(a1 + 528);
      v7 = (void *)(v12 + 24);
    }
    v14 = P;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 15LL, &v16);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x23u,
          (__int64)&WPP_bea9aa99a2903f791881367691ad780e_Traceguids,
          v8,
          v16);
      v8 = 0;
    }
    ExFreePoolWithTag(v14, (ULONG)1919119952);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
