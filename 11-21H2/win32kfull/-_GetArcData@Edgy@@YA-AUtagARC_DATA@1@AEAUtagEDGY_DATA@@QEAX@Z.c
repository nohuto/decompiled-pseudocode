/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C020804C
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C0208B8C (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     _GetPointerDeviceType @ 0x1C016C360 (_GetPointerDeviceType.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C016D61C (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C02085C8 (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C02087C8 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 */

unsigned __int64 __fastcall Edgy::_GetArcData(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  int v6; // ebp
  unsigned int v7; // r12d
  unsigned int *v8; // r14
  int v9; // r13d
  unsigned int v10; // ebx
  const struct tagPOINTER_INFO *PointerInfo; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // r13d
  BOOL v15; // r12d
  const unsigned __int16 *v16; // rdx
  int PointerDeviceType; // ebx
  __int64 v18; // r8
  unsigned int *v19; // r9
  unsigned int DisambiguationArcData; // r15d
  BOOL IsLegacyDevice; // eax
  const struct tagPOINTER_INFO **v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r11d
  int v29; // r8d
  int v30; // edx
  int v31; // r9d
  int v32; // r10d
  int v33; // eax
  int v34; // eax
  int v35; // edx
  __int64 Instance; // rbx
  unsigned int v37; // eax
  __int64 Inertia; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  float v40; // xmm1_4
  float v41; // xmm1_4
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  __int128 v52; // [rsp+30h] [rbp-78h]
  char v53[96]; // [rsp+48h] [rbp-60h] BYREF
  int v54; // [rsp+B0h] [rbp+8h]
  unsigned int v55; // [rsp+B8h] [rbp+10h]
  int v56; // [rsp+C0h] [rbp+18h]
  int v57; // [rsp+C8h] [rbp+20h]

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  v5 = a1;
  v6 = 1;
  *(_OWORD *)(a1 + 32) = 0LL;
  v7 = *(_DWORD *)(a3 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = a3;
  v55 = 0;
  v8 = 0LL;
  v54 = 0;
  v9 = 0;
  v10 = 0;
  if ( v7 )
  {
    do
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a3, v10);
      a1 = (unsigned __int64)PointerInfo;
      if ( PointerInfo )
      {
        ++v55;
        v12 = *((_DWORD *)PointerInfo + 3);
        if ( (v12 & 4) != 0 )
        {
          ++v9;
          if ( (v12 & 0x2000) != 0 )
          {
            v8 = (unsigned int *)a1;
            *(_QWORD *)(v5 + 40) = *(_QWORD *)(a1 + 56);
            *(_DWORD *)(v5 + 48) = *(_DWORD *)(a1 + 64);
          }
        }
        v13 = *(_QWORD *)(a2 + 176);
        if ( (unsigned int)(*(_DWORD *)a1 - 2) > 1 )
          v6 = 0;
        if ( v13 && *(_QWORD *)(a1 + 16) != v13 )
          v6 = 0;
      }
      ++v10;
    }
    while ( v10 < v7 );
    v54 = v9;
  }
  v14 = 0;
  v56 = 0;
  v15 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v6 && v8 && v54 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v8 + 2));
    a1 = (unsigned int)(PointerDeviceType - 1);
    if ( (a1 & 0xFFFFFFFD) != 0 )
    {
      v6 = 0;
      DisambiguationArcData = 0;
      goto LABEL_36;
    }
    IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)v8 + 2), v16, v18, v19);
    v22 = (const struct tagPOINTER_INFO **)Edgy::_HitTestEdgyRegion(
                                             v53,
                                             a2,
                                             *((_QWORD *)v8 + 2),
                                             *((_QWORD *)v8 + 7),
                                             PointerDeviceType,
                                             IsLegacyDevice);
    a1 = (unsigned __int64)*v22;
    v52 = *(_OWORD *)v22;
    if ( *v22 )
    {
      v14 = 1;
      *(_DWORD *)(v5 + 24) = (unsigned int)v22[2];
      *(_QWORD *)(v5 + 16) = a1;
      v23 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v5 + 32) = *((_QWORD *)&v52 + 1);
      v56 = *(_DWORD *)(*((_QWORD *)&v52 + 1) + 4LL);
      v24 = ValidateHwnd(v23);
      v15 = 1;
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 40);
        if ( *(char *)(v25 + 19) >= 0 && *(char *)(v25 + 20) >= 0 )
          v15 = 0;
      }
    }
    else
    {
      v14 = 0;
    }
  }
  else
  {
    v56 = 0;
    DisambiguationArcData = 0;
    if ( !v6 )
      goto LABEL_36;
  }
  DisambiguationArcData = 0;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    a1 = *(_QWORD *)(a2 + 184);
    if ( a1 )
    {
      v26 = ValidateHwnd(*(_QWORD *)(a1 + 8));
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 40);
        if ( *(char *)(v27 + 19) >= 0 && *(char *)(v27 + 20) >= 0 )
        {
          DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)v5, 0LL);
