/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180022970
 * Callers:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180022820 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180024320 (-_Destroy@-$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800568B4 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005DAA4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x180067294 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800673B4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@@std.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C5EEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800C6718 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800C7D70 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus(__int64 a1, WINBOOL a2, _WORD *a3)
{
  __int64 ***v4; // r13
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  SIZE_T v7; // r14
  HANDLE ProcessHeap; // rax
  char *v9; // r14
  size_t v10; // rbx
  _QWORD *v11; // r9
  __int64 **v12; // rdi
  __int64 *v13; // r12
  int v14; // ebx
  unsigned __int64 v15; // r15
  __int64 *v16; // r10
  unsigned __int16 *v17; // rax
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r8
  unsigned __int16 v20; // cx
  bool v21; // cc
  unsigned __int16 v22; // cx
  _QWORD *v23; // rax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r8
  unsigned __int16 v26; // cx
  bool v27; // cc
  unsigned __int16 v28; // cx
  void *v29; // rdx
  __int64 result; // rax
  bool v31; // zf
  unsigned int v32; // r8d
  unsigned int v33; // r9d
  __int64 *v34; // rax
  int v35; // ebx
  __int64 v36; // r10
  __int64 *v37; // rdx
  __int64 **v38; // rcx
  __int64 *i; // rcx
  __int64 v40; // rax
  __int64 **v41; // r9
  size_t v42; // rbx
  int v43; // eax
  int v44; // eax
  __int64 **v45; // r10
  __int64 *v46; // rax
  __int64 *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 *j; // rdx
  LPVOID Context; // [rsp+30h] [rbp-1098h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-1090h] BYREF
  void *v53; // [rsp+40h] [rbp-1088h] BYREF
  int v54; // [rsp+48h] [rbp-1080h]
  _BYTE v55[16]; // [rsp+50h] [rbp-1078h] BYREF
  _QWORD v56[2]; // [rsp+60h] [rbp-1068h] BYREF
  unsigned __int64 v57; // [rsp+70h] [rbp-1058h]
  unsigned __int64 v58; // [rsp+78h] [rbp-1050h]
  void **v59; // [rsp+80h] [rbp-1048h]
  __int64 v60; // [rsp+88h] [rbp-1040h]
  int v61; // [rsp+90h] [rbp-1038h] BYREF
  _DWORD v62[1023]; // [rsp+94h] [rbp-1034h] BYREF

  fPending = a2;
  v4 = (__int64 ***)(a1 + 80);
  v57 = 0LL;
  v58 = 7LL;
  LOWORD(v56[0]) = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a3[v5] );
  if ( v5 <= 7 )
  {
    v57 = v5;
    v42 = 2 * v5;
    memmove_0(v56, a3, v42);
    *(_WORD *)((char *)v56 + v42) = 0;
    v9 = (char *)v56[0];
    goto LABEL_13;
  }
  v6 = 0x7FFFFFFFFFFFFFFELL;
  if ( v5 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  if ( (v5 | 7) > 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = -2LL;
  }
  else
  {
    if ( (v5 | 7) < 0xA )
      v6 = 10LL;
    else
      v6 = v5 | 7;
    if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = 2 * (v6 + 1);
    if ( v7 < 0x1000 )
    {
      if ( v7 )
      {
        ProcessHeap = GetProcessHeap();
        v9 = (char *)HeapAlloc(ProcessHeap, 0, v7);
      }
      else
      {
        v9 = 0LL;
      }
      goto LABEL_12;
    }
  }
  v9 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v7);
LABEL_12:
  v57 = v5;
  v58 = v6;
  v10 = 2 * v5;
  memcpy_0(v9, a3, v10);
  *(_WORD *)&v9[v10] = 0;
  v56[0] = v9;
LABEL_13:
  v12 = *v4;
  v13 = (*v4)[1];
  v14 = 0;
  v15 = v58;
  if ( !*((_BYTE *)v13 + 25) )
  {
    v16 = (*v4)[1];
    do
    {
      v13 = v16;
      v11 = v16 + 4;
      v17 = (unsigned __int16 *)v56;
      if ( v58 >= 8 )
        v17 = (unsigned __int16 *)v9;
      v18 = v16[6];
      if ( (unsigned __int64)v16[7] >= 8 )
        v11 = (_QWORD *)*v11;
      if ( v57 < v18 )
        v19 = v57;
      else
        v19 = v16[6];
      if ( v19 )
      {
        v20 = *(_WORD *)v11;
        if ( *(_WORD *)v11 < *v17 )
        {
LABEL_86:
          v43 = -1;
        }
        else
        {
          v11 = (_QWORD *)((char *)v11 - (__int64)v17);
          v21 = v20 <= *v17;
          while ( v21 )
          {
            if ( v19 == 1 )
              goto LABEL_28;
            --v19;
            v22 = *(_WORD *)((char *)v11 + (_QWORD)++v17);
            v21 = v22 <= *v17;
            if ( v22 < *v17 )
              goto LABEL_86;
          }
          v43 = 1;
        }
        if ( v43 < 0 )
        {
LABEL_88:
          v14 = 0;
          v16 = (__int64 *)v16[2];
          continue;
        }
      }
      else
      {
LABEL_28:
        if ( v18 < v57 )
          goto LABEL_88;
      }
      v14 = 1;
      v12 = (__int64 **)v16;
      v16 = (__int64 *)*v16;
    }
    while ( !*((_BYTE *)v16 + 25) );
  }
  if ( *((_BYTE *)v12 + 25) )
    goto LABEL_72;
  v23 = v12 + 4;
  v24 = (unsigned __int64)v12[6];
  if ( (unsigned __int64)v12[7] >= 8 )
    v23 = (_QWORD *)*v23;
  v11 = v56;
  if ( v58 >= 8 )
    v11 = v9;
  if ( v24 < v57 )
    v25 = (unsigned __int64)v12[6];
  else
    v25 = v57;
  if ( !v25 )
  {
LABEL_45:
    if ( v57 >= v24 )
      goto LABEL_46;
    goto LABEL_72;
  }
  v26 = *(_WORD *)v11;
  if ( *(_WORD *)v11 < *(_WORD *)v23 )
  {
LABEL_91:
    v44 = -1;
  }
  else
  {
    v11 = (_QWORD *)((char *)v11 - (__int64)v23);
    v27 = v26 <= *(_WORD *)v23;
    while ( v27 )
    {
      if ( v25 == 1 )
        goto LABEL_45;
      --v25;
      v23 = (_QWORD *)((char *)v23 + 2);
      v28 = *(_WORD *)((char *)v11 + (_QWORD)v23);
      v27 = v28 <= *(_WORD *)v23;
      if ( v28 < *(_WORD *)v23 )
        goto LABEL_91;
    }
    v44 = 1;
  }
  if ( v44 < 0 )
  {
LABEL_72:
    if ( v4[1] == (__int64 **)0x38E38E38E38E38ELL )
      std::_Xlength_error("map/set too long");
    Context = v56;
    v40 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>(
            (unsigned int)v55,
            (_DWORD)v4,
            (unsigned int)*v4,
            (_DWORD)v11,
            (__int64)&Context);
    v12 = *(__int64 ***)(v40 + 8);
    *(_QWORD *)(v40 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>(v55);
    v4[1] = (__int64 **)((char *)v4[1] + 1);
    v41 = *v4;
    v12[1] = v13;
    if ( v13 == (__int64 *)v41 )
    {
      *v41 = (__int64 *)v12;
      v41[1] = (__int64 *)v12;
      v41[2] = (__int64 *)v12;
      *((_BYTE *)v12 + 24) = 1;
    }
    else
    {
      if ( v14 )
      {
        *v13 = (__int64)v12;
        if ( v13 == *v41 )
          *v41 = (__int64 *)v12;
      }
      else
      {
        v13[2] = (__int64)v12;
        if ( v13 == v41[2] )
          v41[2] = (__int64 *)v12;
      }
      v45 = v12;
      while ( !*((_BYTE *)v45[1] + 24) )
      {
        v46 = v45[1];
        v47 = (__int64 *)v46[1];
        v48 = *v47;
        if ( v46 == (__int64 *)*v47 )
        {
          v49 = v47[2];
          if ( *(_BYTE *)(v49 + 24) )
          {
            if ( v45 == (__int64 **)v46[2] )
              std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v4);
            *((_BYTE *)v45[1] + 24) = 1;
            *(_BYTE *)(v45[1][1] + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
              v4,
              v45[1][1]);
          }
          else
          {
            *((_BYTE *)v46 + 24) = 1;
            *(_BYTE *)(v49 + 24) = 1;
            *(_BYTE *)(v45[1][1] + 24) = 0;
            v45 = (__int64 **)v45[1][1];
          }
        }
        else if ( *(_BYTE *)(v48 + 24) )
        {
          if ( v45 == (__int64 **)*v46 )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
              v4,
              v46);
          *((_BYTE *)v45[1] + 24) = 1;
          *(_BYTE *)(v45[1][1] + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v4);
        }
        else
        {
          *((_BYTE *)v46 + 24) = 1;
          *(_BYTE *)(v48 + 24) = 1;
          *(_BYTE *)(v45[1][1] + 24) = 0;
          v45 = (__int64 **)v45[1][1];
        }
      }
      *((_BYTE *)v41[1] + 24) = 1;
    }
    v15 = v58;
    v9 = (char *)v56[0];
  }
