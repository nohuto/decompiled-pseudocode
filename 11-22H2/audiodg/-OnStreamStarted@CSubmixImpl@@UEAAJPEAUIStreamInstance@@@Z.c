/*
 * XREFs of ?OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140009E70
 * Callers:
 *     ?OnStreamStarted@CProcessSubmix@@UEAAJPEAUIStreamInstance@@@Z @ 0x140009230 (-OnStreamStarted@CProcessSubmix@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnStreamStarted@CStreamGroup@@UEAAJPEAUIStreamInstance@@@Z @ 0x140051570 (-OnStreamStarted@CStreamGroup@@UEAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000914C (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x14000994C (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::OnStreamStarted(
        CSubmixImpl *this,
        __int64 (__fastcall ***a2)(struct IStreamInstance *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 (__fastcall **v5)(struct IStreamInstance *, GUID *, __int64 *); // rax
  int updated; // ebx
  __int64 v7; // rax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = *a2;
  v12 = 0LL;
  updated = (*v5)((struct IStreamInstance *)a2, &GUID_88f600c8_fc0c_4be6_9b2e_3dffa507c48b, &v12);
  if ( updated < 0 )
  {
    v9 = 1412LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 88LL))(v12);
    if ( CSubmixImpl::FindStream(this, v7) )
    {
      updated = CSubmixImpl::UpdateActiveStreamCount(this, 1);
      if ( updated >= 0 )
      {
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
        if ( v4 )
          LeaveCriticalSection(v4);
        return 0LL;
      }
      v9 = 1416LL;
    }
    else
    {
      updated = -2005139430;
      v9 = 1413LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)updated,
    v10);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)updated;
}
