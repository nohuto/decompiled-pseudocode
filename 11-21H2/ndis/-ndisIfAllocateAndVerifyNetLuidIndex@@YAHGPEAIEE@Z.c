/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C010ABF8
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1C0021AA4 (ndisIfRegisterInterfaceEx.c)
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0022F50 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A280 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002D278 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C01325F0 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C0132610 (NdisIfAllocateNetLuidIndexEx.c)
 * Callees:
 *     WPP_RECORDER_SF_dllL @ 0x1C0022980 (WPP_RECORDER_SF_dllL.c)
 *     WPP_RECORDER_SF_dL @ 0x1C0022A38 (WPP_RECORDER_SF_dL_ea_1C0022A38.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisIfWriteRegistry @ 0x1C0132408 (ndisIfWriteRegistry.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(__int16 a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v4; // ebp
  char *v6; // r15
  _BYTE *v7; // r12
  unsigned int v8; // ebx
  unsigned int *v9; // rax
  __int64 v10; // r8
  PVOID *v11; // rdi
  _BYTE *v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // ebp
  __int64 v19; // rax
  _BYTE *v20; // rdx
  char *v21; // r11
  __int64 v22; // r10
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  char v26; // r14
  unsigned int v27; // r13d
  unsigned int v28; // ebx
  __int64 Pool2; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  char *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  PVOID *v35; // rax
  int v36; // [rsp+20h] [rbp-88h]
  char v37; // [rsp+50h] [rbp-58h]

  v4 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = a2;
  v37 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, 0LL, 0xAu, v36);
    v9 = a2;
  }
  if ( a3 )
  {
    *v9 = 0;
LABEL_5:
    ndisWaitForKernelObject(&Mutex);
    v11 = (PVOID *)qword_1C00ECE88;
    if ( qword_1C00ECE88 == &qword_1C00ECE88 )
    {
LABEL_32:
      v11 = 0LL;
      if ( !a3 )
      {
LABEL_10:
        if ( !v11 )
          v8 = -1073741072;
        goto LABEL_12;
      }
      v13 = 0;
    }
    else
    {
      while ( *((_WORD *)v11 + 8) != a1 )
      {
        v11 = (PVOID *)*v11;
        if ( v11 == &qword_1C00ECE88 )
          goto LABEL_32;
      }
      v12 = v11[6];
      v13 = *((_DWORD *)v11 + 10);
      if ( !a3 )
      {
        if ( v13 < (v4 >> 3) + 1 )
        {
          v8 = -1073741072;
        }
        else if ( ((unsigned __int8)(1 << (v4 & 7)) & v12[(unsigned __int64)v4 >> 3]) == 0 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 3u, v10, 0xCu, v36);
          v8 = -1073741072;
        }
        goto LABEL_10;
      }
      v18 = 0;
      v19 = 0LL;
      if ( !v13 )
        goto LABEL_45;
      v20 = v11[6];
      while ( *v20 == 0xFF )
      {
        v18 += 8;
        v19 = (unsigned int)(v19 + 1);
        ++v20;
        if ( (unsigned int)v19 >= v13 )
          goto LABEL_45;
      }
      v21 = &v12[v19];
      v22 = (unsigned int)v19;
      v23 = (unsigned __int8)v12[v19];
      v24 = 1;
      v25 = 0;
      while ( (v23 & v24) != 0 )
      {
        v24 *= 2;
        if ( (unsigned int)++v25 >= 8 )
          goto LABEL_45;
      }
      v37 = v25;
      v18 += v25;
      *v21 = v24 | v23;
      v6 = v21;
      if ( a4 )
      {
        *((_BYTE *)v11[7] + v22) |= v24;
        v7 = (char *)v11[7] + v22;
      }
      if ( !v21 )
      {
LABEL_45:
        if ( 8 * v13 + 1 >= 0x1001 )
          goto LABEL_46;
      }
      if ( v6 )
      {
        v26 = v37;
LABEL_28:
        v8 = 0;
        if ( a4 && (v8 = ndisIfWriteRegistry(v11)) != 0 )
        {
          if ( v6 )
            *v6 &= ~(1 << v26);
          if ( v7 )
            *v7 &= ~(1 << v26);
        }
        else
        {
          *a2 = v18;
        }
        goto LABEL_12;
      }
    }
    v27 = v11 != 0LL ? v13 : 0;
    v28 = v27 + 1;
    v18 = 8 * v27;
    Pool2 = ExAllocatePool2(64LL, 2 * (v27 + 1) + 64, 1718174798);
    v30 = Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 16) = a1;
      *(_DWORD *)(Pool2 + 40) = v28;
      *(_QWORD *)(Pool2 + 56) = Pool2 + 64 + v28;
      *(_QWORD *)(Pool2 + 48) = Pool2 + 64;
      *(_BYTE *)(v27 + Pool2 + 64) = 1;
      v31 = *(_QWORD *)(Pool2 + 56);
      if ( a4 )
      {
        *(_BYTE *)(v27 + v31) = 1;
        v7 = (_BYTE *)(v27 + *(_QWORD *)(v30 + 56));
      }
      else
      {
        *(_BYTE *)(v27 + v31) = 0;
      }
      v32 = *(char **)(v30 + 48);
      v26 = 0;
      v6 = &v32[v27];
      if ( v11 )
      {
        memmove(v32, v11[6], v27);
        memmove(*(void **)(v30 + 56), v11[7], v27);
        v34 = *v11;
        if ( *((PVOID **)*v11 + 1) != v11 )
          goto LABEL_51;
        v35 = (PVOID *)v11[1];
        if ( *v35 != v11 )
          goto LABEL_51;
        *v35 = v34;
        v34[1] = v35;
        ExFreePoolWithTag(v11, 0);
      }
      v33 = qword_1C00ECE88;
      if ( *((PVOID **)qword_1C00ECE88 + 1) == &qword_1C00ECE88 )
      {
        *(_QWORD *)v30 = qword_1C00ECE88;
        v11 = (PVOID *)v30;
        *(_QWORD *)(v30 + 8) = &qword_1C00ECE88;
        v33[1] = v30;
        qword_1C00ECE88 = (PVOID)v30;
        goto LABEL_28;
      }
LABEL_51:
      __fastfail(3u);
    }
LABEL_46:
    v8 = -1073741670;
LABEL_12:
    KeReleaseMutex(&Mutex, 0);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dllL(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v15, v16, v36);
    return v8;
  }
  v4 = *v9;
  if ( *v9 <= 0x1000 )
    goto LABEL_5;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_c07ec7be4eec343cc9b8d30db2584b3f_Traceguids,
      *v9);
  return 3221226224LL;
}
