/*
 * XREFs of ??$MakeAndInitialize@VApplicationSpecificEndpointInfo@@UIApplicationSpecificEndpointInfo@@AEAPEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationSpecificEndpointInfo@@AEAPEAVCProcess@@@Z @ 0x180023C6C
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180028974 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015DBC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016C6C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ApplicationSpecificEndpointInfo@@QEAA@XZ @ 0x180024A00 (--0ApplicationSpecificEndpointInfo@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180042580 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationSpecificEndpointInfo,IApplicationSpecificEndpointInfo,CProcess * &>(
        _QWORD *a1,
        struct IAudioProcess **a2)
{
  void *v4; // rax
  int v5; // edi
  ApplicationSpecificEndpointInfo *v6; // rbx
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  ApplicationSpecificEndpointInfo *v9; // [rsp+50h] [rbp+18h]
  void *v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (ApplicationSpecificEndpointInfo *)v4;
  if ( v4 )
  {
    v10 = v4;
    v6 = ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo((ApplicationSpecificEndpointInfo *)v4);
    v9 = v6;
    v8 = 0LL;
    v5 = ApplicationSpecificEndpointInfo::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(ApplicationSpecificEndpointInfo *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_21cc96a8_b1ca_4369_9b14_88ae80a3abd0,
             a1);
      (*(void (__fastcall **)(ApplicationSpecificEndpointInfo *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(ApplicationSpecificEndpointInfo *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v8);
  return (unsigned int)v5;
}
