/*
 * XREFs of ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x14001796C
 * Callers:
 *     ?GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x14001818C (-GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140019BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     atexit @ 0x140028478 (atexit.c)
 *     _Init_thread_footer @ 0x140028758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400287C0 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceGraphObjectCacheManager@@@12@XZ @ 0x1400707EC (--$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCDeviceGraphO.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDeviceGraphObjectCacheManager(struct IDeviceGraphObjectCacheManager **a1)
{
  int v2; // ebx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( dword_1400CF930 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_1400CF930);
    if ( dword_1400CF930 == -1 )
    {
      v4 = (__int64 *)Microsoft::WRL::Details::Make<CDeviceGraphObjectCacheManager,>(&v10);
      v5 = *v4;
      *v4 = 0LL;
      qword_1400CF928 = v5;
      v6 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      atexit(GetDeviceGraphObjectCacheManager_::_2_::_dynamic_atexit_destructor_for__pCDGOCM__);
      Init_thread_footer(&dword_1400CF930);
    }
  }
  if ( qword_1400CF928 )
  {
    v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDeviceGraphObjectCacheManager **))qword_1400CF928)(
           qword_1400CF928,
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
