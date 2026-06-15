/*
 * XREFs of ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14001DE68
 * Callers:
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14001E4C0 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14001E5B0 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14001E680 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14001E770 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
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
    (**v4)(v4, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v12);
    v5 = v12;
  }
  if ( !v5 )
    goto LABEL_9;
  if ( v3 )
  {
    if ( v3 != 1 || *((_DWORD *)this + 42) )
      goto LABEL_9;
    v6 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v5 + 104LL))(v5, this);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_8;
    v9 = 784LL;
  }
  else
  {
    if ( *((_DWORD *)this + 42) != 1 )
      goto LABEL_9;
    v6 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v5 + 96LL))(v5, this);
    v7 = v6;
    if ( v6 >= 0 )
    {
LABEL_8:
      v5 = v12;
LABEL_9:
      v7 = 0;
      goto LABEL_10;
    }
    v9 = 779LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v6,
    v10);
  v5 = v12;
LABEL_10:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
