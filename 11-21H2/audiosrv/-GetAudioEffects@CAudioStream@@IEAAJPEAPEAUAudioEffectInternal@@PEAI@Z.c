/*
 * XREFs of ?GetAudioEffects@CAudioStream@@IEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x1800E3E94
 * Callers:
 *     ?PublishAudioEffects@CAudioStream@@IEAAXXZ @ 0x1800E4D1C (-PublishAudioEffects@CAudioStream@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAAPEAUAudioEffectInternal@@QEAU2@AEBU2@@Z @ 0x1800E320C (--$_Emplace_reallocate@AEBUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAu.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1800E3388 (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAAPEAU_GU.c)
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x1800E5FA4 (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1800E6048 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioStream::GetAudioEffects(CAudioStream *this, struct AudioEffectInternal **a2, unsigned int *a3)
{
  CAudioStream *v3; // rsi
  _QWORD *v4; // r15
  __int64 *v5; // r13
  _QWORD *v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int128 *, unsigned int *, __int64); // rdi
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 k; // rbx
  _QWORD *v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  SIZE_T v17; // rax
  void *v18; // rbx
  void *v19; // rdi
  wil *v20; // rax
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  _BYTE *v24; // rdi
  unsigned int v25; // r13d
  _BYTE *v26; // rbx
  _QWORD *i; // rsi
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  _OWORD *v34; // r8
  unsigned __int64 v35; // r13
  struct AudioEffectInternal *v36; // rdx
  __int64 v37; // r9
  _QWORD *j; // r8
  __int64 v39; // rcx
  _OWORD *v40; // r8
  __int64 v41; // rcx
  unsigned __int64 *v43; // [rsp+28h] [rbp-51h]
  _WNF_STATE_NAME v44; // [rsp+30h] [rbp-49h] BYREF
  __int128 v45; // [rsp+38h] [rbp-41h] BYREF
  _BYTE *v46; // [rsp+48h] [rbp-31h]
  unsigned int v47; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-21h] BYREF
  void *v49; // [rsp+60h] [rbp-19h]
  __int128 v50; // [rsp+68h] [rbp-11h] BYREF
  _QWORD *v51; // [rsp+78h] [rbp-1h]
  struct AudioEffectInternal **v52; // [rsp+80h] [rbp+7h]
  unsigned int *v53; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v54; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v53 = a3;
  v52 = a2;
  v3 = this;
  v48 = (unsigned __int64)this;
  *a2 = 0LL;
  *a3 = 0;
  v50 = 0LL;
  v4 = 0LL;
  v51 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 27);
  v54 = *((_QWORD *)this + 28);
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 == (__int64 *)v54 )
  {
LABEL_17:
    if ( !*((_QWORD *)v3 + 46) )
    {
      v12 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x674,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)0x80004005LL);
      goto LABEL_59;
    }
    LOBYTE(v44.Data[0]) = 0;
    v17 = 16LL * *((unsigned int *)v3 + 82);
    if ( !is_mul_ok(*((unsigned int *)v3 + 82), 0x10uLL) )
      v17 = -1LL;
    v18 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
    v49 = v18;
    v48 = 0LL;
    v19 = (void *)(16LL * *((unsigned int *)v3 + 82));
    v20 = (wil *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)v3 + 45) + 40LL))(
                   *((_QWORD *)v3 + 45),
                   &v54);
    v21 = wil::wnf_query_nothrow(
            v20,
            &v44,
            (bool *)v18,
            v19,
            (unsigned __int64)&v48,
            v43,
            *(struct wil::WNF_CHANGE_STAMP_STRUCT **)&v44);
    v12 = v21;
    if ( v21 < 0 )
    {
      v22 = (unsigned int)v21;
      v23 = 1657LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v22);
LABEL_56:
      if ( v49 )
        operator delete(v49);
      goto LABEL_59;
    }
    if ( !LOBYTE(v44.Data[0]) )
    {
      v12 = -2147467259;
      v22 = 2147500037LL;
      v23 = 1658LL;
      goto LABEL_25;
    }
    v45 = 0LL;
    v24 = 0LL;
    v46 = 0LL;
    v54 = v48 >> 4;
    v25 = 0;
    v26 = 0LL;
    for ( i = 0LL; v25 < (unsigned int)v54; ++v25 )
    {
      if ( v7 != v6 )
      {
        v28 = v7;
        v29 = (char *)v49 + 16 * v25;
        do
        {
          v30 = *v29 - *v28;
          if ( *v29 == *v28 )
            v30 = v29[1] - v28[1];
          if ( !v30 )
            break;
          v28 += 3;
        }
        while ( v28 != v6 );
        if ( v28 != v6 )
          continue;
      }
      v31 = i;
      if ( i == (_QWORD *)v26 )
        goto LABEL_41;
      v32 = (char *)v49 + 16 * v25;
      do
      {
        v33 = *v32 - *v31;
        if ( *v32 == *v31 )
          v33 = v32[1] - v31[1];
        if ( !v33 )
          break;
        v31 += 2;
      }
      while ( v31 != (_QWORD *)v26 );
      if ( v31 == (_QWORD *)v26 )
      {
LABEL_41:
        v34 = (char *)v49 + 16 * v25;
        if ( v26 == v24 )
        {
          std::vector<_GUID>::_Emplace_reallocate<_GUID const &>((const void **)&v45, v26, v34);
          v24 = v46;
          v26 = (_BYTE *)*((_QWORD *)&v45 + 1);
          i = (_QWORD *)v45;
        }
        else
        {
          *(_OWORD *)v26 = *v34;
          v26 += 16;
          *((_QWORD *)&v45 + 1) = v26;
        }
      }
    }
    v35 = 0xAAAAAAAAAAAAAAABuLL * (v6 - v7) + ((v26 - (_BYTE *)i) >> 4);
    if ( v35 )
    {
      v36 = (struct AudioEffectInternal *)CoTaskMemAlloc(24 * v35);
      if ( !v36 )
      {
        v12 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x697,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_54;
      }
      v37 = 0LL;
      for ( j = v7; j != v6; j += 3 )
      {
        v39 = 3 * v37;
        *(_OWORD *)((char *)v36 + 8 * v39) = *(_OWORD *)j;
        *((_DWORD *)v36 + 2 * v39 + 4) = *((_DWORD *)j + 4);
        *((_DWORD *)v36 + 2 * v39 + 5) = *((_DWORD *)j + 5);
        v37 = (unsigned int)(v37 + 1);
      }
      v40 = i;
      if ( i != (_QWORD *)v26 )
      {
        do
        {
          v41 = 3 * v37;
          *(_OWORD *)((char *)v36 + 8 * v41) = *v40;
          *((_DWORD *)v36 + 2 * v41 + 4) = 0;
          *((_DWORD *)v36 + 2 * v41 + 5) = 1;
          v37 = (unsigned int)(v37 + 1);
          ++v40;
        }
        while ( v40 != (_OWORD *)v26 );
      }
      *v52 = v36;
      *v53 = v35;
    }
    v12 = 0;
LABEL_54:
    if ( i )
      std::_Deallocate<16,0>(i, (v24 - (_BYTE *)i) & 0xFFFFFFFFFFFFFFF0uLL);
    goto LABEL_56;
  }
  while ( 1 )
  {
    v45 = 0uLL;
    v8 = *v5;
    v9 = *(__int64 (__fastcall **)(__int64, __int128 *, unsigned int *, __int64))(*(_QWORD *)*v5 + 56LL);
    v10 = *(_QWORD *)(v48 + 344);
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(&v45);
    v11 = v9(v8, &v45, &v47, v10);
    v12 = v11;
    if ( v11 < 0 )
      break;
    for ( k = 0LL; (unsigned int)k < v47; k = (unsigned int)(k + 1) )
    {
      v14 = v7;
      if ( v7 == v6 )
        goto LABEL_11;
      do
      {
        v15 = *(_QWORD *)(v45 + 24 * k) - *v14;
        if ( !v15 )
          v15 = *(_QWORD *)(v45 + 24 * k + 8) - v14[1];
        if ( !v15 )
          break;
        v14 += 3;
      }
      while ( v14 != v6 );
      if ( v14 == v6 )
      {
LABEL_11:
        v16 = v45 + 24 * k;
        if ( v6 == v4 )
        {
          std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal const &>(
            (const void **)&v50,
            v6,
            v16);
          v4 = v51;
          v6 = (_QWORD *)*((_QWORD *)&v50 + 1);
          v7 = (_QWORD *)v50;
        }
        else
        {
          *(_OWORD *)v6 = *(_OWORD *)v16;
          v6[2] = *(_QWORD *)(v16 + 16);
          v6 += 3;
          *((_QWORD *)&v50 + 1) = v6;
        }
      }
      else
      {
        *((_DWORD *)v14 + 5) |= *(_DWORD *)(v45 + 24 * k + 20);
        *((_DWORD *)v14 + 4) |= *(_DWORD *)(v45 + 24 * k + 16);
      }
    }
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(&v45);
    if ( ++v5 == (__int64 *)v54 )
    {
      v3 = (CAudioStream *)v48;
      goto LABEL_17;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x661,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v11);
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(&v45);
LABEL_59:
  if ( v7 )
    std::_Deallocate<16,0>(v7, 8 * (v4 - v7));
  return v12;
}
