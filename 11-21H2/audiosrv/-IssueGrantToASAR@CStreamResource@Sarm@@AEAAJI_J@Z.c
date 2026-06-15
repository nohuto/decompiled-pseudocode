/*
 * XREFs of ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x18012B96C
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x18012BEB0 (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F40 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@35@Z @ 0x18012AF08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U1@U3@@-$_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Sarm::CStreamResource::IssueGrantToASAR(__int64 **this, unsigned int a2, __int64 a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64, __int64, _QWORD, __int64); // rdi
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 **v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v25; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+48h] BYREF

  v6 = *this;
  if ( !v6 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL,
      v19);
  v20 = 0LL;
  v7 = *v6;
  v20 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 120))(v6, &v20);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = 252LL;
LABEL_10:
    v15 = (unsigned int)v8;
    goto LABEL_11;
  }
  v14 = v20;
  if ( !v20 )
  {
    v12 = -2005139195;
    v15 = 2289828101LL;
    v13 = 253LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)v15);
    goto LABEL_15;
  }
  if ( ((_DWORD)this[6] & 0x800000) != 0 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v20 + 64LL);
    v17 = (*(__int64 (__fastcall **)(__int64 *))(**this + 40))(*this);
    v8 = v16(v14, v17, a2, a3);
    v12 = v8;
    if ( v8 < 0 )
    {
      v13 = 258LL;
      goto LABEL_10;
    }
  }
  if ( (unsigned int)dword_1801C0178 > 4 )
  {
    v25 = *((_DWORD *)this + 13);
    v21 = a3;
    v26 = a2;
    v22 = this + 2;
    v23 = this[5];
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v9,
      byte_18018BDB4,
      v10,
      v11,
      (__int64)&v23,
      (__int64 *)&v22,
      (__int64)&v26,
      (__int64)&v21,
      (__int64)&v25);
  }
  v12 = 0;
LABEL_15:
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v20);
  return v12;
}
