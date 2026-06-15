/*
 * XREFs of ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x18012B580
 * Callers:
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180127F48 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180129318 (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResour.c)
 *     ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x18012B8EC (-IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F40 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DB488 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::GetProcess(
        Sarm::CStreamResource *this,
        struct IAudioProcess **a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      a4);
  *a2 = 0LL;
  v4 = *(_QWORD *)this;
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL,
      v8);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x180,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
