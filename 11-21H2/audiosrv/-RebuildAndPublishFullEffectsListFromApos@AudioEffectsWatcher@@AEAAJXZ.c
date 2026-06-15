/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D3B14
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D429C (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_48766acb0ab47ece138fadd90b55d198__void_::_Do_call @ 0x1800D4A30 (std--_Func_impl_no_alloc__lambda_48766acb0ab47ece138fadd90b55d198__void_--_Do_call.c)
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18003CC5C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18005EAE0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18005F038 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800C9030 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D403C (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(AudioEffectsWatcher *this)
{
  void *v2; // rdx
  unsigned int v3; // esi
  _DWORD *v4; // rdi
  void *v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax
  char v10; // r14
  void *v11; // rcx
  unsigned int v12; // eax
  void **v13; // rsi
  void *v14; // rcx
  void *v15; // rcx
  int v16; // edi
  char v17; // r9
  void *v18; // r10
  void *v19; // rcx
  char *v20; // r14
  unsigned int v21; // esi
  _DWORD *v22; // rdi
  void (*v24)(void *); // [rsp+20h] [rbp-59h]
  void **v25; // [rsp+30h] [rbp-49h]
  void *v26; // [rsp+38h] [rbp-41h] BYREF
  char v27; // [rsp+40h] [rbp-39h]
  unsigned __int64 v28; // [rsp+48h] [rbp-31h] BYREF
  __int128 v29; // [rsp+50h] [rbp-29h]
  __int128 v30; // [rsp+60h] [rbp-19h] BYREF
  __int128 v31; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v32[2]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v31 = 0LL;
  memset(v32, 0, sizeof(v32));
  v24 = (void (*)(void *))wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>;
  `eh vector constructor iterator'(
    (char *)v32,
    16LL,
    2LL,
    (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>);
  v29 = *(_OWORD *)((char *)this + 40);
  v30 = v29;
  EtwEventActivityIdControl(4LL, &v30);
  do
  {
    wil::details::ResetEvent(*((wil::details **)this + 19), v2);
    AudioEffectsWatcher::ReloadApos(this);
    *((_DWORD *)this + 44) = 0;
    v3 = 0;
    v4 = (_DWORD *)&v31 + 2;
    do
    {
      v5 = (void *)*((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = 0LL;
      if ( v5 )
        CoTaskMemFree(v5);
      *v4 = 0;
      v6 = *(__int64 **)((char *)v4 + this - (AudioEffectsWatcher *)&v31 + 104);
      if ( v6 )
      {
        v7 = *v6;
        v8 = (int)v3;
        v25 = (void **)&v32[v8 - 1];
        v26 = 0LL;
        v27 = 1;
        v9 = (*(__int64 (__fastcall **)(__int64 *, void **, char *, _QWORD, void (*)(void *)))(v7 + 24))(
               v6,
               &v26,
               (char *)&v31 + v8 * 16 + 8,
               *((_QWORD *)this + 19),
               v24);
        if ( v9 >= 0 )
        {
          v10 = 0;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x10B,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
            (const char *)(unsigned int)v9);
          v10 = 1;
        }
        if ( v27 )
        {
          v11 = *v25;
          *v25 = v26;
          if ( v11 )
            CoTaskMemFree(v11);
        }
        if ( v10 )
          *v4 = 0;
      }
      *((_DWORD *)this + 44) += *v4;
      ++v3;
      v4 += 4;
    }
    while ( v3 < 3 );
  }
  while ( !WaitForSingleObject(*((HANDLE *)this + 19), 0) );
  v12 = *((_DWORD *)this + 44);
  if ( !v12 )
    goto LABEL_26;
  v13 = (void **)((char *)this + 168);
  v14 = (void *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v14 )
  {
    CoTaskMemFree(v14);
    v12 = *((_DWORD *)this + 44);
  }
  v27 = 1;
  v26 = 0LL;
  v16 = ULongLongMult(v12, 0x10uLL, &v28);
  if ( v16 >= 0 )
  {
    v16 = CTCoAllocPolicy::Alloc(v15, (unsigned __int8)v18 + 1, v28, &v26);
    v17 = v27;
    v18 = v26;
    v13 = (void **)((char *)this + 168);
  }
  if ( v17 )
  {
    v19 = *v13;
    *v13 = v18;
    if ( v19 )
      CoTaskMemFree(v19);
  }
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v16);
  }
  else
  {
LABEL_26:
    v20 = (char *)*((_QWORD *)this + 21);
    v21 = 0;
    v22 = (_DWORD *)&v31 + 2;
    do
    {
      if ( *v22 )
      {
        memcpy_0(v20, *((const void **)v22 - 1), 16LL * (unsigned int)*v22);
        v20 += 16 * (unsigned int)*v22;
      }
      ++v21;
      v22 += 4;
    }
    while ( v21 < 3 );
    RtlPublishWnfStateData(
      *(_QWORD *)((char *)this + 92),
      0LL,
      *((_QWORD *)this + 21),
      (unsigned int)(16 * *((_DWORD *)this + 44)),
      0LL);
    v16 = 0;
  }
  EtwEventActivityIdControl(4LL, &v30);
  `eh vector destructor iterator'(
    (char *)&v31,
    16LL,
    3LL,
    (void (*)(void *))wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>);
  return (unsigned int)v16;
}
