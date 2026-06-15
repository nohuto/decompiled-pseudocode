/*
 * XREFs of ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800DA780
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800DA940 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x180012788 (-ValidateAudioLevel@@YA_NM@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_dS @ 0x1800DB760 (WPP_SF_dS.c)
 */

__int64 __fastcall CAudioSession::SetAllVolumes(
        CAudioSession *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v6; // rsi
  int v9; // edi
  float *v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r14d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  float v18; // xmm1_4
  int v19; // [rsp+20h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v20[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25,
      (unsigned int)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      a2,
      *((_QWORD *)this + 82));
  }
  v9 = 0;
  if ( (_DWORD)v6 )
  {
    v10 = a3;
    while ( ValidateAudioLevel(*v10) )
    {
      v10 = (float *)(v11 + 4);
      if ( v12 + 1 >= (unsigned int)v6 )
        goto LABEL_9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AA,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
LABEL_9:
  v13 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v20[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  if ( (_DWORD)v6 != *((_DWORD *)this + 222) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v20);
    return 2147942487LL;
  }
  if ( (_DWORD)v6 )
  {
    v15 = 0LL;
    v16 = v6;
    do
    {
      v17 = *((_QWORD *)this + 112);
      v18 = a3[v15];
      if ( *(float *)(v17 + v15 * 4) != v18 )
      {
        *(float *)(v17 + v15 * 4) = v18;
        ++v13;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v20);
  LOBYTE(v19) = 0;
  (*(void (__fastcall **)(char *, __int64, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 1) + 152LL))(
    (char *)this + 8,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v19,
    0LL);
  if ( a5 )
  {
    LOBYTE(v9) = v13 == 0;
    *a5 = v9;
  }
  return 0LL;
}
