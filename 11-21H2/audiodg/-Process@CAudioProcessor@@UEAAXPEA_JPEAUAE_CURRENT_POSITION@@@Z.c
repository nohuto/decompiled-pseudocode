/*
 * XREFs of ?Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14001A0F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?BubbleInputFramesToOutput@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@@Z @ 0x140081A70 (-BubbleInputFramesToOutput@CAudioProcessor@@AEAAXPEBV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@.c)
 *     ?GetOutputEndpointBuffers@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400820E4 (-GetOutputEndpointBuffers@CAudioProcessor@@AEAAXPEBV-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 *     ?SetupInputConnectionsFromEndpoints@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEB_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140082628 (-SetupInputConnectionsFromEndpoints@CAudioProcessor@@AEAAXPEBV-$CAtlList@PEAVCConnectionNode@@VC.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x140082818 (McTemplateU0pq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioProcessor::Process(CAudioProcessor *this, __int64 *a2, struct AE_CURRENT_POSITION *a3)
{
  __int64 *v4; // rsi
  CAudioProcessor *v5; // r9
  _QWORD *v6; // r14
  _QWORD *v7; // r13
  _QWORD *v8; // r12
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rsi
  __int64 *v12; // r12
  __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  int v18; // eax
  unsigned __int64 i; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  __int64 v23; // rbx
  unsigned int v24; // eax
  int v25; // r8d
  unsigned __int64 j; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  _QWORD *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v42; // [rsp+78h] [rbp+10h]

  v42 = a2;
  v4 = a2;
  v5 = this;
  v6 = (_QWORD *)*((_QWORD *)this + 101);
  v7 = v6 + 12;
  v8 = v6 + 6;
  if ( v6[8] )
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)this + 39, 0LL);
    *((_QWORD *)this + 40) = v9;
    v10 = (_QWORD *)*v9;
    if ( *v9 )
    {
      do
      {
        this = (CAudioProcessor *)v10[2];
        v10 = (_QWORD *)*v10;
        *(_DWORD *)(*((_QWORD *)this + 13) + 12LL) = 0;
        *(_DWORD *)(*((_QWORD *)this + 13) + 32LL) = 0;
      }
      while ( v10 );
LABEL_4:
      v9 = (_QWORD *)*((_QWORD *)v5 + 40);
    }
  }
  else
  {
    if ( !v6[14] )
      return;
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)this + 39, 0LL);
    *((_QWORD *)this + 40) = v9;
    v38 = (_QWORD *)*v9;
    if ( *v9 )
    {
      do
      {
        this = (CAudioProcessor *)v38[2];
        v38 = (_QWORD *)*v38;
        *(_DWORD *)(*((_QWORD *)this + 13) + 12LL) = 2;
        *(_DWORD *)(*((_QWORD *)this + 13) + 32LL) = 0;
      }
      while ( v38 );
      goto LABEL_4;
    }
  }
  _InterlockedExchange64((volatile __int64 *)v5 + 39, (__int64)v9);
  *((_QWORD *)v5 + 40) = 0LL;
  if ( *((_DWORD *)v5 + 18) )
  {
    CAudioProcessor::SetupInputConnectionsFromEndpoints(this, v6 + 6, v4, a3);
    CAudioProcessor::BubbleInputFramesToOutput(v39, v6);
    CAudioProcessor::GetOutputEndpointBuffers(v40, v6 + 12, a3);
  }
  else
  {
    v11 = (_QWORD *)*v7;
    if ( *v7 )
    {
      v12 = v42;
      do
      {
        v13 = v11[2];
        v11 = (_QWORD *)*v11;
        v14 = (int)(*(float *)(v13 + 52) * (double)(int)*v12 / 10000000.0 + 0.5);
        **(_QWORD **)(v13 + 104) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct AE_CURRENT_POSITION *))(**(_QWORD **)(v13 + 128) + 24LL))(
                                     *(_QWORD *)(v13 + 128),
                                     v14,
                                     a3);
        *(_DWORD *)(*(_QWORD *)(v13 + 104) + 8LL) = v14;
        *(_QWORD *)(*(_QWORD *)(v13 + 104) + 24LL) = a3->hnsQPCPosition;
      }
      while ( v11 );
      v8 = v6 + 6;
    }
    v15 = v6[1];
    while ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 16);
      v15 = *(_QWORD *)(v15 + 8);
      v17 = *(_QWORD *)(v16 + 200);
      if ( v17 && *(_QWORD *)(v16 + 232) )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 16) + 32LL))(
                *(_QWORD *)(v16 + 16),
                *(unsigned int *)(**(_QWORD **)(v16 + 224) + 8LL));
        for ( i = 0LL; i < v17; ++i )
        {
          if ( i >= *(_QWORD *)(v16 + 200) )
            goto LABEL_61;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 192) + 8 * i) + 8LL) = v18;
        }
      }
    }
    v20 = (_QWORD *)*v8;
    if ( *v8 )
    {
      do
      {
        v21 = v20[2];
        v20 = (_QWORD *)*v20;
        *(_DWORD *)(*(_QWORD *)(v21 + 104) + 16LL) = 1094930515;
        (*(void (__fastcall **)(_QWORD, _QWORD, struct AE_CURRENT_POSITION *))(**(_QWORD **)(v21 + 120) + 24LL))(
          *(_QWORD *)(v21 + 120),
          *(_QWORD *)(v21 + 104),
          a3);
      }
      while ( v20 );
    }
    v4 = v42;
  }
  v22 = (_QWORD *)*v6;
  if ( *v6 )
  {
    while ( 1 )
    {
      v23 = v22[2];
      v22 = (_QWORD *)*v22;
      v24 = *(_DWORD *)(v23 + 336);
      if ( v24 >= 0x7FFFFFFF )
      {
        v25 = 1094930505;
      }
      else
      {
        v25 = 1094930515;
        if ( v24 >= 2 )
          v25 = 1094930482;
      }
      for ( j = 0LL; j < *(_QWORD *)(v23 + 200); ++j )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 192) + 8 * j) + 16LL) = v25;
      v27 = 0LL;
      v28 = *(_QWORD *)(v23 + 232);
      if ( v28 )
        break;
LABEL_29:
      if ( (byte_1400C1841 & 4) != 0 )
      {
        McTemplateU0pq_EventWriteTransfer(v27, &AudioCore_AECPUUsage, *(_QWORD *)(v23 + 16), 1LL);
        LODWORD(v28) = *(_DWORD *)(v23 + 232);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v23 + 16) + 24LL))(
        *(_QWORD *)(v23 + 16),
        *(unsigned int *)(v23 + 200),
        *(_QWORD *)(v23 + 192),
        (unsigned int)v28,
        *(_QWORD *)(v23 + 224));
      v30 = *(_QWORD *)(v23 + 200);
      if ( v30 >= *(_QWORD *)(v23 + 232) )
        v30 = *(_QWORD *)(v23 + 232);
      v31 = 0LL;
      if ( v30 )
      {
        while ( v31 < *(_QWORD *)(v23 + 200) )
        {
          v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 192) + 8 * v31) + 24LL);
          if ( v31 >= *(_QWORD *)(v23 + 232) )
            break;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 224) + 8 * v31) + 24LL) = v29;
          if ( v31 >= *(_QWORD *)(v23 + 232) )
            break;
          v32 = *(_QWORD *)(*(_QWORD *)(v23 + 224) + 8 * v31);
          if ( !*(_DWORD *)(v32 + 32) )
          {
            if ( v31 >= *(_QWORD *)(v23 + 200) )
              goto LABEL_61;
            v29 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v23 + 192) + 8 * v31) + 32LL);
            *(_DWORD *)(v32 + 32) = v29;
          }
          if ( ++v31 >= v30 )
            goto LABEL_41;
        }
        goto LABEL_61;
      }
LABEL_41:
      if ( (byte_1400C1841 & 4) != 0 )
        McTemplateU0pq_EventWriteTransfer(v29, &AudioCore_AECPUUsage, *(_QWORD *)(v23 + 16), 2LL);
      if ( !v22 )
        goto LABEL_44;
    }
    while ( v27 < *(_QWORD *)(v23 + 232) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 224) + 8 * v27++) + 16LL) = v25;
      LODWORD(v28) = *(_QWORD *)(v23 + 232);
      if ( v27 >= *(_QWORD *)(v23 + 232) )
        goto LABEL_29;
    }
LABEL_61:
    ATL::AtlThrowImpl(-2147024809);
  }
LABEL_44:
  v33 = (_QWORD *)*v7;
  if ( *v7 )
  {
    do
    {
      v41 = 0LL;
      v34 = v33[2];
      v33 = (_QWORD *)*v33;
      if ( *(_DWORD *)(*(_QWORD *)(v34 + 104) + 8LL) < (unsigned int)(int)(*(float *)(v34 + 52)
                                                                         * (double)(int)*v4
                                                                         / 10000000.0
                                                                         + 0.5)
        && (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v34 + 128))(
             *(_QWORD *)(v34 + 128),
             &GUID_f8520dd3_8f9d_4437_9861_62f584c33dd6,
             &v41) >= 0
        && v41
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v41 + 24LL))(v41) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v41 + 32LL))(v41, *(_QWORD *)(v34 + 104));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v34 + 128) + 32LL))(
          *(_QWORD *)(v34 + 128),
          *(_QWORD *)(v34 + 104));
      }
      v35 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        v35 = v41;
      }
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    while ( v33 );
  }
  v36 = (_QWORD *)*v8;
  if ( *v8 )
  {
    do
    {
      v37 = v36[2];
      v36 = (_QWORD *)*v36;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v37 + 120) + 32LL))(
        *(_QWORD *)(v37 + 120),
        *(unsigned int *)(*(_QWORD *)(v37 + 104) + 8LL),
        **(_QWORD **)(v37 + 104));
    }
    while ( v36 );
  }
}
