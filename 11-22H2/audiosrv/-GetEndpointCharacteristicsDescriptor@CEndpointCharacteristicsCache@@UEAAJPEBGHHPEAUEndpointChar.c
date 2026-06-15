/*
 * XREFs of ?GetEndpointCharacteristicsDescriptor@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180025690
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002575C (--4-$shared_ptr@VEffectPack@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCEndpointCharacteristics@@@Z @ 0x1800257A0 (--4-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCEndp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristicsCache::GetEndpointCharacteristicsDescriptor(
        CEndpointCharacteristicsCache *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        struct EndpointCharacteristicsDescriptor *a5)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  struct EndpointCharacteristicsDescriptor *v8; // rsi
  __int64 v9; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)this;
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *))(v5 + 24))(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1398,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v6,
      (int)&v13);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
    return v7;
  }
  else
  {
    v8 = a5;
    wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::operator=(a5, v13);
    v9 = v13;
    v10 = (struct _RTL_CRITICAL_SECTION *)(v13 + 288);
    EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 288));
    if ( v10 )
      LeaveCriticalSection(v10);
    std::shared_ptr<EffectPack>::operator=((char *)v8 + 8, v9 + 352);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return 0LL;
  }
}
