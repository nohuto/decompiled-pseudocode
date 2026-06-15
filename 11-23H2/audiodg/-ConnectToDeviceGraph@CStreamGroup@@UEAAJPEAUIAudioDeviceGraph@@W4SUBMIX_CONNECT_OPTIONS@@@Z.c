/*
 * XREFs of ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140002560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400073F0 (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStreamGroup::ConnectToDeviceGraph(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v12 = 0LL;
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset(&v12);
  v7 = (**a2)(a2, &GUID_09874cb6_a367_4918_b747_2b660bde30d1, &v12);
  if ( v7 < 0 )
  {
    v9 = 229LL;
  }
  else if ( *(_QWORD *)(a1 + 328) )
  {
    v7 = -2005139410;
    v9 = 232LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 337) )
    {
      wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(a1 + 328, v12);
      goto LABEL_5;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 24) + 272LL))(a1 + 24, v12, a3);
    if ( v7 >= 0 )
    {
LABEL_5:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
      if ( v3 )
        LeaveCriticalSection(v3);
      return 0LL;
    }
    v9 = 237LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)(unsigned int)v7,
    v10);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
