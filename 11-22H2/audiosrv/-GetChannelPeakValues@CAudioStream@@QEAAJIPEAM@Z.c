/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800EB924
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800DFCC0 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _freea @ 0x18004B5A0 (_freea.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _alloca_probe @ 0x180075970 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800DEB28 (--1-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  float *v3; // rsi
  __int64 v4; // r14
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  __int64 *v10; // r12
  size_t v11; // rcx
  __int64 v12; // rax
  void *v13; // rsp
  void **v14; // rbx
  _DWORD *v15; // rax
  int v16; // eax
  unsigned int v17; // r15d
  signed __int64 v18; // rax
  __int64 v19; // rcx
  float v20; // xmm0_4
  __int64 v21; // [rsp+0h] [rbp-20h] BYREF
  void *Memory[2]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1039LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v6);
    return v6;
  }
  if ( a2 != *((_DWORD *)this + 25) )
  {
    v6 = -2147024809;
    v7 = 1040LL;
    goto LABEL_3;
  }
  if ( a2 )
    memset_0(a3, 0, 4LL * a2);
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  Memory[1] = (char *)this + 144;
  v10 = (__int64 *)((char *)this + 200);
  if ( !*((_QWORD *)this + 25) )
    goto LABEL_33;
  v11 = (4LL * *((unsigned int *)this + 25) + 16) & -(__int64)(4 * (unsigned __int64)*((unsigned int *)this + 25) < 4 * (unsigned __int64)*((unsigned int *)this + 25) + 16);
  if ( v11 )
  {
    if ( v11 > 0x400 )
    {
      v15 = malloc(v11);
      v14 = (void **)v15;
      if ( !v15 )
        goto LABEL_20;
      *v15 = 56797;
      goto LABEL_18;
    }
    v12 = v11 + 15;
    if ( v11 + 15 < v11 )
      v12 = 0xFFFFFFFFFFFFFF0LL;
    v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
    v14 = Memory;
    if ( &v21 != (__int64 *)-32LL )
    {
      LODWORD(Memory[0]) = 52428;
LABEL_18:
      v14 += 2;
    }
  }
  else
  {
    v14 = 0LL;
  }
LABEL_20:
  Memory[0] = v14;
  if ( !v14 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>(Memory);
    if ( this != (CAudioStream *)-144LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    return v6;
  }
  memset_0(v14, 0, 4LL * *((unsigned int *)this + 25));
  v16 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)*v10 + 24LL))(
          *v10,
          v14,
          *((unsigned int *)this + 25));
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( (_DWORD)v4 )
    {
      v18 = (char *)v14 - (char *)v3;
      v19 = v4;
      do
      {
        v20 = fminf(*(float *)((char *)v3 + v18), 1.0);
        if ( v20 <= 0.0 )
          v20 = 0.0;
        *v3++ = v20;
        --v19;
      }
      while ( v19 );
    }
    goto LABEL_32;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x420,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v16);
  if ( v17 == -2147417848 )
  {
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(v10);
LABEL_32:
    freea(v14);
LABEL_33:
    if ( v9 )
      LeaveCriticalSection(v9);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42F,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)v17);
  freea(v14);
  if ( v9 )
    LeaveCriticalSection(v9);
  return v17;
}
