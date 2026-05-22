/*
 * XREFs of ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x180062EDC
 * Callers:
 *     ?AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z @ 0x180062500 (-AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18001B688 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B8CC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$BY0A@IU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800621D4 (--1-$out_param_t@V-$unique_ptr@$$BY0A@IU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z @ 0x1800643B0 (-SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall LampArrayRawInputProvider::UpdateDeviceAmbientProcess(RTL_SRWLOCK *this)
{
  const char *v2; // r9
  RTL_SRWLOCK *v3; // r14
  PVOID v4; // rdi
  void (__fastcall *v5)(PVOID, HSTRING *); // rbx
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  RTL_SRWLOCK *i; // rdi
  HSTRING v11; // rcx
  volatile signed __int32 *v12; // rbx
  const WCHAR *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  void *v17; // rcx
  RTL_SRWLOCK *Ptr; // rsi
  RTL_SRWLOCK **v19; // rax
  HSTRING string; // [rsp+20h] [rbp-40h] BYREF
  HSTRING string1; // [rsp+28h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-30h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-28h] BYREF
  LPVOID *p_pv; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  char v26; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v28; // [rsp+A8h] [rbp+48h] BYREF
  INT32 result; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+58h] BYREF

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x304,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      v2);
  wil::srwlock::lock_exclusive(this + 19, &v23);
  v3 = this + 15;
  while ( 1 )
  {
    Ptr = (RTL_SRWLOCK *)v3->Ptr;
    v19 = *(RTL_SRWLOCK ***)v3->Ptr;
    if ( *((RTL_SRWLOCK **)v3->Ptr + 1) != v3 || v19[1] != Ptr )
      __fastfail(3u);
    v3->Ptr = v19;
    v19[1] = v3;
    if ( Ptr == v3 )
      break;
    --this[17].Ptr;
    if ( !Ptr )
      break;
    string1 = 0LL;
    v28 = 0;
    v4 = Ptr[2].Ptr;
    v5 = *(void (__fastcall **)(PVOID, HSTRING *))(*(_QWORD *)v4 + 48LL);
    WindowsDeleteString(0LL);
    string1 = 0LL;
    v5(v4, &string1);
    v6 = (*(__int64 (__fastcall **)(PVOID, char *))(*(_QWORD *)Ptr[2].Ptr + 64LL))(Ptr[2].Ptr, &v28);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x30D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v6,
        (int)string);
    v30 = 0;
    pv = 0LL;
    v7 = (__int64 *)Ptr[2].Ptr;
    v8 = *v7;
    p_pv = &pv;
    v25 = 0LL;
    v26 = 1;
    v9 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *, __int64 *))(v8 + 56))(v7, &v30, &v25);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x312,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v9,
        (int)string);
    wil::details::out_param_t<wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pv);
    for ( i = (RTL_SRWLOCK *)this[9].Ptr; i != &this[9]; i = (RTL_SRWLOCK *)i->Ptr )
    {
      v11 = 0LL;
      string = 0LL;
      v12 = (volatile signed __int32 *)i[2].Ptr;
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 2);
        v11 = string;
      }
      WindowsDeleteString(v11);
      string = 0LL;
      v13 = (const WCHAR *)(*((_QWORD *)v12 + 3) + 24LL);
      v14 = -1LL;
      do
        ++v14;
      while ( v13[v14] );
      WindowsCreateString(v13, v14, &string);
      if ( string )
      {
        if ( WindowsGetStringLen(string1) >= 4 )
        {
          result = 0;
          if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
          {
            if ( v30 )
              v15 = *(_DWORD *)pv;
            else
              v15 = 0;
            if ( v30 <= 1 )
              v16 = 0;
            else
              v16 = *((_DWORD *)pv + 1);
            LampArrayDevice::SetAmbientPids((LampArrayDevice *)v12, v15, v16, v28 != 0);
            RefCountedObject::Release((RefCountedObject *)v12);
            WindowsDeleteString(string);
            break;
          }
        }
      }
      RefCountedObject::Release((RefCountedObject *)v12);
      WindowsDeleteString(string);
    }
    v17 = pv;
    pv = 0LL;
    if ( v17 )
      CoTaskMemFree(v17);
    WindowsDeleteString(string1);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
}
