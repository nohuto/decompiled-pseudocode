/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0110FB4
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0018FD8 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C001B90C (ndisIfRegisterInterfaceEx.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A3F8 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002CD80 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C013E1D0 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C013E1F0 (NdisIfAllocateNetLuidIndexEx.c)
 * Callees:
 *     WPP_RECORDER_SF_dL @ 0x1C0019460 (WPP_RECORDER_SF_dL_ea_1C0019460.c)
 *     WPP_RECORDER_SF_dllL @ 0x1C0019504 (WPP_RECORDER_SF_dllL.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A098 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisIfWriteRegistry @ 0x1C013DFE8 (ndisIfWriteRegistry.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(unsigned __int16 a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v4; // esi
  unsigned int v6; // edi
  const void **v7; // r15
  char *v8; // r12
  _BYTE *v9; // r13
  unsigned int v10; // ebx
  unsigned int *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  PVOID *v14; // rcx
  _BYTE *v15; // r10
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v21; // eax
  __int64 v22; // r11
  char *v23; // r10
  int v24; // eax
  char v25; // bp
  size_t v26; // r14
  unsigned int v27; // r12d
  __int64 Pool2; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  char *v31; // rcx
  _QWORD *v32; // rax
  void *v33; // rcx
  void **v34; // rax
  int v35; // [rsp+20h] [rbp-88h]
  char v36; // [rsp+54h] [rbp-54h]

  v4 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = a2;
  v36 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, 0LL, 0xAu, v35);
    v11 = a2;
  }
  if ( a3 )
  {
    *v11 = 0;
LABEL_5:
    ndisWaitForKernelObject(&Mutex);
    v14 = (PVOID *)qword_1C00F5E88;
    if ( qword_1C00F5E88 == &qword_1C00F5E88 )
    {
LABEL_29:
      v16 = 0LL;
    }
    else
    {
      v12 = a1;
      while ( *((_WORD *)v14 + 8) != a1 )
      {
        v14 = (PVOID *)*v14;
        if ( v14 == &qword_1C00F5E88 )
          goto LABEL_29;
      }
      v7 = (const void **)v14;
      v15 = v14[6];
      v16 = *((unsigned int *)v14 + 10);
      if ( !a3 )
      {
        if ( (unsigned int)v16 < (v6 >> 3) + 1 )
        {
          v10 = -1073741072;
        }
        else if ( ((unsigned __int8)(1 << (v6 & 7)) & v15[(unsigned __int64)v6 >> 3]) == 0 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), 3u, v13, 0xCu, v35);
          v10 = -1073741072;
        }
        goto LABEL_11;
      }
      v21 = 0;
      if ( !(_DWORD)v16 )
        goto LABEL_47;
      v12 = (__int64)v14[6];
      while ( *(_BYTE *)v12 == 0xFF )
      {
        v4 += 8;
        ++v21;
        ++v12;
        if ( v21 >= (unsigned int)v16 )
          goto LABEL_47;
      }
      v22 = v21;
      v13 = 0LL;
      v23 = &v15[v21];
      v12 = 1LL;
      v24 = (unsigned __int8)*v23;
      while ( (v24 & (unsigned int)v12) != 0 )
      {
        v12 = (unsigned int)(2 * v12);
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= 8 )
          goto LABEL_47;
      }
      v36 = v13;
      v4 += v13;
      *v23 = v12 | v24;
      v8 = v23;
      if ( a4 )
      {
        *((_BYTE *)v14[7] + v22) |= v12;
        v9 = (char *)v14[7] + v22;
      }
      if ( !v23 )
      {
LABEL_47:
        if ( (unsigned int)(8 * v16 + 1) >= 0x1001 )
          goto LABEL_48;
      }
    }
    if ( !a3 )
    {
LABEL_11:
      if ( !v7 )
        v10 = -1073741072;
      goto LABEL_13;
    }
    if ( v8 )
    {
      v25 = v36;
LABEL_33:
      if ( a4 && (v10 = ndisIfWriteRegistry(v7, v12, v13, v16)) != 0 )
      {
        if ( v8 )
          *v8 &= ~(1 << v25);
        if ( v9 )
          *v9 &= ~(1 << v25);
      }
      else
      {
        *a2 = v4;
      }
      goto LABEL_13;
    }
    v26 = v7 != 0LL ? (unsigned int)v16 : 0;
    v27 = v26 + 1;
    v4 = 8 * v26;
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(2 * (v26 + 1) + 64), 1718174798);
    v29 = Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 16) = a1;
      *(_DWORD *)(Pool2 + 40) = v27;
      *(_QWORD *)(Pool2 + 56) = Pool2 + 64 + v27;
      *(_QWORD *)(Pool2 + 48) = Pool2 + 64;
      *(_BYTE *)(v26 + Pool2 + 64) = 1;
      v30 = *(_QWORD *)(Pool2 + 56);
      if ( a4 )
      {
        *(_BYTE *)(v26 + v30) = 1;
        v9 = (_BYTE *)(v26 + *(_QWORD *)(v29 + 56));
      }
      else
      {
        *(_BYTE *)(v26 + v30) = 0;
      }
      v31 = *(char **)(v29 + 48);
      v25 = 0;
      v8 = &v31[v26];
      if ( v7 )
      {
        memmove(v31, v7[6], v26);
        memmove(*(void **)(v29 + 56), v7[7], v26);
        v33 = (void *)*v7;
        if ( *((const void ***)*v7 + 1) != v7 )
          goto LABEL_53;
        v34 = (void **)v7[1];
        if ( *v34 != v7 )
          goto LABEL_53;
        *v34 = v33;
        *((_QWORD *)v33 + 1) = v34;
        ExFreePoolWithTag(v7, 0);
      }
      v32 = qword_1C00F5E88;
      if ( *((PVOID **)qword_1C00F5E88 + 1) == &qword_1C00F5E88 )
      {
        *(_QWORD *)v29 = qword_1C00F5E88;
        v7 = (const void **)v29;
        *(_QWORD *)(v29 + 8) = &qword_1C00F5E88;
        v32[1] = v29;
        qword_1C00F5E88 = (PVOID)v29;
        goto LABEL_33;
      }
LABEL_53:
      __fastfail(3u);
    }
LABEL_48:
    v10 = -1073741670;
LABEL_13:
    KeReleaseMutex(&Mutex, 0);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dllL(*((_QWORD *)WPP_GLOBAL_Control + 8), v17, v18, v19, v35);
    return v10;
  }
  v6 = *v11;
  if ( *v11 <= 0x1000 )
    goto LABEL_5;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_c07ec7be4eec343cc9b8d30db2584b3f_Traceguids,
      *v11);
  return 3221226224LL;
}
