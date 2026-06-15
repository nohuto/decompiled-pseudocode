/*
 * XREFs of ?RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJXZ @ 0x1400731F8
 * Callers:
 *     ?AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140072C98 (-AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProce.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsDelegator@@$$QEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x1400728F4 (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSyst.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::RegisterPropertyChangeNotification(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this)
{
  HRESULT inited; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, __int64, PROPVARIANT *, char *); // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // esi
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CAudioSystemEffectsPropertyChangeNotificationsHandler *v15; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 136) )
  {
    *(_OWORD *)pvar = 0LL;
    v13 = 0LL;
    inited = InitPropVariantFromCLSID((const IID *const)((char *)this + 40), pvar);
    v3 = inited;
    if ( inited < 0 )
    {
      v4 = 47LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
        (const char *)(unsigned int)inited);
      goto LABEL_15;
    }
    v5 = *((_QWORD *)this + 11);
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, __int64, PROPVARIANT *, char *))(*(_QWORD *)v5 + 24LL);
    v7 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    inited = v6(v5, &GUID_302ae7f9_d7e0_43e4_971b_1f8293613d2a, 1LL, pvar, (char *)this + 144);
    v3 = inited;
    if ( inited < 0 )
    {
      v4 = 49LL;
      goto LABEL_14;
    }
    v15 = this;
    v8 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsHandler *>(
           (CAudioSystemEffectsPropertyChangeNotificationsDelegator **)this + 23,
           &v15);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
        (const char *)(unsigned int)v9);
      v3 = v10;
LABEL_15:
      PropVariantClear(pvar);
      return v3;
    }
    inited = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 64LL))(
               *((_QWORD *)this + 18),
               *((_QWORD *)this + 23));
    v3 = inited;
    if ( inited < 0 )
    {
      v4 = 51LL;
      goto LABEL_14;
    }
    *((_BYTE *)this + 136) = 1;
    PropVariantClear(pvar);
  }
  return 0LL;
}
