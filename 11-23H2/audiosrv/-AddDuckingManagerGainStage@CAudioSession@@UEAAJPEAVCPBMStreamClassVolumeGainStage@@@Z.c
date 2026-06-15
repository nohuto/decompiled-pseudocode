/*
 * XREFs of ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCPBMStreamClassVolumeGainStage@@@Z @ 0x1800DEFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::AddDuckingManagerGainStage(
        CAudioSession *this,
        struct CPBMStreamClassVolumeGainStage *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  volatile int *v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 328);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  v6 = (_QWORD *)((char *)this + 368);
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
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDD9,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v8);
  }
  return result;
}
