/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x140006A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::ConnectToRightSubmix(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 (__fastcall ***a2)(struct ISubmix *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 (__fastcall **v5)(struct ISubmix *, GUID *, __int64 *); // rax
  int v6; // ebx
  __int64 v7; // rdi
  ULONG_PTR *p_SpinCount; // r14
  __int64 v9; // rbx
  const struct _GUID *v10; // rbx
  const struct _GUID *v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  const struct _GUID *v15; // rax
  int v16; // [rsp+20h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v18[16]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v19[16]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v20[16]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = this + 5;
  EnterCriticalSection(this + 5);
  v5 = *a2;
  v17 = 0LL;
  v6 = (*v5)((struct ISubmix *)a2, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, &v17);
  if ( v6 < 0 )
  {
    v13 = 479LL;
  }
  else
  {
    v7 = v17;
    p_SpinCount = &this[-1].SpinCount;
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR *))(this[-1].SpinCount + 128))(&this[-1].SpinCount);
    if ( v9 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7) )
    {
      v14 = 482LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)0x80070057LL,
        v16);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 2147942487LL;
    }
    if ( BYTE1(this[6].DebugInfo)
      && (this[2].RecursionCount != 2 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 128LL))(v17)) )
    {
      v14 = 487LL;
      goto LABEL_20;
    }
    v10 = (const struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 160LL))(v17, v18);
    v11 = (const struct _GUID *)(*(__int64 (__fastcall **)(ULONG_PTR *, _BYTE *))(*p_SpinCount + 136))(
                                  &this[-1].SpinCount,
                                  v19);
    if ( !(unsigned int)IsEqualGUID(v11, v10) )
    {
      v15 = (const struct _GUID *)(*(__int64 (__fastcall **)(ULONG_PTR *, _BYTE *))(*p_SpinCount + 136))(
                                    &this[-1].SpinCount,
                                    v20);
      if ( !(unsigned int)IsEqualGUID(v15, &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
      {
        v14 = 494LL;
        goto LABEL_20;
      }
    }
    v6 = (*(__int64 (__fastcall **)(ULONG_PTR *, __int64, _QWORD, _QWORD))(*p_SpinCount + 56))(
           &this[-1].SpinCount,
           v17,
           0LL,
           0LL);
    if ( v6 >= 0 )
    {
      PublishDeviceGraphWnfState();
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
    v13 = 497LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)(unsigned int)v6,
    v16);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v6;
}
