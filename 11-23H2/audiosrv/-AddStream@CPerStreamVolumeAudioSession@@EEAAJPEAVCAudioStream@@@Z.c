/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180009CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180009E80 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?SetSessionVolume@CAudioStream@@QEAAJMKQEAM_J_N@Z @ 0x180009EB8 (-SetSessionVolume@CAudioStream@@QEAAJMKQEAM_J_N@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180009F40 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x18000B860 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x18000B8D0 (-GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _freea @ 0x18004B5A0 (_freea.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _alloca_probe @ 0x180075940 (_alloca_probe.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(CPerStreamVolumeAudioSession *this, struct CAudioStream *a2)
{
  CAudioSession *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // r14
  size_t v8; // rcx
  __int64 v9; // rax
  void *v10; // rsp
  int *v11; // rbx
  unsigned int v12; // r15d
  int v13; // eax
  unsigned int v14; // r14d
  int v15; // eax
  unsigned int v16; // esi
  __int64 result; // rax
  int *v18; // rax
  unsigned __int64 v19; // rax
  void *v20; // rax
  void *v21; // rcx
  unsigned int v22; // r8d
  int *i; // r15
  unsigned int v24; // eax
  size_t v25; // rcx
  __int64 v26; // rax
  void *v27; // rsp
  int *v28; // rax
  __int64 v29; // rdx
  _BYTE v30[32]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+20h] [rbp-10h]
  bool v32; // [rsp+28h] [rbp-8h]
  int v33; // [rsp+30h] [rbp+0h] BYREF
  float v34; // [rsp+34h] [rbp+4h] BYREF
  __int64 v35; // [rsp+38h] [rbp+8h] BYREF
  __int64 v36; // [rsp+40h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]

  *((_QWORD *)a2 + 8) = this;
  LOBYTE(v33) = 0;
  v34 = 1.0;
  CAudioSession::GetCurrentSessionGain(this, (bool *)&v33, &v34, &v35);
  LODWORD(v35) = 1065353216;
  v36 = 0LL;
  CAudioSession::GetPolicyVolumeForStream(v4, a2, (float *)&v35, &v36);
  v5 = CAudioStream::SetPolicyVolume(a2, *(float *)&v35, v36, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v5,
      v31);
    result = v6;
    goto LABEL_52;
  }
  *((_BYTE *)a2 + 544) = v33;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v8 = (4LL * *((unsigned int *)this + 222) + 16) & -(__int64)(4 * (unsigned __int64)*((unsigned int *)this + 222) < 4 * (unsigned __int64)*((unsigned int *)this + 222) + 16);
  if ( !v8 )
    goto LABEL_48;
  if ( v8 <= 0x400 )
  {
    v9 = v8 + 15;
    if ( v8 + 15 < v8 )
      v9 = 0xFFFFFFFFFFFFFF0LL;
    v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v11 = &v33;
    if ( v30 == (_BYTE *)-48LL )
      goto LABEL_48;
    v33 = 52428;
    goto LABEL_8;
  }
  v18 = (int *)malloc(v8);
  v11 = v18;
  if ( v18 )
  {
    *v18 = 56797;
LABEL_8:
    v11 += 4;
  }
  if ( !v11 )
  {
LABEL_48:
    v29 = 2559LL;
    goto LABEL_49;
  }
  memcpy_0(v11, *((const void **)this + 112), 4LL * *((unsigned int *)this + 222));
  if ( !*((_QWORD *)this + 112) || *((_DWORD *)this + 222) < *((_DWORD *)a2 + 24) )
  {
    v19 = 4LL * *((unsigned int *)a2 + 24);
    if ( !is_mul_ok(*((unsigned int *)a2 + 24), 4uLL) )
      v19 = -1LL;
    v20 = operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
    v21 = (void *)*((_QWORD *)this + 112);
    *((_QWORD *)this + 112) = v20;
    if ( v21 )
      operator delete(v21);
    if ( !*((_QWORD *)this + 112) )
    {
      v16 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA0D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL,
        v31);
      if ( v7 )
        LeaveCriticalSection(v7);
LABEL_27:
      freea(v11);
LABEL_51:
      result = v16;
      goto LABEL_52;
    }
    v22 = 0;
    for ( i = v11; v22 < *((_DWORD *)this + 222); ++v22 )
      *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * v22) = v11[v22];
    while ( 1 )
    {
      v24 = *((_DWORD *)a2 + 24);
      if ( v22 >= v24 )
        break;
      *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * v22++) = 1065353216;
    }
    *((_DWORD *)this + 222) = v24;
    v25 = (4LL * v24 + 16) & -(__int64)(4 * (unsigned __int64)v24 < 4 * (unsigned __int64)v24 + 16);
    if ( !v25 )
    {
      v11 = 0LL;
      goto LABEL_43;
    }
    if ( v25 > 0x400 )
    {
      v28 = (int *)malloc(v25);
      v11 = v28;
      if ( !v28 )
      {
LABEL_43:
        freea(i);
        if ( v11 )
        {
          memcpy_0(v11, *((const void **)this + 112), 4LL * *((unsigned int *)this + 222));
          goto LABEL_12;
        }
        v29 = 2595LL;
LABEL_49:
        v16 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)0x8007000ELL,
          v31);
        if ( v7 )
          LeaveCriticalSection(v7);
        goto LABEL_51;
      }
      *v28 = 56797;
    }
    else
    {
      v26 = v25 + 15;
      if ( v25 + 15 < v25 )
        v26 = 0xFFFFFFFFFFFFFF0LL;
      v27 = alloca(v26 & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = &v33;
      if ( v30 == (_BYTE *)-48LL )
        goto LABEL_43;
      v33 = 52428;
    }
    v11 += 4;
    goto LABEL_43;
  }
LABEL_12:
  v12 = *((_DWORD *)this + 222);
  if ( this != (CPerStreamVolumeAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v13 = CAudioStream::SetSessionVolume(a2, v34, v12, (float *const)v11, 0LL, v32);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = CAudioSession::AddStream(this, a2);
    v16 = v15;
    if ( v15 >= 0 )
    {
      freea(v11);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA32,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v15,
      v31);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA30,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v13,
    v31);
  freea(v11);
  result = v14;
LABEL_52:
  *((_QWORD *)a2 + 8) = 0LL;
  return result;
}
