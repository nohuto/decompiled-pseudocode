/*
 * XREFs of ?InitLoggingInfo@CAudioPump@@UEAAJPEBU_tlgProvider_t@@U_GUID@@PEBG@Z @ 0x14002ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140009C1C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioPump::InitLoggingInfo(
        CAudioPump *this,
        const struct _tlgProvider_t *a2,
        struct _GUID *a3,
        const unsigned __int16 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  void **v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  char *v12; // rsi
  char *v13; // rax
  int v14; // ebx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+70h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v18 = v4;
  if ( !*((_BYTE *)this + 64) )
  {
    v14 = -2005139437;
    v16 = 307LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_11;
  }
  *((_QWORD *)this + 591) = a2;
  *(struct _GUID *)((char *)this + 4664) = *a3;
  if ( a4 )
  {
    v9 = (void **)((char *)this + 4680);
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = v10 + 1;
    v12 = 0LL;
    if ( v10 + 1 >= v10 && is_mul_ok(v11, 2uLL) )
    {
      v13 = (char *)CoTaskMemAlloc(2 * v11);
      v12 = v13;
      if ( v13 )
      {
        v14 = 0;
        StringCchCopyNExW(v13, v10 + 1, a4, v10);
      }
      else
      {
        v14 = -2147024882;
      }
    }
    else
    {
      v14 = -2147024362;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v9,
      v12);
    if ( v14 < 0 )
    {
      v16 = 313LL;
      goto LABEL_16;
    }
  }
  v14 = 0;
LABEL_11:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
  return (unsigned int)v14;
}
