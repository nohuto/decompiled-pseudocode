/*
 * XREFs of IoQueuesInitialize @ 0x1C000B10C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DAA0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 *     GetMaxDedicatedSqPerCqCount @ 0x1C0009DB4 (GetMaxDedicatedSqPerCqCount.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C26C (NVMeAllocateDmaBuffer.c)
 *     NVMeCompletionQueueInit @ 0x1C000C818 (NVMeCompletionQueueInit.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EEA4 (NVMeFreeDmaBuffer.c)
 *     NVMeSubmissionQueueAssignmentPolicyInit @ 0x1C0010874 (NVMeSubmissionQueueAssignmentPolicyInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C001096C (NVMeSubmissionQueueInit.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  void ***v4; // r15
  unsigned int v5; // r14d
  unsigned int v6; // r13d
  __int64 v7; // rcx
  void ***v8; // rsi
  void ***v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r14d
  void **v12; // rcx
  unsigned int v13; // esi
  void *v14; // rcx
  void **v15; // rdx
  unsigned int j; // edi
  void **v17; // r8
  void **v18; // rdx
  unsigned int k; // edi
  void **v20; // r8
  unsigned __int64 v22; // rcx
  unsigned int i; // r14d
  void **v24; // rcx
  unsigned int v25; // esi
  void *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-49h]
  char *v29; // [rsp+40h] [rbp-29h]
  char *v30; // [rsp+48h] [rbp-21h]
  void *v31; // [rsp+50h] [rbp-19h] BYREF
  __int64 v32; // [rsp+58h] [rbp-11h]
  __int64 v33; // [rsp+60h] [rbp-9h] BYREF
  void **v34; // [rsp+68h] [rbp-1h]
  unsigned int v35; // [rsp+D0h] [rbp+67h]
  char *v36; // [rsp+E8h] [rbp+7Fh]

  v30 = 0LL;
  v29 = 0LL;
  v36 = 0LL;
  v32 = 0LL;
  if ( !*(_WORD *)(a1 + 338) )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 336);
  if ( !(_WORD)v2 )
    return 0;
  v3 = *(unsigned __int16 *)(a1 + 334);
  v4 = (void ***)(a1 + 880);
  v5 = 16 * v3;
  v6 = *(unsigned __int16 *)(a1 + 334) << 6;
  v35 = 16 * v3;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeSubmissionQueueAssignmentPolicyInit();
    StorPortExtendedFunction(0LL, a1, 392 * (unsigned int)*(unsigned __int16 *)(v7 + 338));
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 336));
    if ( *v4 && *(_QWORD *)(a1 + 872) )
    {
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 334) * (unsigned int)*(unsigned __int16 *)(a1 + 336));
      v8 = (void ***)(a1 + 872);
    }
    else
    {
      v8 = (void ***)(a1 + 872);
    }
    goto LABEL_14;
  }
  v9 = (void ***)(a1 + 872);
  v10 = 16 * v2 * v3;
  v30 = (char *)**v4 + v5;
  v29 = &v30[v10];
  v36 = &v30[v10 + v10];
  NVMeZeroMemory(v30, 16 * *(unsigned __int16 *)(a1 + 334) * *(unsigned __int16 *)(a1 + 336));
  NVMeZeroMemory(v29, 16 * *(unsigned __int16 *)(a1 + 334) * *(unsigned __int16 *)(a1 + 336));
  NVMeZeroMemory(v36, 8 * *(unsigned __int16 *)(a1 + 338));
  v11 = 0;
  if ( !*(_WORD *)(a1 + 336) )
  {
LABEL_41:
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 338); ++i )
    {
      if ( i >= *(unsigned __int16 *)(a1 + 336) )
        break;
      v24 = *v4;
      v31 = 0LL;
      v25 = (_DWORD)v24 + 392 * i;
      v33 = 0LL;
      v34 = &v24[49 * i];
      if ( *(_BYTE *)(a1 + 20) )
      {
        v26 = *v24;
        v31 = v26;
      }
      else
      {
        v8 = v9;
        if ( (unsigned int)NVMeAllocateDmaBuffer(a1, v35, &v31, &v33, v28) )
          goto LABEL_13;
        v26 = v31;
        if ( !v31 )
          goto LABEL_13;
        v25 = (unsigned int)v34;
      }
      NVMeZeroMemory(v26, v35);
      v27 = v32 ? v32 : 0LL;
      NVMeCompletionQueueInit(a1, v25, i + 1, (_DWORD)v31, v33, (__int64)&v36[8 * i], v27);
    }
    return 1;
  }
  while ( 1 )
  {
    v12 = *v9;
    v31 = 0LL;
    v13 = (_DWORD)v12 + 136 * v11;
    v33 = 0LL;
    if ( !*(_BYTE *)(a1 + 20) )
      break;
    v14 = *v12;
    v31 = v14;
LABEL_40:
    NVMeZeroMemory(v14, v6);
    v22 = 16 * v11 * (unsigned __int64)*(unsigned __int16 *)(a1 + 334);
    NVMeSubmissionQueueInit(a1, v13, ++v11, (_DWORD)v31, v33, (__int64)&v30[v22], (__int64)&v29[v22]);
    if ( v11 >= *(unsigned __int16 *)(a1 + 336) )
      goto LABEL_41;
  }
  if ( !(unsigned int)NVMeAllocateDmaBuffer(a1, v6, &v31, &v33, v28) )
  {
    v14 = v31;
    if ( v31 )
      goto LABEL_40;
  }
  v8 = v9;
LABEL_13:
  v5 = v35;
LABEL_14:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v15 = *v8;
    if ( *v8 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(a1 + 336); ++j )
      {
        v17 = &v15[17 * j];
        if ( *v17 )
        {
          NVMeFreeDmaBuffer(a1, v6, v17, v17[1]);
          v15 = *v8;
        }
      }
    }
    v18 = *v4;
    if ( *v4 )
    {
      for ( k = 0; k < *(unsigned __int16 *)(a1 + 338); ++k )
      {
        v20 = &v18[49 * k];
        if ( *v20 )
        {
          NVMeFreeDmaBuffer(a1, v5, v20, v20[1]);
          v18 = *v4;
        }
      }
    }
    if ( v36 )
      StorPortExtendedFunction(1LL, a1, v36);
    if ( v32 )
      StorPortExtendedFunction(1LL, a1, v32);
    if ( v29 )
      StorPortExtendedFunction(1LL, a1, v29);
    if ( v30 )
      StorPortExtendedFunction(1LL, a1, v30);
    if ( *v4 )
      StorPortExtendedFunction(1LL, a1, *v4);
    if ( *v8 )
      StorPortExtendedFunction(1LL, a1, *v8);
  }
  *(_DWORD *)(a1 + 336) = 0;
  return 0;
}
