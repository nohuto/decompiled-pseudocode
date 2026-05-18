/*
 * XREFs of DwmpStartWinlogonMouseThread @ 0x180008B80
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059F0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?8VCKstWinLogon@@U?$default_delete@VCKstWinLogon@@@std@@@std@@YA_NAEBV?$unique_ptr@VCKstWinLogon@@U?$default_delete@VCKstWinLogon@@@std@@@0@$$T@Z @ 0x180006684 (--$-8VCKstWinLogon@@U-$default_delete@VCKstWinLogon@@@std@@@std@@YA_NAEBV-$unique_ptr@VCKstWinLo.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x18000A23C (--1CKstBase@@QEAA@XZ.c)
 *     ?Reset@CKstBase@@QEAAJPEBG@Z @ 0x18000A980 (-Reset@CKstBase@@QEAAJPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E320 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 DwmpStartWinlogonMouseThread()
{
  HANDLE ProcessHeap; // rax
  CKstBase *v2; // rax
  CKstBase *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  HANDLE v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  GUID *v13; // [rsp+50h] [rbp+8h] BYREF
  GUID *v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  if ( gpKstWinLogon )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x735,
      (__int64)"onecoreuap\\windows\\dwm\\dwminit\\dll\\dwminit.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  gpKstWinLogon = 0LL;
  ProcessHeap = GetProcessHeap();
  v2 = (CKstBase *)HeapAlloc(ProcessHeap, 8u, 0x28uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *(_QWORD *)v2 = &CKstWinLogon::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  v13 = (GUID *)v3;
  if ( std::operator==<CKstWinLogon,std::default_delete<CKstWinLogon>>(&v13) )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x717,
      (__int64)"onecoreuap\\windows\\dwm\\dwminit\\dll\\dwminit.cpp",
      (const char *)0x8007000ELL);
    if ( !v3 )
    {
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x737,
        (__int64)"onecoreuap\\windows\\dwm\\dwminit\\dll\\dwminit.cpp",
        (const char *)v4);
      return v4;
    }
LABEL_14:
    CKstBase::~CKstBase(v3);
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v3);
    goto LABEL_15;
  }
  v5 = (**(__int64 (__fastcall ***)(CKstBase *))v3)(v3);
  v4 = v5;
  if ( v5 < 0 )
  {
    v7 = 1817LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwminit\\dll\\dwminit.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_14;
  }
  v5 = CKstBase::Reset(v3, v6);
  v4 = v5;
  if ( v5 < 0 )
  {
    v7 = 1819LL;
    goto LABEL_13;
  }
  gpKstWinLogon = v3;
  if ( (unsigned int)dword_180015000 > 5
    && (qword_180015010 & 0x400000000000LL) != 0
    && (qword_180015018 & 0x400000000000LL) == qword_180015018 )
  {
    v15 = 0x1000000LL;
    v13 = &gDwmInitTargetAppSessionGuid;
    v14 = &gDwmInitTelemetryActivityId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
      v8,
      (int)&unk_1800111EF,
      v9,
      v10,
      (__int64)&v15,
      (__int64 *)&v14,
      (__int64 *)&v13);
  }
  return 0LL;
}
