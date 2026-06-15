/*
 * XREFs of ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x1801393D0
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x180139780 (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@35@Z @ 0x1801387E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U1@U3@@-$_.c)
 */

__int64 __fastcall Sarm::CStreamResource::NotifyClientOfGrant(Sarm::CStreamResource *this, unsigned int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v15; // [rsp+80h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)this + 160LL))(
         *(_QWORD *)this,
         0LL,
         a3,
         a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( (unsigned int)dword_1801CD178 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1801CD178, 0x400000000000LL) )
      {
        v16 = *((_DWORD *)this + 13);
        v12 = (__int64)this + 16;
        v13[0] = *((_QWORD *)this + 5);
        v17 = a3;
        v15 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v9,
          byte_180194D9D,
          v10,
          v11,
          (__int64)v13,
          &v12,
          (__int64)&v15,
          (__int64)&v17,
          (__int64)&v16);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x117,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
