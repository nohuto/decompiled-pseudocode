/*
 * XREFs of ?RegisterPropertyChangeNotification@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJXZ @ 0x14006AC48
 * Callers:
 *     ?AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x14006A724 (-AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProce.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsDelegator@@$$QEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x14006A39C (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSyst.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::RegisterPropertyChangeNotification(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this)
{
  int inited; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, GUID *, __int64, PROPVARIANT *, char *); // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CAudioSystemEffectsPropertyChangeNotificationsHandler *v13; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 136) )
  {
    *(_OWORD *)pvar = 0LL;
    v11 = 0LL;
    inited = InitPropVariantFromCLSID((const IID *const)((char *)this + 40), pvar);
    v3 = inited;
    if ( inited < 0 )
    {
      v4 = 47LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
        (const char *)(unsigned int)inited);
      PropVariantClear(pvar);
      return v3;
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
    v13 = this;
    v8 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    inited = Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsDelegator,CAudioSystemEffectsPropertyChangeNotificationsHandler *>(
               (CAudioSystemEffectsPropertyChangeNotificationsDelegator **)this + 23,
               &v13);
    v3 = inited;
    if ( inited < 0 )
    {
      v4 = 50LL;
      goto LABEL_14;
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
