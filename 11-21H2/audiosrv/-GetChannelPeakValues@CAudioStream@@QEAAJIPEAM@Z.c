/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800E43DC
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800D7A90 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     _freea @ 0x1800DBA40 (_freea.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 *v9; // r15
  size_t v10; // rcx
  __int64 v11; // rax
  void *v12; // rsp
  struct _RTL_CRITICAL_SECTION *v13; // rbx
  struct _RTL_CRITICAL_SECTION *v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  float *v18; // rax
  char *v19; // r14
  __int64 v20; // rcx
  float v21; // xmm0_4
  __int64 v22; // [rsp+0h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *Memory[2]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  v4 = a2;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 951LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v6);
    return v6;
  }
  if ( a2 != *((_DWORD *)this + 22) )
  {
    v6 = -2147024809;
    v7 = 952LL;
    goto LABEL_3;
  }
  if ( a2 )
    memset_0(a3, 0, 4LL * a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  Memory[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  v9 = (__int64 *)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) )
    goto LABEL_30;
  v10 = (4LL * *((unsigned int *)this + 22) + 16) & -(__int64)(4 * (unsigned __int64)*((unsigned int *)this + 22) < 4 * (unsigned __int64)*((unsigned int *)this + 22) + 16);
  if ( v10 )
  {
    if ( v10 > 0x400 )
    {
      v14 = (struct _RTL_CRITICAL_SECTION *)malloc(v10);
      v13 = v14;
      if ( !v14 )
        goto LABEL_19;
      LODWORD(v14->DebugInfo) = 56797;
      goto LABEL_17;
    }
    v11 = v10 + 15;
    if ( v10 + 15 < v10 )
      v11 = 0xFFFFFFFFFFFFFF0LL;
    v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
    v13 = (struct _RTL_CRITICAL_SECTION *)Memory;
    if ( &v22 != (__int64 *)-32LL )
    {
      LODWORD(Memory[0]) = 52428;
LABEL_17:
      v13 = (struct _RTL_CRITICAL_SECTION *)((char *)v13 + 16);
    }
  }
  else
  {
    v13 = 0LL;
  }
LABEL_19:
  Memory[1] = v13;
  if ( !v13 )
  {
    v16 = -2147024882;
    v17 = 965LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v16);
    if ( v13 )
      freea(v13);
    goto LABEL_31;
  }
  memset_0(v13, 0, 4LL * *((unsigned int *)this + 22));
  v15 = (*(__int64 (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION *, _QWORD))(*(_QWORD *)*v9 + 24LL))(
          *v9,
          v13,
          *((unsigned int *)this + 22));
  v16 = v15;
  if ( v15 >= 0 )
  {
    if ( (_DWORD)v4 )
    {
      v18 = (float *)v13;
      v19 = (char *)((char *)a3 - (char *)v13);
      v20 = v4;
      do
      {
        v21 = fminf(*v18, 1.0);
        if ( v21 <= 0.0 )
          v21 = 0.0;
        *(float *)((char *)v18++ + (_QWORD)v19) = v21;
        --v20;
      }
      while ( v20 );
    }
    goto LABEL_29;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x3C8,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v15);
  if ( v16 != -2147417848 )
  {
    v17 = 983LL;
    goto LABEL_33;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v9);
LABEL_29:
  freea(v13);
LABEL_30:
  v16 = 0;
LABEL_31:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(Memory);
  return v16;
}
