/*
 * XREFs of ?GetKsControl@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEAPEAUIKsControl@@@Z @ 0x1800FFCDC
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF1B4 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CConstraintModelResourceManager::GetKsControl(
        CConstraintModelResourceManager *this,
        struct IMMDevice *a2,
        struct IKsControl **a3)
{
  int v3; // eax
  int v4; // r9d
  __int64 v5; // r8
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  LPVOID v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+10h] BYREF
  __int64 v16; // [rsp+68h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+28h] BYREF

  pv = this;
  v14 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
         a2,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         23LL);
  v4 = v3;
  v5 = 0LL;
  v13 = 0LL;
  if ( v3 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v14 + 32LL))(
           v14,
           0LL,
           &v13,
           (unsigned int)v3);
    v5 = v13;
  }
  v6 = 0LL;
  v12 = 0LL;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v5 + 64LL))(
           v5,
           &v12);
    v6 = v12;
  }
  v7 = 0LL;
  v11 = 0LL;
  if ( v4 >= 0 )
  {
    v4 = (**v6)(v6, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v11);
    v7 = v11;
  }
  v8 = 0LL;
  v17 = 0LL;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 96LL))(v7, &v17);
    v8 = v17;
  }
  v9 = 0LL;
  pv = 0LL;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 64LL))(v8, &pv);
    v9 = pv;
  }
  v16 = 0LL;
  if ( v4 >= 0
    && ((int (__fastcall *)(struct IMMDeviceEnumerator *, LPVOID, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         v9,
         &v16) >= 0 )
  {
    (*(void (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v16 + 24LL))(
      v16,
      &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
      23LL);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
  CoTaskMemFree(pv);
  pv = 0LL;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
  return 0LL;
}
