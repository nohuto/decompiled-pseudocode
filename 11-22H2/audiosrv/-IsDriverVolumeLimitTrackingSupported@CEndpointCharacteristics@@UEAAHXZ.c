/*
 * XREFs of ?IsDriverVolumeLimitTrackingSupported@CEndpointCharacteristics@@UEAAHXZ @ 0x18014D420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsDriverVolumeLimitTrackingSupported(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 *v4; // [rsp+20h] [rbp-39h]
  __int64 v5; // [rsp+40h] [rbp-19h] BYREF
  __int64 v6; // [rsp+48h] [rbp-11h] BYREF
  __int64 v7; // [rsp+50h] [rbp-9h] BYREF
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-1h] BYREF
  __int64 v9; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v11; // [rsp+70h] [rbp+17h] BYREF
  _BYTE v12[20]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+8Ch] [rbp+33h]
  int v14; // [rsp+94h] [rbp+3Bh]
  unsigned __int16 v15; // [rsp+C0h] [rbp+67h] BYREF
  int v16; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v17; // [rsp+D0h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( !*((_DWORD *)this + 55) )
  {
    *((_DWORD *)this + 54) = 0;
    v2 = *((_QWORD *)this + 4);
    v11 = 0LL;
    v10 = 0LL;
    *(_OWORD *)&v12[4] = 0LL;
    v13 = 0LL;
    v14 = 0;
    v16 = 0;
    pv = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
    v6 = 0LL;
    v5 = 0LL;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 24LL))(
           v2,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           1LL,
           0LL,
           &v7) < 0
      || (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 0LL, &v6) < 0
      || (*(int (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v6 + 64LL))(
           v6,
           &v8) < 0
      || (**v8)(v8, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v5) < 0
      || (*(int (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v5 + 32LL))(v5, &v15) < 0
      || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 96LL))(v5, &v9) < 0 )
    {
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v5);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v6);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v8);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
      CoTaskMemFree(pv);
    }
    else
    {
      if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 64LL))(v9, &pv) >= 0
        && ((int (__fastcall *)(struct IMMDeviceEnumerator *, LPVOID, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
             g_DeviceEnumerator,
             pv,
             &v11) >= 0 )
      {
        v4 = &v10;
        if ( (*(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v11 + 24LL))(
               v11,
               &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
               1LL) >= 0 )
        {
          v14 = 0;
          *(GUID *)v12 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000;
          *(_DWORD *)&v12[16] = 57;
          LODWORD(v13) = 512;
          HIDWORD(v13) = v15;
          LODWORD(v4) = 4;
          if ( (*(int (__fastcall **)(__int64, _BYTE *, __int64, unsigned int *, __int64 *, int *))(*(_QWORD *)v10 + 24LL))(
                 v10,
                 v12,
                 32LL,
                 &v17,
                 v4,
                 &v16) >= 0 )
            *((_DWORD *)this + 54) = (v17 >> 1) & 1;
          *((_DWORD *)this + 55) = 1;
        }
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v5);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v6);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v8);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
  }
  return *((unsigned int *)this + 54);
}
