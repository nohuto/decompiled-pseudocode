/*
 * XREFs of ?DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@@Z @ 0x14001E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x1400177C4 (-OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::DisconnectFromRightSubmix(CStreamInstance *this, struct ISubmixInternal *a2)
{
  __int64 (__fastcall **v4)(_QWORD, _QWORD); // rax
  __int64 v5; // rdx
  int v6; // eax
  int v7; // ebx
  CPipeInstance *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(__int64 (__fastcall ***)(_QWORD, _QWORD))a2;
  if ( *((_BYTE *)this + 248) )
  {
    v5 = *((_QWORD *)this + 10);
    if ( *((_DWORD *)this + 25) == 2 )
      v6 = ((__int64 (__fastcall **)(struct ISubmixInternal *, __int64))v4)[22](a2, v5);
    else
      v6 = ((__int64 (__fastcall **)(struct ISubmixInternal *, __int64))v4)[21](a2, v5);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_5;
    v12 = 181LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v7,
      v13);
    return (unsigned int)v7;
  }
  v7 = ((__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))v4)[6](a2, *((_QWORD *)this + 10));
  if ( v7 < 0 )
  {
    v12 = 185LL;
    goto LABEL_10;
  }
LABEL_5:
  *((_BYTE *)this + 97) = 0;
  v8 = (CPipeInstance *)*((_QWORD *)this + 10);
  v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 64LL))(a2);
  CPipeInstance::OnDisconnectedFromRightSubmix(v8, v9);
  v10 = *(_QWORD *)a2;
  v15 = 0LL;
  (*(void (__fastcall **)(struct ISubmixInternal *, __int64 *))(v10 + 120))(a2, &v15);
  if ( v15 )
    (*(void (__fastcall **)(CStreamInstance *))(*(_QWORD *)this + 104LL))(this);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v15);
  return 0LL;
}
