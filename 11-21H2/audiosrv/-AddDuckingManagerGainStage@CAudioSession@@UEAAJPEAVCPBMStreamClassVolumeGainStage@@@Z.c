/*
 * XREFs of ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCPBMStreamClassVolumeGainStage@@@Z @ 0x1800D6630
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F07C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::AddDuckingManagerGainStage(
        CAudioSession *this,
        struct CPBMStreamClassVolumeGainStage *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  volatile int *v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF
  struct CPBMStreamClassVolumeGainStage *v12; // [rsp+48h] [rbp+10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 328);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  v11 = v4;
  v6 = (_QWORD *)((char *)this + 368);
  v12 = a2;
  if ( a2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (struct CPBMStreamClassVolumeGainStage *)((char *)a2 + 52),
      v5);
  try
  {
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v7[1] = a2;
    *v7 = *v6;
    *v6 = v7;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDDB,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v8);
  }
  return result;
}
