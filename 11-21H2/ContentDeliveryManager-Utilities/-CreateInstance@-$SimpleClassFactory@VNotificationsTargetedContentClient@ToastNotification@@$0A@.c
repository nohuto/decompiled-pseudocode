/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180077BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180074D28 (--$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@$$V@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<ToastNotification::NotificationsTargetedContentClient,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL, a3, a4);
    return (unsigned int)v6;
  }
  v10 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<ToastNotification::NotificationsTargetedContentClient,IUnknown,>(&v10);
  if ( v6 < 0 )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return (unsigned int)v6;
  }
  v8 = v10;
  v9 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v10)(v10, a3, a4);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
