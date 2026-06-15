/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f033015d1266eb5b3cb7a7ade2ee99f9__void_IAudioStreamInfo___::_Do_call @ 0x180070580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x1800DAAE0 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_f033015d1266eb5b3cb7a7ade2ee99f9__void_IAudioStreamInfo___::_Do_call(
        __int64 a1,
        struct IAudioStreamInfo **a2)
{
  __int64 v2; // rsi
  struct IAudioStreamInfo *v4; // rbx
  const unsigned __int16 *v5; // rax
  int AppropriateStreamGroupAndSaDeviceForStream; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *a2;
  v5 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 168LL))(*(_QWORD *)(a1 + 24));
  AppropriateStreamGroupAndSaDeviceForStream = CAudioResourceManager::FindAppropriateStreamGroupAndSaDeviceForStream(
                                                 (CAudioResourceManager *)(v2 + 8),
                                                 *(struct EndpointCharacteristicsDescriptor **)(a1 + 16),
                                                 v5,
                                                 v4);
  if ( AppropriateStreamGroupAndSaDeviceForStream < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)AppropriateStreamGroupAndSaDeviceForStream);
}
