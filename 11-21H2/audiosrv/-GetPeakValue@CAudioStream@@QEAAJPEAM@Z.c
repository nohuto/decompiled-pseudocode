/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800E4664
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800D8370 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
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
__int64 __fastcall CAudioStream::GetPeakValue(CAudioStream *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  size_t v6; // rcx
  __int64 v7; // rax
  void *v8; // rsp
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  float *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *Memory[2]; // [rsp+20h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x382,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  Memory[0] = v5;
  *a2 = 0.0;
  if ( !*((_QWORD *)this + 23) )
    goto LABEL_26;
  v6 = (4LL * *((unsigned int *)this + 22) + 16) & -(__int64)(4 * (unsigned __int64)*((unsigned int *)this + 22) < 4 * (unsigned __int64)*((unsigned int *)this + 22) + 16);
  if ( !v6 )
  {
    v9 = 0LL;
    goto LABEL_14;
  }
  if ( v6 <= 0x400 )
  {
    v7 = v6 + 15;
    if ( v6 + 15 < v6 )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = (struct _RTL_CRITICAL_SECTION *)Memory;
    if ( &v16 == (__int64 *)-32LL )
      goto LABEL_14;
    LODWORD(Memory[0]) = 52428;
    goto LABEL_12;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)malloc(v6);
  v9 = v10;
  if ( v10 )
  {
    LODWORD(v10->DebugInfo) = 56797;
LABEL_12:
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)v9 + 16);
  }
LABEL_14:
  Memory[1] = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = 907LL;
    goto LABEL_20;
  }
  memset_0(v9, 0, 4LL * *((unsigned int *)this + 22));
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION *, _QWORD))(**((_QWORD **)this + 23) + 24LL))(
          *((_QWORD *)this + 23),
          v9,
          *((unsigned int *)this + 22));
  v11 = v13;
  if ( v13 >= 0 )
  {
    if ( *((_DWORD *)this + 22) )
    {
      v14 = (float *)v9;
      v15 = *((unsigned int *)this + 22);
      do
      {
        *a2 = fmaxf(*v14++, *a2);
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x38E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v13);
    if ( v11 != -2147417848 )
    {
      v12 = 926LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v11);
      if ( v9 )
        freea(v9);
      goto LABEL_27;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 23);
  }
  freea(v9);
LABEL_26:
  v11 = 0;
LABEL_27:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(Memory);
  return v11;
}
