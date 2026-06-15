/*
 * XREFs of ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000914C
 * Callers:
 *     ?OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x1400021F0 (-OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140007DF0 (-OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140009CF0 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140009D80 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140009E70 (-OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnStreamStopped@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140009F50 (-OnStreamStopped@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140068E90 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140068F70 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::UpdateActiveStreamCount(CSubmixImpl *this, int a2)
{
  int v3; // edi
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // r9
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 42);
  *((_DWORD *)this + 42) = v3 + a2;
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  v5 = 0LL;
  v12 = 0LL;
  if ( v4 )
  {
    (**v4)(v4, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, &v12);
    v5 = v12;
  }
  if ( !v5 )
    goto LABEL_7;
  if ( v3 )
  {
    if ( v3 != 1 )
      goto LABEL_7;
    if ( *((_DWORD *)this + 42) )
      goto LABEL_7;
    v6 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v5 + 104LL))(v5, this);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_7;
    v9 = 606LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v6,
      v10);
    goto LABEL_8;
  }
  if ( *((_DWORD *)this + 42) == 1 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v5 + 96LL))(v5, this);
    v7 = v6;
    if ( v6 < 0 )
    {
      v9 = 601LL;
      goto LABEL_14;
    }
  }
LABEL_7:
  v7 = 0;
LABEL_8:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
  return v7;
}
