/*
 * XREFs of ?Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14000B010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BubbleInputFramesToOutput@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@@Z @ 0x140039B2A (-BubbleInputFramesToOutput@CAudioProcessor@@AEAAXPEBV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@.c)
 *     ?GetOutputEndpointBuffers@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140039C22 (-GetOutputEndpointBuffers@CAudioProcessor@@AEAAXPEBV-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 *     ?SetupInputConnectionsFromEndpoints@CAudioProcessor@@AEAAXPEBV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEB_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140039C8C (-SetupInputConnectionsFromEndpoints@CAudioProcessor@@AEAAXPEBV-$CAtlList@PEAVCConnectionNode@@VC.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x140039D32 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
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
  __int64 *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rsi
  __int64 *v13; // r12
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  int v19; // eax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // rbx
  unsigned int v25; // eax
  int v26; // edx
  unsigned __int64 i; // rcx
  unsigned __int64 j; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v43; // [rsp+78h] [rbp+10h]

  v43 = a2;
  v4 = a2;
  v5 = this;
  v6 = (_QWORD *)*((_QWORD *)this + 101);
  v7 = v6 + 12;
  v8 = v6 + 6;
  if ( v6[8] )
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)this + 39, 0LL);
    v10 = (__int64 *)((char *)this + 320);
    *((_QWORD *)this + 40) = v9;
    v11 = (_QWORD *)*v9;
    if ( *v9 )
    {
      do
      {
        this = (CAudioProcessor *)v11[2];
        v11 = (_QWORD *)*v11;
        *(_DWORD *)(*((_QWORD *)this + 13) + 12LL) = 0;
        *(_DWORD *)(*((_QWORD *)this + 13) + 32LL) = 0;
      }
      while ( v11 );
    }
  }
  else
  {
    if ( !v6[14] )
      return;
    v38 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)this + 39, 0LL);
    v10 = (__int64 *)((char *)this + 320);
    *((_QWORD *)this + 40) = v38;
    v39 = (_QWORD *)*v38;
    if ( *v38 )
    {
      do
      {
        this = (CAudioProcessor *)v39[2];
        v39 = (_QWORD *)*v39;
        *(_DWORD *)(*((_QWORD *)this + 13) + 12LL) = 2;
        *(_DWORD *)(*((_QWORD *)this + 13) + 32LL) = 0;
      }
      while ( v39 );
    }
  }
  _InterlockedExchange64((volatile __int64 *)v5 + 39, *v10);
  *v10 = 0LL;
  if ( *((_DWORD *)v5 + 18) )
  {
    CAudioProcessor::SetupInputConnectionsFromEndpoints(this, v6 + 6, v4, a3);
    CAudioProcessor::BubbleInputFramesToOutput(v40, v6);
    CAudioProcessor::GetOutputEndpointBuffers(v41, v6 + 12, a3);
  }
  else
  {
    v12 = (_QWORD *)*v7;
    if ( *v7 )
    {
      v13 = v43;
      do
      {
        v14 = v12[2];
        v12 = (_QWORD *)*v12;
        v15 = (int)(*(float *)(v14 + 52) * (double)(int)*v13 / 10000000.0 + 0.5);
        **(_QWORD **)(v14 + 104) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct AE_CURRENT_POSITION *))(**(_QWORD **)(v14 + 128) + 24LL))(
                                     *(_QWORD *)(v14 + 128),
                                     v15,
                                     a3);
        *(_DWORD *)(*(_QWORD *)(v14 + 104) + 8LL) = v15;
        *(_QWORD *)(*(_QWORD *)(v14 + 104) + 24LL) = a3->hnsQPCPosition;
      }
      while ( v12 );
      v8 = v6 + 6;
    }
    v16 = v6[1];
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + 16);
        v16 = *(_QWORD *)(v16 + 8);
        v18 = *(_QWORD *)(v17 + 200);
        if ( v18 )
        {
          if ( *(_QWORD *)(v17 + 232) )
            break;
        }
LABEL_15:
        if ( !v16 )
          goto LABEL_16;
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + 16) + 32LL))(
              *(_QWORD *)(v17 + 16),
              *(unsigned int *)(**(_QWORD **)(v17 + 224) + 8LL));
      v20 = 0LL;
      while ( v20 < *(_QWORD *)(v17 + 200) )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 192) + 8 * v20++) + 8LL) = v19;
        if ( v20 >= v18 )
          goto LABEL_15;
      }
LABEL_59:
      ATL::AtlThrowImpl(-2147024809);
    }
LABEL_16:
    v21 = (_QWORD *)*v8;
    if ( *v8 )
    {
      do
      {
        v22 = v21[2];
        v21 = (_QWORD *)*v21;
        *(_DWORD *)(*(_QWORD *)(v22 + 104) + 16LL) = 1094930515;
        (*(void (__fastcall **)(_QWORD, _QWORD, struct AE_CURRENT_POSITION *))(**(_QWORD **)(v22 + 120) + 24LL))(
          *(_QWORD *)(v22 + 120),
          *(_QWORD *)(v22 + 104),
          a3);
      }
      while ( v21 );
    }
    v4 = v43;
  }
  v23 = (_QWORD *)*v6;
  if ( *v6 )
  {
    while ( 1 )
    {
      v24 = v23[2];
      v23 = (_QWORD *)*v23;
      v25 = *(_DWORD *)(v24 + 336);
      if ( v25 >= 0x7FFFFFFF )
      {
        v26 = 1094930505;
      }
      else
      {
        v26 = 1094930515;
        if ( v25 >= 2 )
          v26 = 1094930482;
      }
      for ( i = 0LL; i < *(_QWORD *)(v24 + 200); ++i )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 192) + 8 * i) + 16LL) = v26;
      for ( j = 0LL; j < *(_QWORD *)(v24 + 232); ++j )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 224) + 8 * j) + 16LL) = v26;
      if ( (byte_1400CF981 & 4) != 0 )
        McTemplateU0pq_EventWriteTransfer(j, &AudioCore_AECPUUsage, *(_QWORD *)(v24 + 16), 1LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v24 + 16) + 24LL))(
        *(_QWORD *)(v24 + 16),
        *(unsigned int *)(v24 + 200),
        *(_QWORD *)(v24 + 192),
        *(unsigned int *)(v24 + 232),
        *(_QWORD *)(v24 + 224));
      v30 = *(_QWORD *)(v24 + 200);
      if ( v30 >= *(_QWORD *)(v24 + 232) )
        v30 = *(_QWORD *)(v24 + 232);
      v31 = 0LL;
      if ( v30 )
        break;
LABEL_39:
      if ( (byte_1400CF981 & 4) != 0 )
        McTemplateU0pq_EventWriteTransfer(v29, &AudioCore_AECPUUsage, *(_QWORD *)(v24 + 16), 2LL);
      if ( !v23 )
        goto LABEL_42;
    }
    while ( v31 < *(_QWORD *)(v24 + 200) )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 192) + 8 * v31) + 24LL);
      if ( v31 >= *(_QWORD *)(v24 + 232) )
        break;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 224) + 8 * v31) + 24LL) = v29;
      if ( v31 >= *(_QWORD *)(v24 + 232) )
        break;
      v32 = *(_QWORD *)(*(_QWORD *)(v24 + 224) + 8 * v31);
      if ( !*(_DWORD *)(v32 + 32) )
      {
        if ( v31 >= *(_QWORD *)(v24 + 200) )
          goto LABEL_59;
        v29 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v24 + 192) + 8 * v31) + 32LL);
        *(_DWORD *)(v32 + 32) = v29;
      }
      if ( ++v31 >= v30 )
        goto LABEL_39;
    }
    goto LABEL_59;
  }
LABEL_42:
  v33 = (_QWORD *)*v7;
  if ( *v7 )
  {
    do
    {
      v42 = 0LL;
      v34 = v33[2];
      v33 = (_QWORD *)*v33;
      if ( *(_DWORD *)(*(_QWORD *)(v34 + 104) + 8LL) < (unsigned int)(int)(*(float *)(v34 + 52)
                                                                         * (double)(int)*v4
                                                                         / 10000000.0
                                                                         + 0.5)
        && (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v34 + 128))(
             *(_QWORD *)(v34 + 128),
             &GUID_f8520dd3_8f9d_4437_9861_62f584c33dd6,
             &v42) >= 0
        && v42
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 24LL))(v42) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v42 + 32LL))(v42, *(_QWORD *)(v34 + 104));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v34 + 128) + 32LL))(
          *(_QWORD *)(v34 + 128),
          *(_QWORD *)(v34 + 104));
      }
      v35 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        v35 = v42;
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