LABEL_35:
          *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 184);
          *(_QWORD *)(v5 + 32) = *(_QWORD *)(a2 + 208);
          *(_DWORD *)(v5 + 24) = *(_DWORD *)(a2 + 216);
          goto LABEL_36;
        }
      }
      DisambiguationArcData = 0;
    }
    v15 = 1;
    goto LABEL_35;
  }
LABEL_36:
  v28 = *(_DWORD *)(a2 + 16);
  if ( v28 )
    goto LABEL_47;
  a1 = (unsigned int)(*(_DWORD *)(v5 + 48) - *(_DWORD *)(a2 + 248));
  if ( (unsigned int)a1 >= *(_DWORD *)(a2 + 252) || !v8 || *(_QWORD *)(a2 + 240) != *((_QWORD *)v8 + 2) )
    goto LABEL_47;
  v29 = *(_DWORD *)(v5 + 40);
  v30 = *(_DWORD *)(a2 + 256);
  v31 = *(_DWORD *)(v5 + 44);
  a1 = (unsigned int)(v30 - v29);
  v32 = *(_DWORD *)(a2 + 260);
  v33 = v29 - v30;
  if ( v29 <= v30 )
    v33 = v30 - v29;
  if ( v33 >= *(_DWORD *)(a2 + 264) )
    goto LABEL_47;
  a1 = (unsigned int)(v32 - v31);
  v34 = v31 - v32;
  if ( v31 <= v32 )
    v34 = v32 - v31;
  if ( v34 < *(_DWORD *)(a2 + 268) )
  {
    v57 = 1;
  }
  else
  {
LABEL_47:
    v57 = 0;
    v35 = 0;
    if ( v28 )
      goto LABEL_62;
  }
  v35 = 0;
  if ( v14 && (*v8 == 2 || *v8 == 3) )
  {
    Instance = CInertiaManager::GetInstance(a1, 0LL, 0LL);
    v37 = CInertiaManager::InertiaSourceFromPointerType(*v8);
    Inertia = CInertiaManager::QueryInertia(Instance, *((_QWORD *)v8 + 6), v37);
    v35 = 0;
    if ( Inertia )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v35 = 0;
      if ( PerformanceCounter.QuadPart - *(_QWORD *)(Inertia + 176) < *(_QWORD *)(a2 + 280) )
      {
        if ( (v40 = *(float *)(Inertia + 16), v40 > 0.0) && !*(_DWORD *)(v5 + 24)
          || v40 < 0.0 && *(_DWORD *)(v5 + 24) == 2
          || (v41 = *(float *)(Inertia + 20), v41 > 0.0) && *(_DWORD *)(v5 + 24) == 1
          || v41 < 0.0 && *(_DWORD *)(v5 + 24) == 3 )
        {
          v35 = 1;
        }
      }
    }
  }
LABEL_62:
  v42 = (v54 == 0) | 2;
  if ( !v8 )
    v42 = v54 == 0;
  v43 = v42 | 4;
  if ( v55 <= 1 )
    v43 = v42;
  v44 = v43 | 8;
  if ( !v6 )
    v44 = v43;
  v45 = v44 | 0x10;
  if ( !v14 )
    v45 = v44;
  v46 = v45 | 0x80;
  if ( !v56 )
    v46 = v45;
  v47 = v46 | 0x1000;
  if ( !v15 )
    v47 = v46;
  v48 = DisambiguationArcData | v47;
  v49 = v48 | 0x40;
  if ( !v57 )
    v49 = v48;
  v50 = v49 | 0x20;
  if ( !v35 )
    v50 = v49;
  *(_DWORD *)(v5 + 8) = v50;
  return v5;
}
