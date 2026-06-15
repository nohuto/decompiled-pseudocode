/*
 * XREFs of ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180044B88
 * Callers:
 *     ?OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180044860 (-OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?AddStreamAndSetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStream@@K@Z @ 0x1801058C0 (-AddStreamAndSetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStrea.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAAPEAPEAUIAudioStreamInfo@@QEAPEAU2@AEBQEAU2@@Z @ 0x18000A394 (--$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcessSubmixProxy::AddStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  struct IAudioStreamInfo *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _BYTE *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, __int64); // rsi
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  struct IAudioStreamInfo *v15; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp+18h]

  v15 = a2;
  v2 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v16 = v4;
  v5 = (_BYTE *)*((_QWORD *)this + 23);
  if ( v5 == *((_BYTE **)this + 24) )
  {
    std::vector<IAudioStreamInfo *>::_Emplace_reallocate<IAudioStreamInfo * const &>((_QWORD *)this + 22, v5, &v15);
    v2 = v15;
  }
  else
  {
    *(_QWORD *)v5 = v2;
    *((_QWORD *)this + 23) += 8LL;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  v6 = *((_QWORD *)this + 1);
  v14 = 0LL;
  (*(void (__fastcall **)(char *, __int64 *))(v6 + 80))((char *)this + 8, &v14);
  v7 = v14;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v14 + 240LL);
  v9 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v2 + 72LL))(v2);
  v10 = v8(v7, 0LL, v9, 0xFFFFFFFFLL);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE62,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
    return v11;
  }
  else
  {
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
    return 0LL;
  }
}
