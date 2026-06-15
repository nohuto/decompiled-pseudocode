/*
 * XREFs of ?CreateBridgeSourceStreamForMicInjection@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIStreamInstance@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002E450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x140008790 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@2@Z @ 0x14002B440 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ??$com_query_to@UIStreamInstanceInternal@@AEAPEAUIStreamInstance@@@wil@@YAXAEAPEAUIStreamInstance@@PEAPEAUIStreamInstanceInternal@@@Z @ 0x14002E3F8 (--$com_query_to@UIStreamInstanceInternal@@AEAPEAUIStreamInstance@@@wil@@YAXAEAPEAUIStreamInstanc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::CreateBridgeSourceStreamForMicInjection(
        CStreamInstance *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IStreamInstance *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  CPipeInstance *v7; // rax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+20h] [rbp-28h]
  struct CConnectionInstance *v12; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  struct IStreamInstance *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v5 = (*(__int64 (__fastcall **)(CStreamInstance *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, _QWORD, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)this + 24LL))(
         this,
         a2,
         0LL,
         a4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v14 = 0LL;
    wil::com_query_to<IStreamInstanceInternal,IStreamInstance * &>(&v15, (__int64)&v14);
    v7 = (CPipeInstance *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
    v12 = 0LL;
    CPipeInstance::GetAPONodeAndConnection(v7, &GUID_c23bdc7a_47f8_49a1_b750_692c35b532c3, 0LL, 0LL, 0LL, &v12);
    v8 = CPipeInstance::ResolvePendingConnections(*((_QWORD *)this + 9), -1LL, *((_QWORD *)v12 + 1), 1);
    v6 = v8;
    if ( v8 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x266,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v8,
        v11);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v5,
      v10);
  }
  return v6;
}
