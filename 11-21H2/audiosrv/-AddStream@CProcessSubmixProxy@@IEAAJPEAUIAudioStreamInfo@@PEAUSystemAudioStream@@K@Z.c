/*
 * XREFs of ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStream@@K@Z @ 0x180018E70
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x18001A2C0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAAPEAPEAUIAudioStreamInfo@@QEAPEAU2@AEBQEAU2@@Z @ 0x180018FC0 (--$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProcessSubmixProxy::AddStream(
        CProcessSubmixProxy *this,
        struct IAudioStreamInfo *a2,
        struct SystemAudioStream *a3,
        unsigned int a4)
{
  struct IAudioStreamInfo *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  struct IAudioStreamInfo **v9; // rdx
  char *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioStreamInfo *v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = a2;
  v6 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v9 = (struct IAudioStreamInfo **)*((_QWORD *)this + 23);
  if ( v9 == *((struct IAudioStreamInfo ***)this + 24) )
  {
    std::vector<IAudioStreamInfo *>::_Emplace_reallocate<IAudioStreamInfo * const &>((char *)this + 176, v9, &v18);
    v6 = v18;
  }
  else
  {
    *v9 = v6;
    *((_QWORD *)this + 23) += 8LL;
  }
  if ( v6 )
    v10 = (char *)v6 - 8;
  else
    v10 = 0LL;
  (*(void (__fastcall **)(char *, struct SystemAudioStream *, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, a3, a4);
  if ( v8 )
    LeaveCriticalSection(v8);
  v11 = *((_QWORD *)this + 1);
  v17 = 0LL;
  (*(void (__fastcall **)(char *, __int64 *))(v11 + 80))((char *)this + 8, &v17);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 200LL))(
          v17,
          0LL,
          a4,
          0xFFFFFFFFLL);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12,
      v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    return v13;
  }
  else
  {
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return 0LL;
  }
}
