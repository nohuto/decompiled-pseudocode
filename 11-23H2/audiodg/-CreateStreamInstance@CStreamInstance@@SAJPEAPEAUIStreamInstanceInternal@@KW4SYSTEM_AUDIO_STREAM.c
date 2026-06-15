/*
 * XREFs of ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J4U_GUID@@@Z @ 0x1400777D4
 * Callers:
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140063540 (-CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStr.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140063C20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140067460 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140005F10 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::CreateStreamInstance(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8)
{
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int128 *); // r11
  __int64 v16; // rax
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v20 = 0LL;
  v12 = ATL::CComCreator<ATL::CComObject<CStreamInstance>>::CreateInstance(
          (__int64)a1,
          (__int64)&GUID_88f600c8_fc0c_4be6_9b2e_3dffa507c48b,
          &v20);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int128 *))(*(_QWORD *)v20 + 144LL);
    v18 = *a8;
    v12 = v15(v20, a2, a3, a4, a5, a6, a7, &v18);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v16 = v20;
      v20 = 0LL;
      *a1 = v16;
      v13 = 0;
      goto LABEL_7;
    }
    v14 = 100LL;
  }
  else
  {
    v14 = 98LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)(unsigned int)v12);
LABEL_7:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v20);
  return v13;
}
