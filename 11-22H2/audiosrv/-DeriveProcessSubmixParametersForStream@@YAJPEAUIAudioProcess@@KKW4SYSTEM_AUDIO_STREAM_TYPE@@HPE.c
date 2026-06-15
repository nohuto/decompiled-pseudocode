/*
 * XREFs of ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@HPEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18006EE9C
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180043A3C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18000C918 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@QEAA@XZ @ 0x18004BD84 (--1-$unique_ptr@UProcessSubmixParams@@U-$default_delete@UProcessSubmixParams@@@std@@@std@@QEAA@X.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??R?$default_delete@UProcessSubmixParams@@@std@@QEBAXPEAUProcessSubmixParams@@@Z @ 0x1800D8B50 (--R-$default_delete@UProcessSubmixParams@@@std@@QEBAXPEAUProcessSubmixParams@@@Z.c)
 */

__int64 __fastcall DeriveProcessSubmixParametersForStream(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 **v7; // rdi
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 *v14; // rbx
  char v15; // cl
  bool v16; // al
  __int64 *v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = (__int64 **)a7;
  v12 = (__int64 *)*a7;
  *a7 = 0LL;
  if ( v12 )
    std::default_delete<ProcessSubmixParams>::operator()();
  if ( a4 || *(_BYTE *)(a6 + 48) || a5 )
    return 0LL;
  v13 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( v13 )
  {
    v13[1] = 0LL;
    v13[2] = 0LL;
    *v13 = 0LL;
    a7 = v13;
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v13, a1);
    v15 = 1;
    v16 = a3 != 3 && a3 != 8 && (a2 & 0x1000000) == 0;
    *((_BYTE *)v14 + 8) = v16;
    if ( !v16 && !g_UnrestrictedPerProcessLoopback )
      v15 = 0;
    *((_BYTE *)v14 + 8) = v15;
    v14[2] = a6;
    if ( v7 != &a7 )
    {
      v17 = *v7;
      a7 = 0LL;
      *v7 = v14;
      if ( v17 )
        std::default_delete<ProcessSubmixParams>::operator()();
    }
    std::unique_ptr<ProcessSubmixParams>::~unique_ptr<ProcessSubmixParams>(&a7);
    return 0LL;
  }
  a7 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3AB,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x8007000ELL);
  std::unique_ptr<ProcessSubmixParams>::~unique_ptr<ProcessSubmixParams>(&a7);
  return 2147942414LL;
}
