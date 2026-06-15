/*
 * XREFs of ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18000DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18002C880 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetProcessingPeriod(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 *a4,
        __int64 *a5)
{
  int ProcessingPeriod; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  CEndpointCharacteristics *v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11[0] = 0LL;
  ProcessingPeriod = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                + 24LL))(
                       g_pEndpointCharacteristicsCache,
                       a2,
                       0LL,
                       0LL);
  v8 = ProcessingPeriod;
  if ( ProcessingPeriod < 0 )
  {
    v10 = 1164LL;
  }
  else
  {
    ProcessingPeriod = CEndpointCharacteristics::GetProcessingPeriod(v11[0], a3, a4, a5);
    v8 = ProcessingPeriod;
    if ( ProcessingPeriod >= 0 )
      return 0LL;
    v10 = 1166LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)ProcessingPeriod,
    (int)v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
  return v8;
}
