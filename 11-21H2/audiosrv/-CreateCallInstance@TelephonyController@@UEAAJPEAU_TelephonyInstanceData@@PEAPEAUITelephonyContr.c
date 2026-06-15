/*
 * XREFs of ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180160220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     ?AcquirePhoneCallResource@@YAJPEA_K@Z @ 0x180065C28 (-AcquirePhoneCallResource@@YAJPEA_K@Z.c)
 *     ?ReleaseSaDeviceResource@@YAJPEA_K@Z @ 0x180065CB4 (-ReleaseSaDeviceResource@@YAJPEA_K@Z.c)
 *     ?CreateInstance@TelephonyControllerCallInstance@@SAJPEA_KPEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x18006A444 (-CreateInstance@TelephonyControllerCallInstance@@SAJPEA_KPEAUIKsControl@@PEAU_TelephonyInstanceD.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ObtainKsControl@TelephonyController@@AEAAJIPEAPEAUIKsControl@@@Z @ 0x1801617D8 (-ObtainKsControl@TelephonyController@@AEAAJIPEAPEAUIKsControl@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyController::CreateCallInstance(
        TelephonyController *this,
        struct _TelephonyInstanceData *a2,
        struct ITelephonyControllerCallInstance **a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  unsigned __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  struct IKsControl *v10; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v11[520]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v12; // [rsp+258h] [rbp+158h]
  _BYTE v13[520]; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v14; // [rsp+464h] [rbp+364h]

  v6 = 0;
  v9 = 0LL;
  v10 = 0LL;
  memset_0(v11, 0, 0x418uLL);
  if ( a3 )
  {
    v7 = (*(__int64 (__fastcall **)(TelephonyController *, _BYTE *))(*(_QWORD *)this + 56LL))(this, v11);
    if ( v7 < 0
      || (v7 = TelephonyController::ObtainKsControl(this, *((_DWORD *)a2 + 1), &v10), v7 < 0)
      || (v7 = AcquirePhoneCallResource(&v9), v7 < 0)
      || (v7 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, _BYTE *, _QWORD, int, _DWORD))(*(_QWORD *)g_AudioResourceManager + 64LL))(
                 g_AudioResourceManager,
                 0LL,
                 v11,
                 v12,
                 1,
                 0),
          v7 < 0)
      || (v7 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, _BYTE *, _QWORD, int, int))(*(_QWORD *)g_AudioResourceManager + 64LL))(
                 g_AudioResourceManager,
                 0LL,
                 v13,
                 v14,
                 1,
                 1),
          v7 < 0)
      || (v7 = TelephonyControllerCallInstance::CreateInstance(&v9, (struct IUnknown *)v10, a2, a3), v7 < 0) )
    {
      v6 = v7;
      if ( v9 )
      {
        ReleaseSaDeviceResource(&v9);
        v9 = 0LL;
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  return v6;
}
