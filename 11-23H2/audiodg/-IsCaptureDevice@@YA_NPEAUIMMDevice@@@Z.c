/*
 * XREFs of ?IsCaptureDevice@@YA_NPEAUIMMDevice@@@Z @ 0x14006D408
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall IsCaptureDevice(struct IMMDevice *a1)
{
  bool v1; // bl
  struct IMMDeviceVtbl *lpVtbl; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  lpVtbl = a1->lpVtbl;
  v6 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a1,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v6) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, &v5) >= 0 )
  {
    v1 = v5 == 1;
    if ( v5 != 1 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AE,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)0x8000FFFFLL);
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v6);
  return v1;
}
