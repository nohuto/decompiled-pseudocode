/*
 * XREFs of ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180166290
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ObtainKsControl@TelephonyController@@AEAAJIPEAPEAUIKsControl@@@Z @ 0x180167830 (-ObtainKsControl@TelephonyController@@AEAAJIPEAPEAUIKsControl@@@Z.c)
 *     ?CreateInstance@TelephonyControllerCallInstance@@SAJPEA_KPEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x18016807C (-CreateInstance@TelephonyControllerCallInstance@@SAJPEA_KPEAUIKsControl@@PEAU_TelephonyInstanceD.c)
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
      || (v7 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, unsigned __int64 *))(*(_QWORD *)g_AudioResourceManager
                                                                                             + 72LL))(
                 g_AudioResourceManager,
                 &v9),
          v7 < 0)
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
      || (v7 = TelephonyControllerCallInstance::CreateInstance(&v9, v10, a2, a3), v7 < 0) )
    {
      v6 = v7;
      if ( v9 )
      {
        (*(void (__fastcall **)(struct IAudioResourceManager *, unsigned __int64 *))(*(_QWORD *)g_AudioResourceManager
                                                                                   + 40LL))(
          g_AudioResourceManager,
          &v9);
        v9 = 0LL;
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v10);
  return v6;
}
