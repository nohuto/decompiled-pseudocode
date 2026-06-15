/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D629C
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D6A40 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_48766acb0ab47ece138fadd90b55d198__void_::_Do_call @ 0x1800D7150 (std--_Func_impl_no_alloc__lambda_48766acb0ab47ece138fadd90b55d198__void_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B60 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800670AC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800CF06C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D67CC (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
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
  _QWORD *v12; // rdi
  char *v13; // rcx
  void **v14; // r8
  char v15; // r9
  unsigned __int64 v16; // rcx
  void *v17; // r10
  int v18; // esi
  void *v19; // rcx
  char *v20; // r15
  unsigned int v21; // r14d
  _DWORD *v22; // rsi
  void (*v24)(void *); // [rsp+20h] [rbp-49h]
  void **v25; // [rsp+30h] [rbp-39h]
  void *v26; // [rsp+38h] [rbp-31h] BYREF
  char v27; // [rsp+40h] [rbp-29h]
  __int128 v28; // [rsp+48h] [rbp-21h] BYREF
  __int128 v29; // [rsp+58h] [rbp-11h] BYREF
  __int128 v30; // [rsp+68h] [rbp-1h] BYREF
  _OWORD v31[2]; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  v24 = (void (*)(void *))AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_2_::_unnamed_type_apoResults_::__unnamed_type_apoResults_;
  `eh vector constructor iterator'(
    (char *)v31,
    16LL,
    2LL,
    (void (*)(void *))ATL::CComHeapPtr<_GUID>::CComHeapPtr<_GUID>);
  v28 = *(_OWORD *)((char *)this + 40);
  v29 = v28;
  EtwEventActivityIdControl(4LL, &v29);
  do
  {
    wil::details::ResetEvent(*((wil::details **)this + 19), v2);
    AudioEffectsWatcher::ReloadApos(this);
    *((_DWORD *)this + 44) = 0;
    v3 = 0;
    v4 = (_DWORD *)&v30 + 2;
    do
    {
      v5 = (void *)*((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = 0LL;
      if ( v5 )
        CoTaskMemFree(v5);
      *v4 = 0;
      v6 = *(__int64 **)((char *)v4 + this - (AudioEffectsWatcher *)&v30 + 104);
      if ( v6 )
      {
        v7 = *v6;
        v8 = (int)v3;
        v25 = (void **)&v31[v8 - 1];
        v26 = 0LL;
        v27 = 1;
        v9 = (*(__int64 (__fastcall **)(__int64 *, void **, char *, _QWORD, void (*)(void *)))(v7 + 24))(
               v6,
               &v26,
               (char *)&v30 + v8 * 16 + 8,
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
            (void *)0x10D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
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
  v12 = (_QWORD *)((char *)this + 168);
  if ( !*((_DWORD *)this + 44) )
    goto LABEL_27;
  v13 = (char *)*v12;
  *v12 = 0LL;
  if ( v13 )
    CoTaskMemFree(v13);
  v14 = (void **)((char *)this + 168);
  v15 = 1;
  v27 = 1;
  v16 = *((unsigned int *)this + 44);
  v17 = 0LL;
  v26 = 0LL;
  if ( is_mul_ok(v16, 0x10uLL) )
  {
    v18 = CTCoAllocPolicy::Alloc((void *)v16, 1, 16 * v16, &v26);
    v15 = v27;
    v17 = v26;
    v14 = (void **)((char *)this + 168);
  }
  else
  {
    v18 = -2147024362;
  }
  if ( v15 )
  {
    v19 = *v14;
    *v14 = v17;
    if ( v19 )
      CoTaskMemFree(v19);
  }
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v18);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v28);
  }
  else
  {
LABEL_27:
    v20 = (char *)*v12;
    v21 = 0;
    v22 = (_DWORD *)&v30 + 2;
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
    RtlPublishWnfStateData(*(_QWORD *)((char *)this + 92), 0LL, *v12, (unsigned int)(16 * *((_DWORD *)this + 44)), 0LL);
    EtwEventActivityIdControl(4LL, &v29);
    v18 = 0;
  }
  `eh vector destructor iterator'(
    (char *)&v30,
    16LL,
    3LL,
    (void (*)(void *))AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_2_::_unnamed_type_apoResults_::__unnamed_type_apoResults_);
  return (unsigned int)v18;
}
