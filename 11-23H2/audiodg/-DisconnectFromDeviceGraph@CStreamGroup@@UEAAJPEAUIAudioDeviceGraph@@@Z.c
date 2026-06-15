/*
 * XREFs of ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140063F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStreamGroup::DisconnectFromDeviceGraph(CStreamGroup *this, struct IAudioDeviceGraph *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  if ( !*((_BYTE *)this + 337) )
  {
    v9 = 0LL;
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset(&v9);
    v5 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, __int64 *))a2)(
           a2,
           &GUID_09874cb6_a367_4918_b747_2b660bde30d1,
           &v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x103,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v9);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v6;
    }
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 3) + 112LL))((char *)this + 24, v9);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v9);
  }
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset((__int64 *)this + 41);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
