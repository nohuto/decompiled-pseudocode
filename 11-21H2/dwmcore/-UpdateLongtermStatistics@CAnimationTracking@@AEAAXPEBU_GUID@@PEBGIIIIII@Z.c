/*
 * XREFs of ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x180074CF4
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800745D0 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180027CD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801CACFC (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x1801CAF80 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CAnimationTracking::UpdateLongtermStatistics(
        CAnimationTracking *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  size_t *v10; // r12
  __int64 v13; // r14
  const struct _GUID *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 Data1_low; // rax
  __int64 v18; // rbx
  __int64 v19; // r10
  int v20; // r9d
  __int64 v21; // rax
  bool v22; // zf
  unsigned int v23; // eax
  struct _GUID *v24; // rax
  int v25; // r11d
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int16 *v34; // rax
  int v35; // r9d
  int v36; // r9d
  int v37; // r9d
  int v38; // r9d
  int v39; // r9d
  int v40; // r9d
  char *v41; // rax
  signed __int64 v42; // r8
  int v43; // ecx
  int v44; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v46; // [rsp+50h] [rbp+8h]

  v10 = (size_t *)a3;
  v13 = 0LL;
  if ( !a3 )
  {
    v14 = a2;
    v15 = 2LL;
    v16 = 314159LL;
    do
    {
      Data1_low = LOBYTE(v14->Data1);
      v14 = (const struct _GUID *)((char *)v14 + 8);
      v16 = v14[-1].Data4[7]
          + 37
          * (v14[-1].Data4[6]
           + 37
           * (v14[-1].Data4[5]
            + 37
            * (v14[-1].Data4[4]
             + 37 * (v14[-1].Data4[3] + 37 * (v14[-1].Data4[2] + 37 * (v14[-1].Data4[1] + 37 * (Data1_low + 37 * v16)))))));
      --v15;
    }
    while ( v15 );
    goto LABEL_4;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v29 = 2 * v13;
  v16 = 314159LL;
  if ( 2 * v13 >= 8 )
  {
    v30 = (unsigned __int64)v29 >> 3;
    v29 -= 8 * ((unsigned __int64)v29 >> 3);
    do
    {
      v31 = *((unsigned __int8 *)a3 + 6)
          + 37
          * (*((unsigned __int8 *)a3 + 5)
           + 37
           * (*((unsigned __int8 *)a3 + 4)
            + 37
            * (*((unsigned __int8 *)a3 + 3)
             + 37
             * (*((unsigned __int8 *)a3 + 2)
              + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v16))))));
      v32 = *((unsigned __int8 *)a3 + 7);
      a3 += 4;
      v16 = v32 + 37 * v31;
      --v30;
    }
    while ( v30 );
  }
  if ( v29 < 1 || v29 > 7 )
    goto LABEL_4;
  v35 = v29 - 1;
  if ( !v35 )
    goto LABEL_76;
  v36 = v35 - 1;
  if ( !v36 )
  {
LABEL_75:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (unsigned __int16 *)((char *)a3 + 1);
LABEL_76:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    goto LABEL_4;
  }
  v37 = v36 - 1;
  if ( !v37 )
  {
LABEL_74:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_75;
  }
  v38 = v37 - 1;
  if ( !v38 )
  {
LABEL_73:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_74;
  }
  v39 = v38 - 1;
  if ( !v39 )
  {
LABEL_72:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_73;
  }
  v40 = v39 - 1;
  if ( !v40 )
  {
LABEL_71:
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_72;
  }
  if ( v40 == 1 )
  {
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (unsigned __int16 *)((char *)a3 + 1);
    goto LABEL_71;
  }
LABEL_4:
  v18 = 0LL;
  v19 = v16 & (-1LL << (*((_BYTE *)this + 548) & 0x1F));
LABEL_5:
  if ( v18 )
    goto LABEL_8;
  v20 = *((_DWORD *)this + 137) >> 5;
  if ( v20 )
  {
    v18 = *((_QWORD *)this + 69)
        + 8LL
        * ((37
          * (BYTE6(v19)
           + 37
           * (BYTE5(v19)
            + 37
            * (BYTE4(v19)
             + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v19)) & (unsigned int)(v20 - 1));
LABEL_8:
    while ( 1 )
    {
      v18 = *(_QWORD *)v18;
      if ( (v18 & 1) != 0 )
        break;
      if ( v19 == ((-1LL << (*((_BYTE *)this + 548) & 0x1F)) & *(_QWORD *)(v18 + 8)) )
      {
        if ( !v18 )
          break;
        if ( a2 )
        {
          v21 = *(_QWORD *)(v18 + 32) - *(_QWORD *)&a2->Data1;
          if ( !v21 )
            v21 = *(_QWORD *)(v18 + 40) - *(_QWORD *)a2->Data4;
          v22 = v21 == 0;
        }
        else
        {
          if ( *(_QWORD *)(v18 + 24) != v13 )
            goto LABEL_5;
          v41 = *(char **)(v18 + 16);
          v42 = (char *)v10 - v41;
          do
          {
            v43 = *(unsigned __int16 *)&v41[v42];
            v44 = *(unsigned __int16 *)v41 - v43;
            if ( v44 )
              break;
            v41 += 2;
          }
          while ( v43 );
          v22 = v44 == 0;
        }
        if ( !v22 )
          goto LABEL_5;
        goto LABEL_16;
      }
    }
  }
  if ( *((_DWORD *)this + 136) < 0x40u )
  {
    v24 = (struct _GUID *)DefaultHeap::AllocClear(0x98uLL);
    v18 = (__int64)v24;
    if ( !v24 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_DWORD *)v24[7].Data4 = -1;
    v25 = 0;
    *(_QWORD *)&v24[3].Data1 = v16;
    if ( a2 )
    {
      v24[2] = *a2;
    }
    else
    {
      *(_QWORD *)v24[1].Data4 = v13;
      v33 = v13 + 1;
      v34 = (unsigned __int16 *)operator new(saturated_mul(v33, 2uLL));
      *(_QWORD *)(v18 + 16) = v34;
      if ( v34 )
        StringCchCopyW(v34, v33, v10);
      else
        v25 = -2147024882;
    }
    *(_QWORD *)(v18 + 8) = v16;
    v26 = *((_DWORD *)this + 137);
    v46 = v16 & (-1LL << (v26 & 0x1F));
    v27 = *((_QWORD *)this + 69);
    v28 = (37
         * (BYTE6(v46)
          + 37
          * (BYTE5(v46)
           + 37
           * (BYTE4(v46)
            + 37
            * ((((unsigned int)v16 & (-1 << (v26 & 0x1F))) >> 24)
             + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
         + HIBYTE(v46)) & ((v26 >> 5) - 1);
    *(_QWORD *)v18 = *(_QWORD *)(v27 + 8 * v28);
    *(_QWORD *)(v27 + 8 * v28) = v18;
    ++*((_DWORD *)this + 136);
    if ( v25 >= 0 )
    {
LABEL_16:
      ++*(_DWORD *)(v18 + 56);
      if ( a5 < *(_DWORD *)(v18 + 120) )
        *(_DWORD *)(v18 + 120) = a5;
      if ( a5 > *(_DWORD *)(v18 + 124) )
        *(_DWORD *)(v18 + 124) = a5;
      *(_QWORD *)(v18 + 128) += a6;
      *(_QWORD *)(v18 + 136) += a9;
      *(_QWORD *)(v18 + 144) += a7;
      if ( a4 )
      {
        if ( a4 <= 5 )
        {
          ++*(_DWORD *)(v18 + 100);
        }
        else if ( a4 <= 0xA )
        {
          ++*(_DWORD *)(v18 + 104);
        }
        else if ( a4 <= 0xF )
        {
          ++*(_DWORD *)(v18 + 108);
        }
        else if ( a4 <= 0x19 )
        {
          ++*(_DWORD *)(v18 + 112);
        }
        else if ( a4 <= 0x32 )
        {
          ++*(_DWORD *)(v18 + 116);
        }
      }
      else
      {
        ++*(_DWORD *)(v18 + 96);
      }
      if ( a7 >= 0x32 )
      {
        if ( a7 >= 0x64 )
        {
          if ( a7 >= 0xC8 )
          {
            if ( a7 < 0x1F4 )
              ++*(_DWORD *)(v18 + 80);
          }
          else
          {
            ++*(_DWORD *)(v18 + 76);
          }
        }
        else
        {
          ++*(_DWORD *)(v18 + 72);
        }
      }
      else
      {
        ++*(_DWORD *)(v18 + 68);
      }
      if ( a8 < 0xC8 )
      {
        ++*(_DWORD *)(v18 + 84);
      }
      else if ( a8 < 0x1F4 )
      {
        ++*(_DWORD *)(v18 + 88);
      }
      else if ( a8 < 0x7D0 )
      {
        ++*(_DWORD *)(v18 + 92);
      }
      v23 = 1000 * a9 / a5;
      if ( v23 >= 0x32 )
      {
        if ( v23 >= 0x96 )
          ++*(_DWORD *)(v18 + 64);
        else
          ++*(_DWORD *)(v18 + 60);
      }
    }
    else
    {
      CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
        (CAnimationTracking::AnimationScenarioLongtermStatistics *)v18,
        v28);
    }
  }
  if ( GetTickCount64() >= *((_QWORD *)this + 70) )
    CAnimationTracking::SendLongtermStatistics(this);
}
