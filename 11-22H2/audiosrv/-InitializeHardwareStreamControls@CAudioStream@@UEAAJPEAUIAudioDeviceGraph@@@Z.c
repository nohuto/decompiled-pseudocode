/*
 * XREFs of ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800EC7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x18000C968 (-InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::InitializeHardwareStreamControls(CAudioStream *this, struct IAudioDeviceGraph *a2)
{
  _QWORD *v2; // r15
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 184);
  *((_DWORD *)this + 35) = 2;
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)this + 23);
  v5 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         v2);
  if ( v5 < 0 )
  {
    v6 = 717LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)this + 24);
  v5 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, char *))a2)(
         a2,
         &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
         (char *)this + 192);
  if ( v5 < 0 )
  {
    v6 = 718LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)this + 25);
  v5 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, char *))a2)(
         a2,
         &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c,
         (char *)this + 200);
  if ( v5 < 0 )
  {
    v6 = 719LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 32LL))(
         *((_QWORD *)this + 25),
         (char *)this + 100);
  if ( v5 < 0 )
  {
    v6 = 721LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v2 + 40LL))(*v2, &v9);
  if ( v5 < 0 )
  {
    v6 = 724LL;
    goto LABEL_3;
  }
  v5 = CAudioStream::InitializeVolumeCoefficientCount(this, v9);
  if ( v5 < 0 )
  {
    v6 = 725LL;
    goto LABEL_3;
  }
  return 0LL;
}