LABEL_46:
  if ( v15 >= 8 )
  {
    v29 = (void *)(2 * v15 + 2);
    Context = v29;
    v53 = v9;
    if ( (unsigned __int64)v29 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v53, (unsigned __int64 *)&Context);
      v29 = Context;
      v9 = (char *)v53;
    }
    operator delete(v9, (unsigned __int64)v29);
  }
  v57 = 0LL;
  v58 = 7LL;
  LOWORD(v56[0]) = 0;
  result = (unsigned int)fPending;
  if ( fPending )
  {
    if ( fPending != 1 )
      return result;
    result = *((unsigned int *)v12 + 16);
    if ( !(_DWORD)result )
      return result;
    LODWORD(result) = result - 1;
    v31 = (_DWORD)result == 0;
    result = (unsigned int)result;
    *((_DWORD *)v12 + 16) = result;
  }
  else
  {
    v31 = ++*((_DWORD *)v12 + 16) == 1;
  }
  if ( v31 )
  {
    memset_0(v62, 0, sizeof(v62));
    v32 = 0;
    v33 = 2;
    v61 = 1;
    v34 = **v4;
    while ( !*((_BYTE *)v34 + 25) )
    {
      v37 = v34 + 4;
      if ( *((_DWORD *)v34 + 16) )
      {
        if ( v32 >= 0x24 )
          break;
        if ( (unsigned __int64)v34[7] >= 8 )
          v37 = (__int64 *)*v37;
        *(_OWORD *)&v62[v33 - 1] = *(_OWORD *)v37;
        *(_OWORD *)&v62[v33 + 3] = *((_OWORD *)v37 + 1);
        *(_OWORD *)&v62[v33 + 7] = *((_OWORD *)v37 + 2);
        *(_OWORD *)&v62[v33 + 11] = *((_OWORD *)v37 + 3);
        *(_OWORD *)&v62[v33 + 15] = *((_OWORD *)v37 + 4);
        *(_OWORD *)&v62[v33 + 19] = *((_OWORD *)v37 + 5);
        *(_OWORD *)&v62[v33 + 23] = *((_OWORD *)v37 + 6);
        v33 += 28;
        ++v32;
      }
      v38 = (__int64 **)v34[2];
      if ( *((_BYTE *)v38 + 25) )
      {
        for ( i = (__int64 *)v34[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v34 != (__int64 *)i[2] )
            break;
          v34 = i;
        }
        v34 = i;
      }
      else
      {
        v34 = (__int64 *)v34[2];
        for ( j = *v38; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v34 = j;
      }
    }
    v62[0] = v32;
    v35 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, &v61, 4096LL, 0LL);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v53 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1801C2788;
      qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
      qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v54 = 0;
      wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v53);
    }
    result = (__int64)Context;
    v36 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v36 > 4u && (*(_BYTE *)(v36 + 16) & 0x40) != 0 )
    {
      result = *(_QWORD *)(v36 + 24) & 0x40LL;
      if ( result == *(_QWORD *)(v36 + 24) )
      {
        LODWORD(v53) = v35;
        v59 = &v53;
        v60 = 4LL;
        return tlgWriteTransfer_EtwEventWriteTransfer(v36, (unsigned int)&unk_18018AF06, 0, 0, 3, (__int64)v56);
      }
    }
  }
  return result;
}
