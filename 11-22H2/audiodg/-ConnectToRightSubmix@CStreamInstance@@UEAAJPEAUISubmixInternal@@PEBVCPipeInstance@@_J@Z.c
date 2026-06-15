/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x14001E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14005C1C4 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     wil::details::lambda_call__lambda_bb23abc9ce18e0369a9e7950b739c66a___::_lambda_call__lambda_bb23abc9ce18e0369a9e7950b739c66a___ @ 0x1400773B8 (wil--details--lambda_call__lambda_bb23abc9ce18e0369a9e7950b739c66a___--_lambda_call__lambda_bb23.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::ConnectToRightSubmix(
        CStreamInstance *this,
        struct ISubmixInternal *a2,
        const struct CPipeInstance *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17[4]; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)a2;
  v20 = 0LL;
  (*(void (__fastcall **)(struct ISubmixInternal *, __int64 *))(v6 + 120))(a2, &v20);
  *(_QWORD *)v17 = &v20;
  *(_QWORD *)&v17[2] = this;
  v18 = 1;
  if ( v20 )
  {
    v7 = (*(__int64 (__fastcall **)(CStreamInstance *))(*(_QWORD *)this + 96LL))(this);
    v8 = v7;
    if ( v7 < 0 )
    {
      v13 = (unsigned int)v7;
      v14 = 127LL;
      goto LABEL_16;
    }
  }
  if ( !a3 )
  {
    v9 = *(_QWORD *)a2;
    v10 = *((_QWORD *)this + 10);
    if ( *((_DWORD *)this + 25) == 2 )
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v9 + 32))(a2, v10);
    else
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v9 + 24))(a2, v10);
    v8 = v11;
    if ( v11 >= 0 )
      goto LABEL_7;
    v13 = (unsigned int)v11;
    v14 = 142LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)v13,
      v17[0]);
    wil::details::lambda_call__lambda_bb23abc9ce18e0369a9e7950b739c66a___::_lambda_call__lambda_bb23abc9ce18e0369a9e7950b739c66a___(v17);
    goto LABEL_8;
  }
  v15 = CPipeInstance::ConnectToRightPipe(*((CPipeInstance **)this + 10), a3);
  v8 = v15;
  if ( v15 < 0 )
  {
    v13 = (unsigned int)v15;
    v14 = 134LL;
    goto LABEL_16;
  }
  v16 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 10));
  v8 = v16;
  if ( v16 < 0 )
  {
    v13 = (unsigned int)v16;
    v14 = 136LL;
    goto LABEL_16;
  }
LABEL_7:
  *((_BYTE *)this + 97) = 1;
  v8 = 0;
LABEL_8:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v20);
  return v8;
}
