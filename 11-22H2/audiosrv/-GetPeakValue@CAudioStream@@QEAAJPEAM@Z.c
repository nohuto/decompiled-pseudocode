/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800EC344
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800E0490 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
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
__int64 __fastcall CAudioStream::GetPeakValue(CAudioStream *this, float *a2)
{
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  size_t v7; // rcx
  __int64 v8; // rax
  void *v9; // rsp
  void **v10; // rbx
  _DWORD *v11; // rax
  int v12; // eax
  unsigned int v13; // r15d
  float *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-20h] BYREF
  void *Memory[2]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  if ( !a2 )
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return v4;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  Memory[1] = v6;
  *a2 = 0.0;
  if ( !*((_QWORD *)this + 25) )
    goto LABEL_28;
  v7 = (4LL * *((unsigned int *)this + 25) + 16) & -(__int64)(4 * (unsigned __int64)*((unsigned int *)this + 25) < 4 * (unsigned __int64)*((unsigned int *)this + 25) + 16);
  if ( v7 )
  {
    if ( v7 > 0x400 )
    {
      v11 = malloc(v7);
      v10 = (void **)v11;
      if ( !v11 )
        goto LABEL_15;
      *v11 = 56797;
      goto LABEL_13;
    }
    v8 = v7 + 15;
    if ( v7 + 15 < v7 )
      v8 = 0xFFFFFFFFFFFFFF0LL;
    v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    v10 = Memory;
    if ( &v16 != (__int64 *)-32LL )
    {
      LODWORD(Memory[0]) = 52428;
LABEL_13:
      v10 += 2;
    }
  }
  else
  {
    v10 = 0LL;
  }
LABEL_15:
  Memory[0] = v10;
  if ( !v10 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>(Memory);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v4;
  }
  memset_0(v10, 0, 4LL * *((unsigned int *)this + 25));
  v12 = (*(__int64 (__fastcall **)(_QWORD, void **, _QWORD))(**((_QWORD **)this + 25) + 24LL))(
          *((_QWORD *)this + 25),
          v10,
          *((unsigned int *)this + 25));
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( *((_DWORD *)this + 25) )
    {
      v14 = (float *)v10;
      v15 = *((unsigned int *)this + 25);
      do
      {
        *a2 = fmaxf(*v14++, *a2);
        --v15;
      }
      while ( v15 );
    }
    goto LABEL_27;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x3E6,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v12);
  if ( v13 == -2147417848 )
  {
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)this + 25);
LABEL_27:
    freea(v10);
LABEL_28:
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F6,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)v13);
  freea(v10);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v13;
}
