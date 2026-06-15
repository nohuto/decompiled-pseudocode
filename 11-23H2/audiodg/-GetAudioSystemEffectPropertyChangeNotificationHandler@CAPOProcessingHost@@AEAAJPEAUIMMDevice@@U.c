/*
 * XREFs of ?GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U_GUID@@PEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x14006C48C
 * Callers:
 *     ?AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006BFAC (-AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEME.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400065C4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@$$QEAPEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x14006A65C (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@A.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler(
        CAPOProcessingHost *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        struct CAudioSystemEffectsPropertyChangeNotificationsHandler **a4)
{
  struct IMMDevice *v8; // rbx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  int v10; // eax
  unsigned int v11; // edi
  _QWORD *v13; // r14
  _QWORD *i; // rdi
  _QWORD *v15; // rcx
  struct CAudioSystemEffectsPropertyChangeNotificationsHandler *v16; // r8
  int v17; // eax
  unsigned int v18; // edi
  _QWORD *v19; // rdi
  CAudioSystemEffectsPropertyChangeNotificationsHandler *v20; // rcx
  LPVOID pv; // [rsp+20h] [rbp-68h] BYREF
  const unsigned __int16 *v22; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v23; // [rsp+30h] [rbp-58h]
  struct IMMDevice *v24[2]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v24[0] = a2;
  v8 = (struct IMMDevice *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v24[1] = v8;
  pv = 0LL;
  GetId = a2->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v10 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(a2, &pv);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x265,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v10);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v8 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v8);
    return v11;
  }
  v13 = (_QWORD *)((char *)this + 288);
  for ( i = (_QWORD *)*((_QWORD *)this + 36); i; i = (_QWORD *)*i )
  {
    v15 = (_QWORD *)(i[1] + 56LL);
    if ( *(_QWORD *)(i[1] + 80LL) >= 8uLL )
      v15 = (_QWORD *)*v15;
    if ( !(unsigned int)_o__wcsicmp(v15, pv) && IsEqualGUID((const struct _GUID *)(i[1] + 40LL), a3) )
    {
      if ( v16 )
      {
        *a4 = v16;
        (*(void (__fastcall **)(struct CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v16 + 8LL))(v16);
      }
      else
      {
        *a4 = 0LL;
      }
      break;
    }
  }
  if ( !*a4 )
  {
    v22 = (const unsigned __int16 *)pv;
    v17 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsHandler,CAudioSystemEffectsPropertyChangeNotificationsHandler,unsigned short *,_GUID &,IMMDevice * &>(
            a4,
            &v22,
            a3,
            v24);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x272,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v17);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v8 )
        LeaveCriticalSection((LPCRITICAL_SECTION)v8);
      return v18;
    }
    v22 = (const unsigned __int16 *)((char *)this + 288);
    v23 = 0LL;
    v19 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v23 = v19;
    v20 = *a4;
    v19[1] = *a4;
    if ( v20 )
      (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v20 + 8LL))(v20);
    *v19 = *v13;
    *v13 = v19;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( v8 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v8);
  return 0LL;
}
