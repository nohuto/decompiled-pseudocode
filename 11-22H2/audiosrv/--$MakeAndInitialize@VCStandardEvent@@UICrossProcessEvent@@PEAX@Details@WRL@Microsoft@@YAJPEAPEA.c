/*
 * XREFs of ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x18011BBE4
 * Callers:
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z @ 0x180042950 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000C61C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CStandardEvent@@QEAA@XZ @ 0x18011C3D0 (--0CStandardEvent@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(
        _QWORD *a1,
        wil::details **a2)
{
  void *v4; // rax
  wil::details **v6; // rdi
  unsigned int v7; // ebx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v6 = (wil::details **)CStandardEvent::CStandardEvent((CStandardEvent *)v4);
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      v6 + 2,
      *a2);
    v7 = (*(__int64 (__fastcall **)(wil::details **, GUID *, _QWORD *))*v6)(
           v6,
           &GUID_189fdfb0_8b12_4d87_af0b_30194b800cd6,
           a1);
    (*((void (__fastcall **)(wil::details **))*v6 + 2))(v6);
    return v7;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v8);
    return 2147942414LL;
  }
}
