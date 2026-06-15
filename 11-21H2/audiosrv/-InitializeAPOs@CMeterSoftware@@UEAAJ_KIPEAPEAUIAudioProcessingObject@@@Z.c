/*
 * XREFs of ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18000B580
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMeterSoftware::InitializeAPOs(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  ULONG_PTR *p_SpinCount; // rdi
  ULONG_PTR SpinCount; // rcx
  unsigned int v10; // r14d
  int v11; // eax
  unsigned int v12; // esi
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a3 )
    return 0LL;
  v7 = this + 1;
  EnterCriticalSection(this + 1);
  *(_QWORD *)v16 = v7;
  p_SpinCount = &this->SpinCount;
  SpinCount = this->SpinCount;
  v10 = 0;
  if ( SpinCount )
  {
    *p_SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  while ( ((__int64 (__fastcall *)(_QWORD, GUID *, ULONG_PTR *))(*a4)->lpVtbl->QueryInterface)(
            *a4,
            &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c,
            &this->SpinCount) < 0 )
  {
    ++v10;
    ++a4;
    if ( v10 >= a3 )
      goto LABEL_8;
  }
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, HANDLE *))(*(_QWORD *)*p_SpinCount + 32LL))(
          *p_SpinCount,
          &this->LockSemaphore);
  v12 = v11;
  if ( v11 < 0 )
  {
    v14 = (unsigned int)v11;
    v15 = 733LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\metercontrol.cpp",
      (const char *)v14,
      v16[0]);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v16);
    return v12;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 392LL))(g_PolicyManager) )
    (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)*p_SpinCount + 40LL))(*p_SpinCount, 1LL);
LABEL_8:
  if ( !*p_SpinCount )
  {
    v12 = -2147023537;
    v14 = 2147943759LL;
    v15 = 746LL;
    goto LABEL_16;
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
