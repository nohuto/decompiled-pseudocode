/*
 * XREFs of ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x1400088E4
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400089B0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14001BB60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceGraphObjectCacheManager@@@12@XZ @ 0x1400026F8 (--$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCDeviceGraphO.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x14002FBF8 (atexit.c)
 *     _Init_thread_footer @ 0x14002FED8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x14002FF40 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDeviceGraphObjectCacheManager(struct IDeviceGraphObjectCacheManager **a1)
{
  int v2; // ebx
  CDeviceGraphObjectCacheManager **v4; // rax
  __int64 v5; // rcx
  CDeviceGraphObjectCacheManager *v6; // rcx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CDeviceGraphObjectCacheManager *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( dword_1400C17E8 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_1400C17E8);
    if ( dword_1400C17E8 == -1 )
    {
      v4 = Microsoft::WRL::Details::Make<CDeviceGraphObjectCacheManager,>(&v10);
      v5 = (__int64)*v4;
      *v4 = 0LL;
      qword_1400C17E0 = v5;
      v6 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(CDeviceGraphObjectCacheManager *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      atexit(GetDeviceGraphObjectCacheManager_::_2_::_dynamic_atexit_destructor_for__pCDGOCM__);
      Init_thread_footer(&dword_1400C17E8);
    }
  }
  if ( qword_1400C17E0 )
  {
    v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDeviceGraphObjectCacheManager **))qword_1400C17E0)(
           qword_1400C17E0,
           &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
           a1);
    if ( v2 >= 0 )
      return 0LL;
    v7 = 667LL;
  }
  else
  {
    v2 = -2147024882;
    v7 = 665LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)(unsigned int)v2,
    v8);
  return (unsigned int)v2;
}
