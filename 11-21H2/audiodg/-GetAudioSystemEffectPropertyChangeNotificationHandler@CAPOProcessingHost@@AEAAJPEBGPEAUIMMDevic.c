/*
 * XREFs of ?GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@U_GUID@@PEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x1400656BC
 * Callers:
 *     ?AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006517C (-AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEME.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14001CBBC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@AEAPEBGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAPEBGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x140064264 (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@AEAPEBGAEAU_GUID.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler(
        CAPOProcessingHost *this,
        unsigned __int16 *a2,
        struct IMMDevice *a3,
        struct _GUID *a4,
        struct CAudioSystemEffectsPropertyChangeNotificationsHandler **a5)
{
  char *v8; // rbx
  _QWORD *i; // rbx
  _QWORD *v10; // rcx
  struct CAudioSystemEffectsPropertyChangeNotificationsHandler *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned __int16 *v16; // rdi
  _QWORD *v17; // rbx
  CAudioSystemEffectsPropertyChangeNotificationsHandler *v18; // rcx
  int v19[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v20; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-48h]
  struct IMMDevice *v22; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v20 = a2;
  v22 = a3;
  v8 = (char *)this + 248;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  *(_QWORD *)v19 = v8;
  for ( i = (_QWORD *)*((_QWORD *)this + 36); i; i = (_QWORD *)*i )
  {
    v10 = (_QWORD *)(i[1] + 56LL);
    if ( *(_QWORD *)(i[1] + 80LL) >= 8uLL )
      v10 = (_QWORD *)*v10;
    if ( !(unsigned int)_o__wcsicmp(v10, a2) )
    {
      v11 = (struct CAudioSystemEffectsPropertyChangeNotificationsHandler *)i[1];
      v12 = *((_QWORD *)v11 + 5) - *(_QWORD *)&a4->Data1;
      if ( !v12 )
        v12 = *((_QWORD *)v11 + 6) - *(_QWORD *)a4->Data4;
      if ( !v12 )
      {
        if ( v11 )
        {
          *a5 = v11;
          (*(void (__fastcall **)(struct CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v11 + 8LL))(v11);
        }
        else
        {
          *a5 = 0LL;
        }
        break;
      }
    }
  }
  if ( !*a5 )
  {
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsHandler,CAudioSystemEffectsPropertyChangeNotificationsHandler,unsigned short const * &,_GUID &,IMMDevice * &>(
            a5,
            (const unsigned __int16 **)&v20,
            a4,
            &v22);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A1,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v13);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v19);
      return v14;
    }
    v16 = (unsigned __int16 *)((char *)this + 288);
    v20 = v16;
    v21 = 0LL;
    v17 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v21 = v17;
    v18 = *a5;
    v17[1] = *a5;
    if ( v18 )
      (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v18 + 8LL))(v18);
    *v17 = *(_QWORD *)v16;
    *(_QWORD *)v16 = v17;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v19);
  return 0LL;
}
